/********************************************************************************
** Form generated from reading UI file 'verectanglesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERECTANGLESETTINGS_H
#define UI_VERECTANGLESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "colorlabel.h"

QT_BEGIN_NAMESPACE

class Ui_VERectangleSettings
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QComboBox *comboBox;
    QWidget *fillingWidget;
    QGridLayout *gridLayout_2;
    QSpinBox *borderWidth;
    ColorLabel *borderColor;
    QLabel *label_4;
    ColorLabel *color_1;
    QLabel *labelColor_1;
    QLabel *label_2;
    QLabel *labelColor_2;
    ColorLabel *color_2;

    void setupUi(QWidget *VERectangleSettings)
    {
        if (VERectangleSettings->objectName().isEmpty())
            VERectangleSettings->setObjectName(QString::fromUtf8("VERectangleSettings"));
        VERectangleSettings->resize(185, 215);
        gridLayout = new QGridLayout(VERectangleSettings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        comboBox = new QComboBox(VERectangleSettings);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 0, 1, 1);

        fillingWidget = new QWidget(VERectangleSettings);
        fillingWidget->setObjectName(QString::fromUtf8("fillingWidget"));
        gridLayout_2 = new QGridLayout(fillingWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        borderWidth = new QSpinBox(fillingWidget);
        borderWidth->setObjectName(QString::fromUtf8("borderWidth"));
        borderWidth->setMinimum(0);
        borderWidth->setMaximum(200);
        borderWidth->setValue(1);

        gridLayout_2->addWidget(borderWidth, 3, 1, 1, 1);

        borderColor = new ColorLabel(fillingWidget);
        borderColor->setObjectName(QString::fromUtf8("borderColor"));

        gridLayout_2->addWidget(borderColor, 2, 1, 1, 1);

        label_4 = new QLabel(fillingWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        color_1 = new ColorLabel(fillingWidget);
        color_1->setObjectName(QString::fromUtf8("color_1"));

        gridLayout_2->addWidget(color_1, 0, 1, 1, 1);

        labelColor_1 = new QLabel(fillingWidget);
        labelColor_1->setObjectName(QString::fromUtf8("labelColor_1"));

        gridLayout_2->addWidget(labelColor_1, 0, 0, 1, 1);

        label_2 = new QLabel(fillingWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        labelColor_2 = new QLabel(fillingWidget);
        labelColor_2->setObjectName(QString::fromUtf8("labelColor_2"));

        gridLayout_2->addWidget(labelColor_2, 1, 0, 1, 1);

        color_2 = new ColorLabel(fillingWidget);
        color_2->setObjectName(QString::fromUtf8("color_2"));

        gridLayout_2->addWidget(color_2, 1, 1, 1, 1);


        gridLayout->addWidget(fillingWidget, 1, 0, 1, 1);


        retranslateUi(VERectangleSettings);

        QMetaObject::connectSlotsByName(VERectangleSettings);
    } // setupUi

    void retranslateUi(QWidget *VERectangleSettings)
    {
        VERectangleSettings->setWindowTitle(QCoreApplication::translate("VERectangleSettings", "Form", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("VERectangleSettings", "\320\227\320\260\320\273\320\270\320\262\320\272\320\260", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("VERectangleSettings", "\320\223\321\200\320\260\320\264\320\270\320\265\320\275\321\202", nullptr));

        borderColor->setText(QString());
        label_4->setText(QCoreApplication::translate("VERectangleSettings", "border width", nullptr));
        color_1->setText(QString());
        labelColor_1->setText(QCoreApplication::translate("VERectangleSettings", "background", nullptr));
        label_2->setText(QCoreApplication::translate("VERectangleSettings", "border color", nullptr));
        labelColor_2->setText(QCoreApplication::translate("VERectangleSettings", "color 2", nullptr));
        color_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VERectangleSettings: public Ui_VERectangleSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERECTANGLESETTINGS_H
