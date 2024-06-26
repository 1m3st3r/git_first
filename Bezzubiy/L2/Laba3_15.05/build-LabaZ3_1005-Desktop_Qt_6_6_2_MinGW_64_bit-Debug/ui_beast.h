/********************************************************************************
** Form generated from reading UI file 'beast.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEAST_H
#define UI_BEAST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Beast
{
public:
    QLabel *labelHeart1;
    QLabel *labelHeart2;
    QLabel *labelKatafalk;
    QLabel *labelHeart3;
    QLabel *labelKane;
    QLabel *labelHeart4;
    QLabel *labelRIP;

    void setupUi(QWidget *Beast)
    {
        if (Beast->objectName().isEmpty())
            Beast->setObjectName("Beast");
        Beast->resize(800, 600);
        labelHeart1 = new QLabel(Beast);
        labelHeart1->setObjectName("labelHeart1");
        labelHeart1->setGeometry(QRect(150, 30, 50, 50));
        labelHeart2 = new QLabel(Beast);
        labelHeart2->setObjectName("labelHeart2");
        labelHeart2->setGeometry(QRect(100, 30, 50, 50));
        labelKatafalk = new QLabel(Beast);
        labelKatafalk->setObjectName("labelKatafalk");
        labelKatafalk->setGeometry(QRect(700, 70, 90, 110));
        labelHeart3 = new QLabel(Beast);
        labelHeart3->setObjectName("labelHeart3");
        labelHeart3->setGeometry(QRect(50, 30, 50, 50));
        labelKane = new QLabel(Beast);
        labelKane->setObjectName("labelKane");
        labelKane->setGeometry(QRect(10, 100, 60, 80));
        labelHeart4 = new QLabel(Beast);
        labelHeart4->setObjectName("labelHeart4");
        labelHeart4->setGeometry(QRect(0, 30, 50, 50));
        labelRIP = new QLabel(Beast);
        labelRIP->setObjectName("labelRIP");
        labelRIP->setGeometry(QRect(0, 0, 170, 200));

        retranslateUi(Beast);

        QMetaObject::connectSlotsByName(Beast);
    } // setupUi

    void retranslateUi(QWidget *Beast)
    {
        Beast->setWindowTitle(QCoreApplication::translate("Beast", "Form", nullptr));
        labelHeart1->setText(QCoreApplication::translate("Beast", "<html><head/><body><p><img src=\":/img/Heart.png\"/></p></body></html>", nullptr));
        labelHeart2->setText(QCoreApplication::translate("Beast", "<html><head/><body><p><img src=\":/img/Heart.png\"/></p></body></html>", nullptr));
        labelKatafalk->setText(QCoreApplication::translate("Beast", "<html><head/><body><p><br/></p></body></html>", nullptr));
        labelHeart3->setText(QCoreApplication::translate("Beast", "<html><head/><body><p><img src=\":/img/Heart.png\"/></p></body></html>", nullptr));
        labelKane->setText(QCoreApplication::translate("Beast", "<html><head/><body><p><img src=\":/img/HarryKane1.png\"/></p></body></html>", nullptr));
        labelHeart4->setText(QCoreApplication::translate("Beast", "<html><head/><body><p><img src=\":/img/Heart.png\"/></p></body></html>", nullptr));
        labelRIP->setText(QCoreApplication::translate("Beast", "<html><head/><body><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Beast: public Ui_Beast {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEAST_H
