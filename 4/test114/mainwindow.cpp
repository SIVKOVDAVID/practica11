#include <troad.h>
#include <mainwindow.h>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    this->setFixedWidth(500);
    this->setFixedHeight(300);

TRoad road;
    road.Length=500;
    road.Width=300;

    roadnew = new QLabel(this);
    roadnew->setPixmap(QPixmap("C:/Sivkov David/Homework ggpi/11/4/road.png"));
    roadnew->setScaledContents(true);
    roadnew->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    roadnew->setGeometry(0,0,road.Length,road.Width);
}

MainWindow::~MainWindow() {}

