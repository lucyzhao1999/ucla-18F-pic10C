#include "todolist.h"
#include "ui_todolist.h"
#include <QListWidgetItem>
#include <sstream>

// constructor
todolist::todolist(QWidget *parent):
    QDialog(parent),
    ui(new Ui::todolist)
{
    ui->setupUi(this);

    mainlayout = new QVBoxLayout;

    // set the style of the to do list
    ui->list->setStyleSheet("background-color: transparent;");
    ui->label->setStyleSheet("QLabel { background-color : white; color : black; }");
    ui->countlabel->setText("Start Adding Tasks Here! ");


}
//destructor
todolist::~todolist()
{
    delete ui;
    delete mainlayout;
}


 // count the number of muscle added into the list
void todolist::set_taskcount(){
    taskcount = ui->list->count();
    int taskleft = taskcount-finishedcount;
    std::stringstream sstr;
    sstr << "Number of Tasks Left: " << taskleft;
    ui->countlabel->setText(QString::fromStdString(sstr.str()));
    // output the number of tasks left there
}

// add the abs muscle and training information to the to-do-list
void todolist::add_abs_to_todolist()
{

    QListWidgetItem *listWidgetItem = new QListWidgetItem(ui->list);

        //Adding the item to the listwidget
    ui->list->addItem (listWidgetItem);

        //Creating an object of the designed widget which is to be added to the listwidget
    AbsDialog *abs = new AbsDialog;
    abs->hidePushButton();
    abs->hideaddButton();
    abs->setFixedSize(360,390);
    abs->get_bkgnd()->setFixedSize(360,391);
    abs->show_finished();

        //Making sure that the listWidgetItem has the same size as the TheWidgetItem
    listWidgetItem->setSizeHint (abs->size());

        //Finally adding the itemWidget to the list
    ui->list->setItemWidget (listWidgetItem, abs);
    this->repaint();

    set_taskcount();

}

// add the arm muscle and training information to the to-do-list
void todolist::add_arms_to_todolist()
{

    QListWidgetItem *listWidgetItem = new QListWidgetItem(ui->list);

        //Adding the item to the listwidget
    ui->list->addItem (listWidgetItem);

        //Creating an object of the designed widget which is to be added to the listwidget
    armsinfo *arms = new armsinfo;
    arms->hideCancelButton();
    arms->hideAddButton();
    arms->setFixedSize(360,390);
    arms->get_bkgnd()->setFixedSize(360,391);
    arms->show_finished();
        //Making sure that the listWidgetItem has the same size as the TheWidgetItem
    listWidgetItem->setSizeHint (arms->size());

        //Finally adding the itemWidget to the list
    ui->list->setItemWidget (listWidgetItem, arms);
    this->repaint();

    set_taskcount();

}

// add the leg muscle and training information to the to-do-list
void todolist::add_legs_to_todolist()
{

    QListWidgetItem *listWidgetItem = new QListWidgetItem(ui->list);

        //Adding the item to the listwidget
    ui->list->addItem (listWidgetItem);

        //Creating an object of the designed widget which is to be added to the listwidget
    legsinfo *legs = new legsinfo;
    legs->hideCancelButton();
    legs->hideAddButton();
    legs->setFixedSize(360,390);
    legs->get_bkgnd()->setFixedSize(360,391);
    legs->show_finished();

        //Making sure that the listWidgetItem has the same size as the TheWidgetItem
    listWidgetItem->setSizeHint (legs->size());

        //Finally adding the itemWidget to the list
    ui->list->setItemWidget (listWidgetItem, legs);
    this->repaint();


    set_taskcount();

}

// add the back muscle and training information to the to-do-list
void todolist::add_back_to_todolist()
{

    QListWidgetItem *listWidgetItem = new QListWidgetItem(ui->list);

        //Adding the item to the listwidget
    ui->list->addItem (listWidgetItem);

        //Creating an object of the designed widget which is to be added to the listwidget
    backinfo *back = new backinfo;
    back->hideCancelButton();
    back->hideAddButton();
    back->setFixedSize(360,390);
    back->get_bkgnd()->setFixedSize(360,391);
    back->show_finished();

        //Making sure that the listWidgetItem has the same size as the TheWidgetItem
    listWidgetItem->setSizeHint (back->size());

        //Finally adding the itemWidget to the list
    ui->list->setItemWidget (listWidgetItem, back);
    this->repaint();

    set_taskcount();
}
// add the hip muscle and training information to the to-do-list
void todolist::add_hip_to_todolist()
{

    QListWidgetItem *listWidgetItem = new QListWidgetItem(ui->list);

        //Adding the item to the listwidget
    ui->list->addItem (listWidgetItem);

        //Creating an object of the designed widget which is to be added to the listwidget
    hipinfo *hips = new hipinfo;
    hips->hideCancelButton();
    hips->hideAddButton();
    hips->setFixedSize(360,390);
    hips->get_bkgnd()->setFixedSize(360,391);
    hips->show_finished();

        //Making sure that the listWidgetItem has the same size as the TheWidgetItem
    listWidgetItem->setSizeHint (hips->size());

        //Finally adding the itemWidget to the list
    ui->list->setItemWidget (listWidgetItem, hips);
    this->repaint();
    set_taskcount();

}
// add the chest muscle and training information to the to-do-list
void todolist::add_chest_to_todolist()
{

    QListWidgetItem *listWidgetItem = new QListWidgetItem(ui->list);

        //Adding the item to the listwidget
    ui->list->addItem (listWidgetItem);

        //Creating an object of the designed widget which is to be added to the listwidget
    chestinfo *chest = new chestinfo;
    chest->hideCancelButton();
    chest->hideAddButton();
    chest->setFixedSize(360,390);
    chest->get_bkgnd()->setFixedSize(360,391);
    chest->show_finished();

        //Making sure that the listWidgetItem has the same size as the TheWidgetItem
    listWidgetItem->setSizeHint (chest->size());

        //Finally adding the itemWidget to the list
    ui->list->setItemWidget (listWidgetItem, chest);
    this->repaint();
    set_taskcount();

}


 // input the username to the title of the todolist.
void todolist::set_username(QString k){
    std::stringstream sstr;
    sstr << k.toStdString();
    sstr << "'s To-Do List 💪";
    ui->label->setText(QString::fromStdString(sstr.str()));

    QFont font;
    font.setBold(true); // set it to be bold
    font.setItalic(true); // set it to be italic
    font.setPointSize(18); // set the font to be 25

    ui->label->setFont(font);
    ui->label->setStyleSheet("QLabel {color : white }");
    ui->label->setAlignment(Qt::AlignCenter);
}

// delete the selected item on the list.
void todolist::on_deletebutton_clicked()
{
    delete ui->list->currentItem();
    set_taskcount();
}
