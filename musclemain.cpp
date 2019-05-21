#include "musclemain.h"
#include "ui_musclemain.h"


// constructor
musclemain::musclemain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::musclemain)
{
    ui->setupUi(this);
    infoWidget = new muscleinfo;

    // make these buttons transparent
    ui->absbutton->setFlat(true);
    ui->chestbutton->setFlat(true);
    ui->armsbutton1->setFlat(true);
    ui->armsbutton2->setFlat(true);
    ui->legbutton1->setFlat(true);
    ui->legbutton2->setFlat(true);

    ui->backbutton->setFlat(true);
    ui->hipbutton->setFlat(true);

    ui->sideArmButton->setFlat(true);
    ui->sideHipButton->setFlat(true);
    ui->sideLegButton->setFlat(true);

//hide buttons on the muscles.
    ui->backbutton->hide();
    ui->hipbutton->hide();

    ui->sideArmButton->hide();
    ui->sideHipButton->hide();
    ui->sideLegButton->hide();



    ui->body_label_2->hide();

}


// destructor
musclemain::~musclemain()
{
    delete ui;
    delete infoWidget;
}


//send signal to display abs information
void musclemain::on_absbutton_clicked()
{
    infoWidget->absinfo();
}
//send signal to display arms information

void musclemain::on_armsbutton1_clicked()
{
    infoWidget->arms();

}

// send signal to display arms information
void musclemain::on_armsbutton2_clicked()
{
    infoWidget->arms();

}

//send signal to display legs information
void musclemain::on_legbutton1_clicked()
{
    infoWidget->legs();
}

//send signal to display legs information
void musclemain::on_legbutton2_clicked()
{
    infoWidget->legs();
}

//send signal to display back information

void musclemain::on_backbutton_clicked()
{
    infoWidget->back();

}
//send signal to display hip information

void musclemain::on_hipbutton_clicked()
{
    infoWidget->hips();

}
//send signal to display chest information

void musclemain::on_chestbutton_clicked()
{
    infoWidget->chest();
}

//send signal to display arm information
void musclemain::on_sideArmButton_clicked()
{
    infoWidget->arms();
}
//send signal to display hip information
void musclemain::on_sideHipButton_clicked()
{
    infoWidget->hips();
}

//send signal to display leg information
void musclemain::on_sideLegButton_clicked()
{
    infoWidget->legs();
}

//change the display of body model and hide or show the corresponding
// muscle button when rotating body diagram by slide botton.
void musclemain::on_turnSlider_sliderMoved(int position)
{
    if(position <= 33){
        QPixmap front_pix("://musclefront.png");

        ui->body_label->setPixmap(front_pix);
        ui->body_label->lower();

        ui->body_label->show();
        ui->body_label_2->hide();

        ui->absbutton->show();
        ui->armsbutton1->show();
        ui->armsbutton2->show();
        ui->legbutton1->show();
        ui->legbutton2->show();
        ui->chestbutton->show();

        ui->backbutton->hide();
        ui->hipbutton->hide();

        ui->sideArmButton->hide();
        ui->sideHipButton->hide();
        ui->sideLegButton->hide();

    }
    if((position>33)&&(position<=66)){
        ui->body_label->hide();
        ui->body_label_2->show();

        ui->sideArmButton->show();
        ui->sideHipButton->show();
        ui->sideLegButton->show();

        ui->absbutton->hide();
        ui->armsbutton1->hide();
        ui->armsbutton2->hide();
        ui->legbutton1->hide();
        ui->legbutton2->hide();
        ui->chestbutton->hide();

        ui->backbutton->hide();
        ui->hipbutton->hide();
    }

    if(position>66){

        QPixmap back_pix("://muscleback.png");

        ui->body_label->setPixmap(back_pix);
        ui->body_label->lower();

        ui->body_label->show();
        ui->body_label_2->hide();

        ui->backbutton->show();
        ui->hipbutton->show();
        ui->legbutton1->show();
        ui->legbutton2->show();
        ui->armsbutton1->show();
        ui->armsbutton2->show();


        ui->absbutton->hide();
        ui->chestbutton->hide();

        ui->sideArmButton->hide();
        ui->sideHipButton->hide();
        ui->sideLegButton->hide();

    }
}
