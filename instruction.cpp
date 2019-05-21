#include "instruction.h"
#include "ui_instruction.h"
#include <QPixmap>

instruction::instruction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::instruction)
{
    ui->setupUi(this);

    QPixmap bkgnd("://welcomebkgnd.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    this->setWindowTitle("Instructions");

}

instruction::~instruction()
{
    delete ui;
}

void instruction::on_pushButton_clicked()
{
    this->close();
}
