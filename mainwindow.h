#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainpage.h"
#include "instruction.h"

/* This file contains information of the mainwindow of the application
 * Definition and explanations of functions are in mainwindow.cpp
 */
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString get_username() const{
        return user_name;
    }

signals:
    void emit_username(QString);

private slots:

    void on_username_button_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QString user_name;
    MainPage* mainpage= nullptr;
    QPushButton* welcomeButton= nullptr;

};

#endif // MAINWINDOW_H
