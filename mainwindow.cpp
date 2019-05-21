#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>

// constructor

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setFixedSize(1200,750);

    // set the background of the window
    QPixmap bkgnd("://welcomebkgnd.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);


    ui->label_2->setStyleSheet("QLabel {color : white; }");

    user_name=ui->line_username->text();

    welcomeButton = ui->username_button;
    mainpage = new MainPage;

    // set the user name
    connect(this,SIGNAL(emit_username(QString)),mainpage,SLOT(set_username(QString)));

    connect(this,SIGNAL(emit_username(QString)),mainpage->get_todowidget(), SLOT(set_username(QString)));
}

// destructor
MainWindow::~MainWindow()
{
    delete ui;
    delete mainpage;
    delete welcomeButton;
}


void MainWindow::on_username_button_clicked()
{
    user_name=ui->line_username->text();
    emit emit_username(user_name);
    this->close();
    mainpage->show();
}

void MainWindow::on_pushButton_clicked()
{
    instruction* instructionpage = new instruction;
    instructionpage->show();
}
