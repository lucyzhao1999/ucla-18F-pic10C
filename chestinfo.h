#ifndef CHESTINFO_H
#define CHESTINFO_H

#include <QDialog>
#include <QLabel>
#include <QTextEdit>
// this class constructs a chestinfo window

namespace Ui {
class chestinfo;
}

class chestinfo : public QDialog
{
    Q_OBJECT

public:
    explicit chestinfo(QWidget *parent = nullptr);

    void hideCancelButton();
    void hideAddButton();
    // this function returns the addButton of the class
    QPushButton* get_addButton(){return addbutton;}

    // this function returns the background of the class
    QLabel* get_bkgnd(){return bkgnd;}

    // this function shows the finished label
    void show_finished();

    ~chestinfo();

private slots:
    // when the pushButton/ the finishedButton is clicked,
    // corresponding procedures will be performed

    void on_cancelButton_clicked();

    void on_finishedbutton_clicked();

private:
    Ui::chestinfo *ui;
    QPushButton* addbutton= nullptr;
    QLabel* bkgnd= nullptr;
    QTextEdit* txt= nullptr;

};

#endif // CHESTINFO_H
