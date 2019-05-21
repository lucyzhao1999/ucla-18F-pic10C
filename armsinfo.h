#ifndef ARMSINFO_H
#define ARMSINFO_H

#include <QDialog>
#include <QLabel>
#include <QTextEdit>

// this class constructs an armsinfo window
namespace Ui {
class armsinfo;
}

class armsinfo : public QDialog
{
    Q_OBJECT

public:
    explicit armsinfo(QWidget *parent = nullptr);

    void hideCancelButton();
    void hideAddButton();

    // this function returns the addButton of the class
    QPushButton* get_addButton(){return addbutton;}

    // this function returns the background of the class
    QLabel* get_bkgnd(){return bkgnd;}

    // this function shows the finished label
    void show_finished();

    ~armsinfo();

private slots:
    // when the pushButton/ the finishedButton is clicked,
    // corresponding procedures will be performed
    void on_cancelButton_clicked();

    void on_finishedbutton_clicked();

private:
    Ui::armsinfo *ui;
    QPushButton* addbutton= nullptr;
    QLabel* bkgnd= nullptr;
    QTextEdit* txt= nullptr;

};

#endif // ARMSINFO_H
