/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStart;
    QAction *actionStop;
    QAction *action_About;
    QWidget *centralWidget;
    QPushButton *okPushButton;
    QLabel *label;
    QLineEdit *fqLineEdit;
    QLabel *label_2;
    QLineEdit *contentLineEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QStringLiteral("actionStart"));
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QStringLiteral("action_About"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        okPushButton = new QPushButton(centralWidget);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));
        okPushButton->setGeometry(QRect(232, 197, 80, 41));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 41, 21));
        fqLineEdit = new QLineEdit(centralWidget);
        fqLineEdit->setObjectName(QStringLiteral("fqLineEdit"));
        fqLineEdit->setGeometry(QRect(60, 30, 31, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 21, 21));
        contentLineEdit = new QLineEdit(centralWidget);
        contentLineEdit->setObjectName(QStringLiteral("contentLineEdit"));
        contentLineEdit->setGeometry(QRect(50, 80, 113, 20));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 17));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(actionStart);
        menu->addAction(actionStop);
        menu_2->addAction(action_About);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionStart->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213(Start)", Q_NULLPTR));
        actionStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242(Stop)", Q_NULLPTR));
        action_About->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216(About)", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        okPushButton->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>\347\241\256\345\256\232\350\256\276\347\275\256\357\274\214\350\277\233\345\205\245SSVEP\345\210\272\346\277\200\347\225\214\351\235\242</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        okPushButton->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213(Run)", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\351\242\221\347\216\207(Hz):", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\206\205\345\256\271:", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\350\217\234\345\215\225(Menu)", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(Help)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
