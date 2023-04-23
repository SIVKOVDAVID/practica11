#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QPainter>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QLabel *WidthL;
    QLabel *HeightL;
    QPushButton *Pintarbut;
    QLineEdit *WidthEd;
    QLineEdit *HeightEd;

private slots:
    void reloadPic();

protected slots:
    void paintEvent(QPaintEvent *e);
};

#endif


