/********************************************************************************
** Form generated from reading UI file 'ancelotti.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANCELOTTI_H
#define UI_ANCELOTTI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ancelotti
{
public:
    QLabel *labelAncelotti;
    QLabel *labelKatafalk;
    QLabel *labelHeart3;
    QLabel *labelHeart2;
    QLabel *labelHeart1;

    void setupUi(QWidget *Ancelotti)
    {
        if (Ancelotti->objectName().isEmpty())
            Ancelotti->setObjectName("Ancelotti");
        Ancelotti->resize(800, 600);
        labelAncelotti = new QLabel(Ancelotti);
        labelAncelotti->setObjectName("labelAncelotti");
        labelAncelotti->setGeometry(QRect(0, 80, 70, 80));
        labelAncelotti->setStyleSheet(QString::fromUtf8(""));
        labelKatafalk = new QLabel(Ancelotti);
        labelKatafalk->setObjectName("labelKatafalk");
        labelKatafalk->setGeometry(QRect(570, 50, 210, 170));
        labelHeart3 = new QLabel(Ancelotti);
        labelHeart3->setObjectName("labelHeart3");
        labelHeart3->setGeometry(QRect(114, 30, 50, 50));
        labelHeart2 = new QLabel(Ancelotti);
        labelHeart2->setObjectName("labelHeart2");
        labelHeart2->setGeometry(QRect(57, 30, 50, 50));
        labelHeart1 = new QLabel(Ancelotti);
        labelHeart1->setObjectName("labelHeart1");
        labelHeart1->setGeometry(QRect(0, 30, 50, 50));

        retranslateUi(Ancelotti);

        QMetaObject::connectSlotsByName(Ancelotti);
    } // setupUi

    void retranslateUi(QWidget *Ancelotti)
    {
        Ancelotti->setWindowTitle(QCoreApplication::translate("Ancelotti", "Form", nullptr));
        labelAncelotti->setText(QCoreApplication::translate("Ancelotti", "<html><head/><body><p><img src=\":/img/Ancelotti.png\"/></p></body></html>", nullptr));
        labelKatafalk->setText(QString());
        labelHeart3->setText(QCoreApplication::translate("Ancelotti", "<html><head/><body><p><img src=\":/img/Heart.png\"/></p></body></html>", nullptr));
        labelHeart2->setText(QCoreApplication::translate("Ancelotti", "<html><head/><body><p><img src=\":/img/Heart.png\"/></p></body></html>", nullptr));
        labelHeart1->setText(QCoreApplication::translate("Ancelotti", "<html><head/><body><p><img src=\":/img/Heart.png\"/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ancelotti: public Ui_Ancelotti {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANCELOTTI_H
