/********************************************************************************
** Form generated from reading UI file 'ssvep.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SSVEP_H
#define UI_SSVEP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ssvep
{
public:
    QLineEdit *lineEdit;

    void setupUi(QWidget *ssvep)
    {
        if (ssvep->objectName().isEmpty())
            ssvep->setObjectName(QStringLiteral("ssvep"));
        ssvep->resize(400, 300);
        lineEdit = new QLineEdit(ssvep);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 110, 131, 71));
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(170, 0, 0);"));

        retranslateUi(ssvep);

        QMetaObject::connectSlotsByName(ssvep);
    } // setupUi

    void retranslateUi(QWidget *ssvep)
    {
        ssvep->setWindowTitle(QApplication::translate("ssvep", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ssvep: public Ui_ssvep {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SSVEP_H
