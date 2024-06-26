/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QLabel *labelAziava;
    QLabel *labelKatafalk;
    QLabel *labelHeart1;
    QLabel *labelHeart3;
    QLabel *labelHeart2;

    void setupUi(QWidget *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName("GameWindow");
        GameWindow->setWindowModality(Qt::ApplicationModal);
        GameWindow->resize(906, 602);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Qt/\320\232\320\260\321\200\321\202\320\270\320\275\320\272\320\270/\320\247\321\203\321\207\320\265\320\273\320\276.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        GameWindow->setWindowIcon(icon);
        GameWindow->setLayoutDirection(Qt::LeftToRight);
        labelAziava = new QLabel(GameWindow);
        labelAziava->setObjectName("labelAziava");
        labelAziava->setGeometry(QRect(250, 170, 51, 71));
        labelKatafalk = new QLabel(GameWindow);
        labelKatafalk->setObjectName("labelKatafalk");
        labelKatafalk->setGeometry(QRect(590, 80, 210, 170));
        labelHeart1 = new QLabel(GameWindow);
        labelHeart1->setObjectName("labelHeart1");
        labelHeart1->setGeometry(QRect(100, 30, 50, 50));
        labelHeart3 = new QLabel(GameWindow);
        labelHeart3->setObjectName("labelHeart3");
        labelHeart3->setGeometry(QRect(0, 30, 50, 50));
        labelHeart2 = new QLabel(GameWindow);
        labelHeart2->setObjectName("labelHeart2");
        labelHeart2->setGeometry(QRect(50, 30, 50, 50));

        retranslateUi(GameWindow);

        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QWidget *GameWindow)
    {
        GameWindow->setWindowTitle(QCoreApplication::translate("GameWindow", "Game", nullptr));
        labelAziava->setText(QCoreApplication::translate("GameWindow", "<html><head/><body><p><img src=\":/img/Azyava.png\"/></p></body></html>", nullptr));
        labelKatafalk->setText(QCoreApplication::translate("GameWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        labelHeart1->setText(QCoreApplication::translate("GameWindow", "<html><head/><body><p><img src=\":/img/Heart.png\"/></p></body></html>", nullptr));
        labelHeart3->setText(QCoreApplication::translate("GameWindow", "<html><head/><body><p><img src=\":/img/Heart.png\"/></p></body></html>", nullptr));
        labelHeart2->setText(QCoreApplication::translate("GameWindow", "<html><head/><body><p><img src=\":/img/Heart.png\"/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
