#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <qpushbutton.h>
#include <qobject.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //
    QLabel *label = new QLabel(this);
    label->setText("'abcd'");
    label->setAlignment(Qt::AlignCenter);
    setCentralWidget(label);

    QPushButton *btn = new QPushButton(this);
    btn->setText("中国人");

    // QObject::connect(&btn, &QPushButton::clicked, [&]() {
    //     qDebug() << "Button Click";
    // });

}

MainWindow::~MainWindow()
{
    delete ui;
}
