#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFileDialog>

#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    this->close();
}

//yeah I did it
// time to push it
