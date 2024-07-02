/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "vepolylinesettings.h"
#include "verectanglesettings.h"
#include "veworkplaceview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHelp;
    QAction *actionQuit;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *toolsWidget;
    QGridLayout *gridLayout_2;
    QToolButton *butOpen;
    QToolButton *butDefault;
    QToolButton *butSave;
    QToolButton *butLine;
    QToolButton *butRectangle;
    VEPolyLineSettings *polylineSettings;
    VERectangleSettings *rectangleSettings;
    QSpacerItem *verticalSpacer;
    VEWorkplaceView *workplaceView;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(640, 480);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        toolsWidget = new QWidget(splitter);
        toolsWidget->setObjectName(QString::fromUtf8("toolsWidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolsWidget->sizePolicy().hasHeightForWidth());
        toolsWidget->setSizePolicy(sizePolicy);
        toolsWidget->setMinimumSize(QSize(120, 0));
        gridLayout_2 = new QGridLayout(toolsWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        butOpen = new QToolButton(toolsWidget);
        butOpen->setObjectName(QString::fromUtf8("butOpen"));
        butOpen->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/folder-upload.png"), QSize(), QIcon::Normal, QIcon::Off);
        butOpen->setIcon(icon);
        butOpen->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(butOpen, 0, 0, 1, 1);

        butDefault = new QToolButton(toolsWidget);
        butDefault->setObjectName(QString::fromUtf8("butDefault"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/arrow-top-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        butDefault->setIcon(icon1);
        butDefault->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(butDefault, 1, 0, 1, 1);

        butSave = new QToolButton(toolsWidget);
        butSave->setObjectName(QString::fromUtf8("butSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/content-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        butSave->setIcon(icon2);
        butSave->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(butSave, 0, 1, 1, 1);

        butLine = new QToolButton(toolsWidget);
        butLine->setObjectName(QString::fromUtf8("butLine"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/vector-polyline.png"), QSize(), QIcon::Normal, QIcon::Off);
        butLine->setIcon(icon3);
        butLine->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(butLine, 2, 0, 1, 1);

        butRectangle = new QToolButton(toolsWidget);
        butRectangle->setObjectName(QString::fromUtf8("butRectangle"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/vector-rectangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        butRectangle->setIcon(icon4);
        butRectangle->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(butRectangle, 2, 1, 1, 1);

        polylineSettings = new VEPolyLineSettings(toolsWidget);
        polylineSettings->setObjectName(QString::fromUtf8("polylineSettings"));
        polylineSettings->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(polylineSettings, 4, 0, 1, 3);

        rectangleSettings = new VERectangleSettings(toolsWidget);
        rectangleSettings->setObjectName(QString::fromUtf8("rectangleSettings"));
        rectangleSettings->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(rectangleSettings, 3, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 0, 1, 3);

        splitter->addWidget(toolsWidget);
        workplaceView = new VEWorkplaceView(splitter);
        workplaceView->setObjectName(QString::fromUtf8("workplaceView"));
        splitter->addWidget(workplaceView);

        gridLayout->addWidget(splitter, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionHelp);
        menu->addSeparator();
        menu->addAction(actionQuit);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionHelp->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        butOpen->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        butDefault->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        butSave->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        butLine->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        butRectangle->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
