#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDoubleSpinBox>


class MainWindow : public QMainWindow
{
    Q_OBJECT
    QDoubleSpinBox * spinb;
public:
    MainWindow(QWidget *parent = 0);
    double getX();
    ~MainWindow();
};

#endif // MAINWINDOW_H
