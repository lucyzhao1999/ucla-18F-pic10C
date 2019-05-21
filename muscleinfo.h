#ifndef MUSCLEINFO_H
#define MUSCLEINFO_H

#include <QDialog>

#include "absdialog.h"
#include "armsinfo.h"
#include "legsinfo.h"
#include "backinfo.h"
#include "hipinfo.h"

#include "chestinfo.h"

#include <QVBoxLayout>

 // this class contains and can use the information of muscle.
namespace Ui {
class muscleinfo;
}

class muscleinfo : public QDialog
{
    Q_OBJECT

public:
    explicit muscleinfo(QWidget *parent = nullptr);//create new widget
   //following functions show the infomation of muscles.
    void absinfo();
    void arms();
    void legs();
    void back();
    void hips();
    void chest();
// return information of muscles.
    AbsDialog* get_abs()const{return absInfo;}
    armsinfo* get_arms()const{return armsInfo;}
    legsinfo* get_legs()const{return legsInfo;}
    backinfo* get_back()const{return backInfo;}
    hipinfo* get_hip()const {return hipInfo;}
    chestinfo* get_chest()const {return chestInfo;}


    ~muscleinfo();


private:
    Ui::muscleinfo *ui;

    AbsDialog* absInfo= nullptr;
    armsinfo* armsInfo= nullptr;
    legsinfo* legsInfo= nullptr;

    backinfo* backInfo= nullptr;
    hipinfo* hipInfo= nullptr;

    chestinfo* chestInfo = nullptr;

    bool no_absinfo = true;
    bool no_armsinfo = true;
    bool no_legsinfo = true;
    bool no_backinfo = true;
    bool no_hipinfo = true;
    bool no_chestinfo = true;

    QVBoxLayout* mainlayout;
};



#endif // MUSCLEINFO_H
