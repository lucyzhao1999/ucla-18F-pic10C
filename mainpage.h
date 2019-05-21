#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMediaPlayer>
#include <sstream>

#include "musclemain.h"
#include "todolist.h"



/* This file contains information of the mainpage of the application
 * Definition and explanations of functions are in mainpage.cpp
 */

namespace Ui {
class MainPage;
}

class MainPage : public QDialog
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = nullptr);
    todolist* get_todowidget() const {return todoWidget;}
    ~MainPage();


private slots:

    void set_username(QString);//get username and set name on muscle main page

    void on_muteButton_clicked();//click button to mute background music

    void on_sliderVolume_sliderMoved(int position);//change the volum of background music

    void on_quitButton_clicked();//quit the application

    void on_hardcoreStyleButton_clicked();//change to hard core style music

    void on_relaxStyleButton_clicked();//change to relax style music.


private:

    Ui::MainPage *ui;

    todolist* todoWidget= nullptr;

    musclemain* muscleWidget= nullptr;
    muscleinfo* infopage= nullptr;
    QMediaPlayer* music = nullptr;
    bool music_muted = false;

    QHBoxLayout* mainlayout= nullptr;


};

#endif // MAINPAGE_H
