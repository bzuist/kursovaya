#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::onCreateButtonPressed()
{
    void Hospital::setSurname(std::string surname)
    {
        this->surname = surname;
    }
    void Hospital::setKategory(int kategory)
    {
        this->kategory = kategory;
    }
    void Hospital::setTime(double time)
    {
        this->time = time;
    }
    void Hospital::setName(std::string name)
    {
        this->name = name;
    }
    void Hospital::setPatronymic(std::string patronymic)
    {
        this->patronymic = patronymic;
    }
    void Hospital::setSpecialist(std::string specialist)
    {
        this->specialist = specialist;
    }
    void Hospital::setPhonenumber(std::string phonenumber)
    {
        this->phonenumber = phonenumber;
    }
}

