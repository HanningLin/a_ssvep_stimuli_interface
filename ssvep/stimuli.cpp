#include "stimuli.h"
#include "ui_stimuli.h"
#include <QTimer>
extern float fr;
extern QString content;
int flag=1;
stimuli::stimuli(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::stimuli)
{

    ui->setupUi(this);
    ui->label1->setText(content);

    QTimer* timer=new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(Blink()));
    timer->start(500/fr);


}

stimuli::~stimuli()
{
    delete ui;
}

void stimuli::Blink()
{
    //ui->label1->setText("yes");
    if (flag==1)
    {
        //ui->label1->setAttribute(Qt::WA_TranslucentBackground, true);
        ui->label1->setStyleSheet(styleSheet().isEmpty() ? "background-color: red" : "");
        //ui->label1->setText("1");
    }
    if(flag==0)
    {
        //ui->label1->setAttribute(Qt::WA_TranslucentBackground, false);
        ui->label1->setStyleSheet("");
        //ui->label1->setText("0");
    }

    flag=1-flag;
}
