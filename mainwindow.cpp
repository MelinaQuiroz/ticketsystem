
#include "mainwindow.h"
#include "./ui_mainwindow.h"



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



void MainWindow::on_sign_in_clicked()
{   QString invalid;
    QString user;
    user = ui->user_input->text();


    QString password;
    password = ui->pass_input->text();

    if(user == "" && password == "") {

        ui->invalid_text->setText("Please enter user and password");

    }

    else if (user != "user" && password != "password" ) {

        ui->invalid_text->setText("Invalid user or password");

    }  else {

        ui->invalid_text->setText("Welcome");

        qDebug()<<"prueba";

    }




}

