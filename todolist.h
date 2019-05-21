#ifndef TODOLIST_H
#define TODOLIST_H

#include "musclemain.h"
#include <sstream>


/* This file contains information of the muscle page of the application
 * Definition and explanations of functions are in todolist.cpp
 */

namespace Ui {
class todolist;
}

class todolist : public QDialog
{
    Q_OBJECT

public:
    explicit todolist(QWidget *parent = nullptr);
    ~todolist();

private slots:

    // add the muscle and training information to the to-do-list
    void add_abs_to_todolist();
    void add_arms_to_todolist();
    void add_legs_to_todolist();
    void add_back_to_todolist();
    void add_hip_to_todolist();
    void add_chest_to_todolist();

    // input the username to the title of the todolist.
    void set_username(QString);

    // count the number of muscle added into the list
    void set_taskcount();

    // delete the selected item on the list.
    void on_deletebutton_clicked();

    // add one count to the total number of finsihed training
    void add_finished(){finishedcount++;}

private:
    Ui::todolist *ui;
    QVBoxLayout* mainlayout= nullptr;

    int taskcount = 0;
    int finishedcount = 0;
};

#endif // TODOLIST_H
