#ifndef BACKINFO_H
#define BACKINFO_H

#include <QDialog>
#include <QLabel>
#include <QTextEdit>

// this class constructs a backinfo window
namespace Ui {
class backinfo;
}

class backinfo : public QDialog
{
    Q_OBJECT

public:
    explicit backinfo(QWidget *parent = nullptr);

    void hideCancelButton();
    void hideAddButton();

    // this function returns the addButton of the class
    QPushButton* get_addButton(){return addbutton;}

    // this function returns the background of the class
    QLabel* get_bkgnd(){return bkgnd;}

    // this function shows the finished label
    void show_finished();

    ~backinfo();

private slots:
    // when the pushButton/ the finishedButton is clicked,
    // corresponding procedures will be performed
    void on_cancelButton_clicked();

    void on_finishedbutton_clicked();

private:
    Ui::backinfo *ui= nullptr;
    QPushButton* addbutton= nullptr;
    QLabel* bkgnd= nullptr;
    QTextEdit* txt= nullptr;
};

#endif // BACKINFO_H
