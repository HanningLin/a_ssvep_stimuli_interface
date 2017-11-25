#include<QAction>
#include<QMenuBar>
#include<QStatusBar>
#include<QToolBar>
#include <QMessageBox>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("SSVEP Stimuli Interface 1.00"));
    initMenu();

    statusBar() ;//show status bar
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initMenu()
{
    //add function
        helpAction=new QAction(tr("&Help..."),this);//need to be add into header!!
        aboutAction=new QAction(tr("&About..."),this);
        settingAction=new QAction(tr("&Setting..."),this);
        connect(settingAction,&QAction::triggered,this,&MainWindow::openSetting);
    //
    // init menu including file,setting and help
    QMenu *file=menuBar()->addMenu(tr("&File"));
    //file->addAction();//need to add the function of file, not yet
    QMenu *setting=menuBar()->addMenu(tr("&Setting"));
    setting->addAction(settingAction);//need to add the function of setting, not yet
    QMenu *help=menuBar()->addMenu(tr("&Help"));
    help->addAction(helpAction);//need to add the funtion of help, not yet
    help->addAction(aboutAction);
}

void MainWindow::openSetting()
{
    QDialog dialog;
    dialog.setWindowTitle(tr("setting"));
    //main function of setting

    //
    dialog.exec();
}
