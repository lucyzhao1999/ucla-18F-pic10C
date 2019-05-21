#include "absdialog.h"
#include "ui_absdialog.h"

//  This is the constructor of the class absdialog
AbsDialog::AbsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AbsDialog)
{
    ui->setupUi(this);

    addbutton = ui->addButton;
    bkgnd = ui->bkgnd;
    txt = ui->textEdit;
    // saves information from the ui to the class

    ui->finishedlabel->hide();
    ui->finishedbutton->hide();
    // these two buttons are hidden by default
}

// this is the destructor of the class
AbsDialog::~AbsDialog()
{
    delete ui;
    delete addbutton;
    delete bkgnd;
    delete txt;

}

// these functions hide corresponding buttons in the ui
void AbsDialog::hidePushButton(){
    ui->pushButton->hide();
}

void AbsDialog::hideaddButton(){
    ui->addButton->hide();
}

void AbsDialog::on_pushButton_clicked()
{
    this-> hide();
}

// this function shows the finished button back in the ui
void AbsDialog::show_finished(){
    ui->finishedbutton->show();
}

// when the finished button is clicked, the finish label will be shown in the todoList
void AbsDialog::on_finishedbutton_clicked()
{
    ui->finishedlabel->show();
}
