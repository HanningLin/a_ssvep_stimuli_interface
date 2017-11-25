#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void openSetting();
    void initMenu();
    Ui::MainWindow *ui;
    QAction *helpAction;//important, without this can't be used in mainwindow.cpp
    QAction *aboutAction;
    QAction *settingAction;

};

#endif // MAINWINDOW_H
