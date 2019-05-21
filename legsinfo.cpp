#include "legsinfo.h"
#include "ui_legsinfo.h"

// this is the constructor of the class legsinfo
legsinfo::legsinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::legsinfo)
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
legsinfo::~legsinfo()
{
    delete ui;
    delete addbutton;
    delete bkgnd;
    delete txt;}

// these functions hide corresponding buttons in the ui
void legsinfo::hideCancelButton(){
    ui->cancelButton->hide();
}

void legsinfo::hideAddButton(){
    ui->addButton->hide();
}


void legsinfo::on_cancelButton_clicked()
{
    this->hide();
}

// this function shows the finished button back in the ui
void legsinfo::show_finished(){
    ui->finishedbutton->show();
}

// when the finished button is clicked, the finish label will be shown in the todoList
void legsinfo::on_finishedbutton_clicked()
{
    ui->finishedlabel->show();
}
