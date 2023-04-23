#include<QtWidgets>
#include<iostream>
using namespace std;

void opening(QLabel *flag, QLineEdit *path) {
    flag->setPixmap(QPixmap(path->text()));
}

int main(int args, char *argv[]) {
    QApplication app(args, argv);
    QMainWindow mainWin;
    mainWin.setFixedWidth(300);
    mainWin.setFixedHeight(200);

    QLabel *cat = new QLabel(&mainWin);
    cat->setScaledContents(true);
    cat->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    cat->setGeometry(10,10,280,100);

    QLineEdit *path = new QLineEdit(&mainWin);
    path->setGeometry(10,120,280,20);

    QPushButton *openbutton = new QPushButton(&mainWin);
    openbutton->setGeometry(10,150,60,25);
    openbutton->setText("Open");

    QObject::connect(openbutton, &QPushButton::clicked, [&]() { opening(cat, path); });

    mainWin.show();
    return app.exec();
}



