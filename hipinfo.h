#ifndef HIPINFO_H
#define HIPINFO_H

#include <QDialog>
#include <QLabel>
#include <QTextEdit>

// this class constructs a hip
namespace Ui {
class hipinfo;
}

class hipinfo : public QDialog
{
    Q_OBJECT

public:
    explicit hipinfo(QWidget *parent = nullptr);
    void hideCancelButton();
    void hideAddButton();

    // this function returns the addButton of the class
    QPushButton* get_addButton(){return addbutton;}

    // this function returns the background of the class
    QLabel* get_bkgnd(){return bkgnd;}

    // this function shows the finished label
    void show_finished();


    ~hipinfo();

private slots:
    // when the pushButton/ the finishedButton is clicked,
    // corresponding procedures will be performed

    void on_cancelButton_clicked();

    void on_finishedbutton_clicked();

private:
    Ui::hipinfo *ui;
    QPushButton* addbutton= nullptr;
    QLabel* bkgnd= nullptr;
    QTextEdit* txt= nullptr;
};

#endif // HIPINFO_H
