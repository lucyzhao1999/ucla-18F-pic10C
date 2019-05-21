#include "musclepage.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_calendarWidget_clicked(const QDate &date)
{
    // add this date to the starting date of the exercise

}
