#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stimuli.h"

QString content;
float fr;

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



void MainWindow::on_okPushButton_clicked()
{
    fr=ui->fqLineEdit->text().toFloat();//get frequency
    content=ui->contentLineEdit->text();//get content
    stimuli *s=new stimuli;
    s->show();
}
