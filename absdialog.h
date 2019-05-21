#ifndef ABSDIALOG_H
#define ABSDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QTextEdit>
/* This class constructs an abs window and stores information of abs exercises
 */
namespace Ui {
class AbsDialog;
}

class AbsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AbsDialog(QWidget *parent = nullptr);

    void hidePushButton();
    void hideaddButton();

    // this function returns the addButton of the class
    QPushButton* get_addButton(){return addbutton;}

    // this function returns the background of the class
    QLabel* get_bkgnd(){return bkgnd;}

    // this function shows the finished label
    void show_finished();


    ~AbsDialog();

private slots:
    // when the pushButton/ the finishedButton is clicked,
    // corresponding procedures will be performed
    void on_pushButton_clicked();


    void on_finishedbutton_clicked();

private:
    Ui::AbsDialog *ui;
    QPushButton* addbutton = nullptr;
    QLabel* bkgnd= nullptr;
    QTextEdit* txt= nullptr;

};

#endif // ABSDIALOG_H
