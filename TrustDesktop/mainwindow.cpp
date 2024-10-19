#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <qpushbutton.h>
#include <qobject.h>
#include <QColor>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    setWindowTitle("Trust");

    ui->setupUi(this);

    ui->mylabel->setText("fjwijfiwfw");
    // label
    // QLabel *label = new QLabel(this);
    // label->setText("'abcd'");
    // label->setAlignment(Qt::AlignCenter);
    // setCentralWidget(label);

    // layout
    QVBoxLayout *layout = new QVBoxLayout();

    // button
    QPushButton *btn = new QPushButton(this);
    btn->setMinimumSize(100, 200);
    btn->setText("中国人");
    btn->setEnabled(true);
    layout->addWidget(btn);

    connect(ui->myPushBtn, &QPushButton::clicked, this, &MainWindow::myFirstBtnClick);
    // QObject::connect(&btn, &QPushButton::clicked, [&]() {
    //     qDebug() << "Button Click";
    // });

    //
    // QFrame *frame = new QFrame(this);
    // frame->resize(100, 200);
    // frame->setBackgroundRole(QPalette::Dark);
    // QPixmap pixmap("images/001.jpg");
    // QPalette palette;
    // palette.setBrush(frame->backgroundRole(), QBrush(pixmap));

    // frame->setPalette(palette);
    // frame->setMask(pixmap.mask());
    // frame->setAutoFillBackground(true);
    // frame->show();
    // layout->addWidget(frame);

    // print something
    qDebug() << "btn clicssssk";

}

void MainWindow::myFirstBtnClick()
{
    qDebug() << "btn click";
}

MainWindow::~MainWindow()
{
    delete ui;
}
