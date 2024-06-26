/********************************************************************************
** Form generated from reading UI file 'zubovich.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZUBOVICH_H
#define UI_ZUBOVICH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Zubovich
{
public:
    QLabel *labelZubovich;
    QLabel *labelKatafalk;
    QLabel *labelHeart2;
    QLabel *labelHeart3;
    QLabel *labelHeart1;

    void setupUi(QWidget *Zubovich)
    {
        if (Zubovich->objectName().isEmpty())
            Zubovich->setObjectName("Zubovich");
        Zubovich->resize(906, 602);
        labelZubovich = new QLabel(Zubovich);
        labelZubovich->setObjectName("labelZubovich");
        labelZubovich->setGeometry(QRect(10, 70, 51, 71));
        labelKatafalk = new QLabel(Zubovich);
        labelKatafalk->setObjectName("labelKatafalk");
        labelKatafalk->setGeometry(QRect(610, 80, 210, 170));
        labelHeart2 = new QLabel(Zubovich);
        labelHeart2->setObjectName("labelHeart2");
        labelHeart2->setGeometry(QRect(50, 30, 50, 50));
        labelHeart3 = new QLabel(Zubovich);
        labelHeart3->setObjectName("labelHeart3");
        labelHeart3->setGeometry(QRect(0, 30, 50, 50));
        labelHeart1 = new QLabel(Zubovich);
        labelHeart1->setObjectName("labelHeart1");
        labelHeart1->setGeometry(QRect(100, 30, 50, 50));

        retranslateUi(Zubovich);

        QMetaObject::connectSlotsByName(Zubovich);
    } // setupUi

    void retranslateUi(QWidget *Zubovich)
    {
        Zubovich->setWindowTitle(QCoreApplication::translate("Zubovich", "Form", nullptr));
        labelZubovich->setText(QCoreApplication::translate("Zubovich", "<html><head/><body><p><img src=\":/img/Zubovich.png\"/></p></body></html>", nullptr));
        labelKatafalk->setText(QString());
        labelHeart2->setText(QCoreApplication::translate("Zubovich", "<html><head/><body><p><img src=\":/img/Heart.png\"/></p></body></html>", nullptr));
        labelHeart3->setText(QCoreApplication::translate("Zubovich", "<html><head/><body><p><img src=\":/img/Heart.png\"/></p></body></html>", nullptr));
        labelHeart1->setText(QCoreApplication::translate("Zubovich", "<html><head/><body><p><img src=\":/img/Heart.png\"/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Zubovich: public Ui_Zubovich {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZUBOVICH_H
