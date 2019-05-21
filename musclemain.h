#ifndef MUSCLEMAIN_H
#define MUSCLEMAIN_H

#include <QPixmap>
#include "muscleinfo.h"
#include <QPushButton>

// this class includes the funtionalities of the human model.
namespace Ui {
class musclemain;
}

class musclemain : public QDialog
{
    Q_OBJECT

public:
    explicit musclemain(QWidget *parent = nullptr);
    ~musclemain();

    muscleinfo* getinfoWidget(){
        return infoWidget;
    }


private slots:
    //send signal to display muscles information when the corresponding mucle
    // is clicked

    void on_absbutton_clicked();

    void on_armsbutton1_clicked();

    void on_armsbutton2_clicked();

    void on_legbutton1_clicked();

    void on_legbutton2_clicked();

    void on_backbutton_clicked();

    void on_hipbutton_clicked();

    void on_chestbutton_clicked();


    void on_sideArmButton_clicked();

    void on_sideHipButton_clicked();

    void on_sideLegButton_clicked();

    void on_turnSlider_sliderMoved(int position);


private:

    Ui::musclemain *ui;
    muscleinfo* infoWidget= nullptr;
};

#endif // MUSCLEMAIN_H
