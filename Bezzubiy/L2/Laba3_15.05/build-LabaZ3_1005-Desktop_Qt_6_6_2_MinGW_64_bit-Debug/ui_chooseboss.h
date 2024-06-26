/********************************************************************************
** Form generated from reading UI file 'chooseboss.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEBOSS_H
#define UI_CHOOSEBOSS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseBoss
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushAncelotti;
    QPushButton *pushDedushka;
    QPushButton *pushAziava;
    QPushButton *pushKane;

    void setupUi(QWidget *ChooseBoss)
    {
        if (ChooseBoss->objectName().isEmpty())
            ChooseBoss->setObjectName("ChooseBoss");
        ChooseBoss->resize(906, 602);
        pushButton = new QPushButton(ChooseBoss);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(700, 510, 141, 71));
        label = new QLabel(ChooseBoss);
        label->setObjectName("label");
        label->setGeometry(QRect(630, 10, 281, 61));
        pushAncelotti = new QPushButton(ChooseBoss);
        pushAncelotti->setObjectName("pushAncelotti");
        pushAncelotti->setGeometry(QRect(730, 290, 70, 80));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Ancelotti.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushAncelotti->setIcon(icon);
        pushAncelotti->setIconSize(QSize(100, 80));
        pushDedushka = new QPushButton(ChooseBoss);
        pushDedushka->setObjectName("pushDedushka");
        pushDedushka->setGeometry(QRect(730, 180, 70, 80));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/Zubovich.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushDedushka->setIcon(icon1);
        pushDedushka->setIconSize(QSize(100, 80));
        pushAziava = new QPushButton(ChooseBoss);
        pushAziava->setObjectName("pushAziava");
        pushAziava->setGeometry(QRect(730, 80, 70, 71));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/Azyava.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushAziava->setIcon(icon2);
        pushAziava->setIconSize(QSize(120, 150));
        pushKane = new QPushButton(ChooseBoss);
        pushKane->setObjectName("pushKane");
        pushKane->setGeometry(QRect(730, 400, 70, 80));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/HarryKaneMain.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushKane->setIcon(icon3);
        pushKane->setIconSize(QSize(100, 80));

        retranslateUi(ChooseBoss);

        QMetaObject::connectSlotsByName(ChooseBoss);
    } // setupUi

    void retranslateUi(QWidget *ChooseBoss)
    {
        ChooseBoss->setWindowTitle(QCoreApplication::translate("ChooseBoss", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("ChooseBoss", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
        label->setText(QCoreApplication::translate("ChooseBoss", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">\320\222\321\213\320\261\320\265\321\200\320\265\321\202\320\265 \320\277\321\200\320\276\321\202\320\270\320\262\320\275\320\270\320\272\320\260</span></p></body></html>", nullptr));
        pushAncelotti->setText(QString());
        pushDedushka->setText(QString());
        pushAziava->setText(QString());
        pushKane->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChooseBoss: public Ui_ChooseBoss {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEBOSS_H
