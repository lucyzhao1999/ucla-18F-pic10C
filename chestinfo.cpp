#include "chestinfo.h"
#include "ui_chestinfo.h"

// This is the constructor of the class chestinfo
chestinfo::chestinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chestinfo)
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
chestinfo::~chestinfo()
{
    delete ui;
    delete addbutton;
    delete bkgnd;
    delete txt;}

// these functions hide corresponding buttons in the ui
void chestinfo::hideCancelButton(){
    ui->cancelButton->hide();
}

void chestinfo::hideAddButton(){
    ui->addButton->hide();
}


void chestinfo::on_cancelButton_clicked()
{
    this->hide();
}

// this function shows the finished button back in the ui
void chestinfo::show_finished(){
    ui->finishedbutton->show();
}

// when the finished button is clicked, the finish label will be shown in the todoList
void chestinfo::on_finishedbutton_clicked()
{
    ui->finishedlabel->show();
}
