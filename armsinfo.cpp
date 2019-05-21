#include "armsinfo.h"
#include "ui_armsinfo.h"

// this is the constructor of the class armsinfo
armsinfo::armsinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::armsinfo)
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
armsinfo::~armsinfo()
{
    delete ui;
    delete addbutton;
    delete bkgnd;
    delete txt;}

// these functions hide corresponding buttons in the ui
void armsinfo::hideCancelButton(){
    ui->cancelButton->hide();
}

void armsinfo::hideAddButton(){
    ui->addButton->hide();
}


void armsinfo::on_cancelButton_clicked()
{
    this->hide();
}

// this function shows the finished button back in the ui
void armsinfo::show_finished(){
    ui->finishedbutton->show();
}

// when the finished button is clicked, the finish label will be shown in the todoList
void armsinfo::on_finishedbutton_clicked()
{
    ui->finishedlabel->show();
}
