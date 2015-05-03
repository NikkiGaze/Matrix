#include "mainwindow.h"
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    spinb = new QDoubleSpinBox(this);
    spinb->setSingleStep(0.1);
    QHBoxLayout * lt = new QHBoxLayout(this);
    lt->addWidget(spinb);
    setLayout(lt);
}

double MainWindow::getX()
{
    return spinb->value();
}


MainWindow::~MainWindow()
{

}
