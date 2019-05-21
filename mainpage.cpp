#include "mainpage.h"
#include "ui_mainpage.h"


/* constructor of the class MainPage
 */
MainPage::MainPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainPage)
{
    ui->setupUi(this);

    // add background picture
    this->setFixedSize(1200,750);

    QPixmap bkgnd("://mainbkgnd.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    //add background music
    music = new QMediaPlayer();
    music -> setMedia(QUrl("qrc:/sounds/avicii-wake-me-up-official-video.mp3"));
    music->play();


    //set layout of muscle main page
    mainlayout = new QHBoxLayout;

    muscleWidget = new musclemain;
    todoWidget = new todolist;
    muscleinfo* infopage = muscleWidget->getinfoWidget();

    // adding widgets to the layout
    mainlayout-> addWidget(infopage);
    mainlayout-> addWidget(muscleWidget);
    mainlayout-> addWidget(todoWidget);

    QVBoxLayout* vlayout = new QVBoxLayout;
    ui->welcomelabel->setFixedSize(1200,50);
    vlayout->addWidget(ui->welcomelabel);
    vlayout->addLayout(mainlayout);



    this-> setLayout(vlayout);
    this-> setWindowTitle("Welcome to Fitness App");

    //these functions add exercises to the to-do list
    connect(infopage->get_abs()->get_addButton(),SIGNAL(pressed()),
            todoWidget,SLOT(add_abs_to_todolist()));

    connect(infopage->get_arms()->get_addButton(),SIGNAL(pressed()),
            todoWidget,SLOT(add_arms_to_todolist()));

    connect(infopage->get_legs()->get_addButton(), SIGNAL(pressed()),
            todoWidget,SLOT(add_legs_to_todolist()));

    connect(infopage->get_back()->get_addButton(),SIGNAL(pressed()),
            todoWidget,SLOT(add_back_to_todolist()));

    connect(infopage->get_hip()->get_addButton(),SIGNAL(pressed()),
            todoWidget,SLOT(add_hip_to_todolist()));

    connect(infopage->get_chest()->get_addButton(),SIGNAL(pressed()),
            todoWidget,SLOT(add_chest_to_todolist()));


    QFont font;
    font.setBold(true); // set it to be bold
    font.setItalic(true); // set it to be italic
    font.setPointSize(25); // set the font to be 25


    ui->welcomelabel->setFont(font); // give the font above to the sentence
    ui->welcomelabel->setAlignment(Qt::AlignCenter); // make the word align in the middle

    ui->label->setStyleSheet("QLabel { color : white; }");
    ui->volumeTxt->setStyleSheet("QLabel { color : white; }");

    ui->label_2->setStyleSheet("QLabel { color : white; }");
    ui->muteButton->setStyleSheet("QLabel { color : black; }");

}

// destructor
MainPage::~MainPage()
{
    delete ui;

    delete todoWidget;
    delete muscleWidget;
    delete infopage;
    delete music;
    delete mainlayout;
}

//collect name of user
void MainPage::set_username(QString k){
    std::stringstream sstr;
    sstr << "Welcome, " ;
    sstr << k.toStdString();
    sstr << "! Let's Get Started!";
    ui->welcomelabel->setText(QString::fromStdString(sstr.str()));

    ui->welcomelabel->setStyleSheet("QLabel {color : white }");
}

//mute the background music
void MainPage::on_muteButton_clicked()
{
    if(!music_muted) {
        music->setVolume(0);
        ui->sliderVolume->setValue(0);
        music_muted = true;
    }
    else{
        music->setVolume(50);
        ui->sliderVolume->setValue(50);

        music_muted = false;
    }
}
//change the volum of backgroun music
void MainPage::on_sliderVolume_sliderMoved(int position)
{
    music->setVolume(position);
}

//close the application
void MainPage::on_quitButton_clicked()
{
    this->close();
}
//play the hard core style music
void MainPage::on_hardcoreStyleButton_clicked()
{
    music -> setMedia(QUrl("qrc:/sounds/avicii-wake-me-up-official-video.mp3"));
    music->play();

    QPixmap bkgnd1("://mainbkgnd.jpg");
    bkgnd1 = bkgnd1.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd1);
    this->setPalette(palette);

}
//switch to relax style music
void MainPage::on_relaxStyleButton_clicked()
{
    music -> setMedia(QUrl("qrc:/sounds/relax_music.mp3"));
    music->play();

    QPixmap bkgnd2("://relax_background.jpg");
    bkgnd2 = bkgnd2.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd2);
    this->setPalette(palette);
}


