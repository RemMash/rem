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
    this->handleDb = new DataBase("localhost", "root", "root", "rem");

    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(connectDb()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::connectDb()
{
    this->handleDb->selectIntoDb();
}

