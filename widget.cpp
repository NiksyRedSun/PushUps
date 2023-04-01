#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_2_clicked()
{
    PushUps += ui->spinBox->value();
    ui->spinBox->setValue(0);
    ui->label_2->setText(QString::number(PushUps));
    ui->progressBar->setValue(PushUps);
}


void Widget::on_pushButton_clicked()
{
    qApp->exit();
}

