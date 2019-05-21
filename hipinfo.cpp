#include "hipinfo.h"
#include "ui_hipinfo.h"

// this is the constructor of the class hipinfo
hipinfo::hipinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hipinfo)
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
hipinfo::~hipinfo()
{
    delete ui;
    delete addbutton;
    delete bkgnd;
    delete txt;}

// these functions hide corresponding buttons in the ui
void hipinfo::hideCancelButton(){
    ui->cancelButton->hide();
}

void hipinfo::hideAddButton(){
    ui->addButton->hide();
}



void hipinfo::on_cancelButton_clicked()
{
    this->hide();
}

// this function shows the finished button back in the ui
void hipinfo::show_finished(){
    ui->finishedbutton->show();
}

// when the finished button is clicked, the finish label will be shown in the todoList
void hipinfo::on_finishedbutton_clicked()
{
    ui->finishedlabel->show();
}
