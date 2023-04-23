#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    this->setFixedWidth(300);
    this->setFixedHeight(200);

    cat = new QLabel(this);
    cat->setPixmap(QPixmap("D:/PP/10/test10/ru.png"));
    cat->setScaledContents(true);
    cat->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    cat->setGeometry(10,10,280,100);

    path = new QLineEdit(this);
    path->setGeometry(10,120,280,20);

    openbutton = new QPushButton(this);
    openbutton->setGeometry(10,150,60,25);
    openbutton->setText("Open");

    connect(openbutton, &QPushButton::clicked, this, &MainWindow::opening);
}

MainWindow::~MainWindow() {}

void MainWindow::opening() {
    cat->setPixmap(QPixmap(path->text()));
}



