/********************************************************************************
** Form generated from reading UI file 'vepolylinesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEPOLYLINESETTINGS_H
#define UI_VEPOLYLINESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "colorlabel.h"

QT_BEGIN_NAMESPACE

class Ui_VELineSettings
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    ColorLabel *lineColor;
    QSpacerItem *verticalSpacer;
    QSpinBox *lineWidth;

    void setupUi(QWidget *VELineSettings)
    {
        if (VELineSettings->objectName().isEmpty())
            VELineSettings->setObjectName(QString::fromUtf8("VELineSettings"));
        VELineSettings->resize(197, 286);
        gridLayout = new QGridLayout(VELineSettings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(VELineSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(VELineSettings);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineColor = new ColorLabel(VELineSettings);
        lineColor->setObjectName(QString::fromUtf8("lineColor"));

        gridLayout->addWidget(lineColor, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 2);

        lineWidth = new QSpinBox(VELineSettings);
        lineWidth->setObjectName(QString::fromUtf8("lineWidth"));
        lineWidth->setMinimum(1);
        lineWidth->setMaximum(200);
        lineWidth->setValue(1);

        gridLayout->addWidget(lineWidth, 1, 1, 1, 1);


        retranslateUi(VELineSettings);

        QMetaObject::connectSlotsByName(VELineSettings);
    } // setupUi

    void retranslateUi(QWidget *VELineSettings)
    {
        VELineSettings->setWindowTitle(QCoreApplication::translate("VELineSettings", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("VELineSettings", "width", nullptr));
        label->setText(QCoreApplication::translate("VELineSettings", "color", nullptr));
        lineColor->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VELineSettings: public Ui_VELineSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEPOLYLINESETTINGS_H
