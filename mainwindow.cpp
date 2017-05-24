#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"
#include "QPalette"
#include "signinvalidator.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

