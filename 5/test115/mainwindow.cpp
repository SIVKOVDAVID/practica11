#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    this->setFixedWidth(300);
    this->setFixedHeight(200);

    WidthL = new QLabel(this);
    WidthL->setGeometry(5, 5, 50, 20);

    HeightL = new QLabel(this);
    HeightL->setGeometry(5, 35, 50, 20);

    WidthEd = new QLineEdit(this);
    WidthEd->setGeometry(50, 5, 70, 20);

    HeightEd = new QLineEdit(this);
    HeightEd->setGeometry(50, 35, 70, 20);

    Pintarbut = new QPushButton(this);
    Pintarbut->setGeometry(130, 5, 70, 50);

    WidthL->setText("Width:");
    HeightL->setText("Height:");
    Pintarbut->setText("Pintar");

    QObject::connect(Pintarbut, &QPushButton::clicked, [&]() { MainWindow::reloadPic(); });

}

MainWindow::~MainWindow() {}

void MainWindow::reloadPic() {
    this->repaint();
}

void MainWindow::paintEvent(QPaintEvent *e) {
    int width = WidthEd->text().toInt();
    int height = HeightEd->text().toInt();
    QPainter *painter = new QPainter(this);
    painter->drawRect(10, 70 , width, height);
}



