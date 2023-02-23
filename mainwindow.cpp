#include "mainwindow.h"
#include "ui_mainwindow.h"

double num_first;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_plus_minus, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_tok, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_mul, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_div, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_sub, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(math_operations()));

    ui->pushButton_sub->setCheckable(true);
    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_div->setCheckable(true);
    ui->pushButton_mul->setCheckable(true);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers()
{
    QPushButton *button = (QPushButton *)sender();
    double all_numbers;
    QString new_label;
    all_numbers = (ui->result->text() + button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->result->setText(new_label);
}


void MainWindow::on_pushButton_dot_clicked()
{
    if (!(ui->result->text().contains("."))) {
        ui->result->setText(ui->result->text() + ".");
    }
}

void MainWindow::operations()
{
    QPushButton *button = (QPushButton *)sender();
    double all_numbers;
    QString new_label;
    if (button->text() == "+/-") {
        all_numbers = (ui->result->text()).toDouble();
        all_numbers = all_numbers * -1;
        new_label = QString::number(all_numbers, 'g', 15);
        ui->result->setText(new_label);
    } else if (button->text() == "%") {
        all_numbers = (ui->result->text()).toDouble();
        all_numbers = all_numbers * 0.01;
        new_label = QString::number(all_numbers, 'g', 15);
        ui->result->setText(new_label);
    }
}

void MainWindow::math_operations()
{
    QPushButton *button = (QPushButton *)sender();
    num_first = ui->result->text().toDouble();
    ui->result->setText("");
    button->setChecked(true);
}

void MainWindow::on_pushButton_equal_clicked()
{
    double labelNumber, num_second;
    QString new_label;
    num_second = ui->result->text().toDouble();

    if (ui->pushButton_plus->isChecked()) {
        labelNumber = num_first + num_second;
        new_label = QString::number(labelNumber, 'g', 15);
        ui->result->setText(new_label);
        ui->pushButton_plus->setChecked(false);

    } else if (ui->pushButton_sub->isChecked()) {
        labelNumber = num_first - num_second;
        new_label = QString::number(labelNumber, 'g', 15);
        ui->result->setText(new_label);
        ui->pushButton_sub->setChecked(false);
    } else if (ui->pushButton_div->isChecked()) {
        if (num_second == 0) {
            ui->result->setText("0");
        } else {
            labelNumber = num_first / num_second;
            new_label = QString::number(labelNumber, 'g', 15);
            ui->result->setText(new_label);
        }
        ui->pushButton_div->setChecked(false);
    } else if (ui->pushButton_mul->isChecked()) {
        labelNumber = num_first * num_second;
        new_label = QString::number(labelNumber, 'g', 15);
        ui->result->setText(new_label);
        ui->pushButton_mul->setChecked(false);
    }
}


void MainWindow::on_pushButton_clicked()
{
    ui->pushButton_plus->setChecked("false");
    ui->pushButton_mul->setChecked("false");
    ui->pushButton_div->setChecked("false");
    ui->pushButton_sub->setChecked("false");

    ui->result->setText("0");
}

