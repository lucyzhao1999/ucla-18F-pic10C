#include "backinfo.h"
#include "ui_backinfo.h"

// this is the constructor for the class
backinfo::backinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::backinfo)
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
backinfo::~backinfo()
{
    delete ui;
    delete addbutton;
    delete bkgnd;
    delete txt;}


// these functions hide corresponding buttons in the ui
void backinfo::hideCancelButton(){
    ui->cancelButton->hide();
}

void backinfo::hideAddButton(){
    ui->addButton->hide();
}



void backinfo::on_cancelButton_clicked()
{
    this->hide();
}

// this function shows the finished button back in the ui
void backinfo::show_finished(){
    ui->finishedbutton->show();
}

// when the finished button is clicked, the finish label will be shown in the todoList
void backinfo::on_finishedbutton_clicked()
{
    ui->finishedlabel->show();
}
