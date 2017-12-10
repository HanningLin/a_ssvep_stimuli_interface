/********************************************************************************
** Form generated from reading UI file 'stimuli.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STIMULI_H
#define UI_STIMULI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stimuli
{
public:
    QLabel *label1;

    void setupUi(QWidget *stimuli)
    {
        if (stimuli->objectName().isEmpty())
            stimuli->setObjectName(QStringLiteral("stimuli"));
        stimuli->resize(400, 300);
        label1 = new QLabel(stimuli);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setGeometry(QRect(50, 48, 91, 61));
        label1->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));

        retranslateUi(stimuli);

        QMetaObject::connectSlotsByName(stimuli);
    } // setupUi

    void retranslateUi(QWidget *stimuli)
    {
        stimuli->setWindowTitle(QApplication::translate("stimuli", "Form", Q_NULLPTR));
        label1->setText(QApplication::translate("stimuli", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class stimuli: public Ui_stimuli {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STIMULI_H
