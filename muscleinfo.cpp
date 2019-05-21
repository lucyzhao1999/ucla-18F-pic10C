#include "muscleinfo.h"
#include "ui_muscleinfo.h"

muscleinfo::muscleinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::muscleinfo)
{
    ui->setupUi(this);

    // initialize the pointers
    absInfo = new AbsDialog;
    armsInfo = new armsinfo;
    legsInfo = new legsinfo;
    backInfo = new backinfo;
    hipInfo = new hipinfo;
    chestInfo = new chestinfo;


    mainlayout =  new QVBoxLayout;

    // set the layout of the window
    this->setLayout(mainlayout);


}

// Show the abs muscle information.
void muscleinfo::absinfo(){

    if(no_absinfo){
        mainlayout->addWidget(absInfo);
        no_absinfo = false;
    }
    else{
        absInfo->show();
    }

}

// Show the arms muscle information.
void muscleinfo::arms(){
    if(no_armsinfo){
        mainlayout->addWidget(armsInfo);
        no_armsinfo = false;
    } // if the widget has not been added, add the new widget
    else{
        armsInfo->show();
    }
}

// Show the legs muscle information.
void muscleinfo::legs(){
    if(no_legsinfo){
        mainlayout->addWidget(legsInfo);
        no_legsinfo = false;
    }
    // if the widget has not been added, add the new widget
    else{
        legsInfo->show();
    }
}

// Show the back muscle information.
void muscleinfo::back(){
    if(no_backinfo){
        mainlayout->addWidget(backInfo);
        no_backinfo = false;
    }
    // if the widget has not been added, add the new widget
    else{
        backInfo->show();
    }
}

// Show the hip muscle information.
void muscleinfo::hips(){
    if(no_hipinfo){
        mainlayout->addWidget(hipInfo);
        no_hipinfo = false;
    }
    // if the widget has not been added, add the new widget
    else{
        hipInfo->show();
    }
}

// Show the chest muscle information.
void muscleinfo::chest(){
    if(no_chestinfo){
        mainlayout->addWidget(chestInfo);
        no_chestinfo = false;
    }
    // if the widget has not been added, add the new widget
    else{
        chestInfo->show();
    }
}



muscleinfo::~muscleinfo()
{
    delete ui;
    delete absInfo;
    delete armsInfo;
    delete legsInfo;
    delete backInfo;
    delete hipInfo;
    delete chestInfo;
    delete mainlayout;
}




