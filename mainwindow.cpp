#include "mainwindow.h"
#include "./ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer *timer=new QTimer(this);
    connect(timer, SIGNAL(timeout()),this, SLOT(ShowTime()));
    timer->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ShowTime()
{
    QTime time=QTime::currentTime();
    QString time_text=time.toString(" hh : mm : ss");
    ui->Digital_clock->setText(time_text);

}
