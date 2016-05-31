/********************************************************************************
** Form generated from reading UI file 'qt_helloworld.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_HELLOWORLD_H
#define UI_QT_HELLOWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QT_HelloWorldClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QT_HelloWorldClass)
    {
        if (QT_HelloWorldClass->objectName().isEmpty())
            QT_HelloWorldClass->setObjectName(QStringLiteral("QT_HelloWorldClass"));
        QT_HelloWorldClass->resize(600, 400);
        menuBar = new QMenuBar(QT_HelloWorldClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QT_HelloWorldClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QT_HelloWorldClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QT_HelloWorldClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QT_HelloWorldClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QT_HelloWorldClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QT_HelloWorldClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QT_HelloWorldClass->setStatusBar(statusBar);

        retranslateUi(QT_HelloWorldClass);

        QMetaObject::connectSlotsByName(QT_HelloWorldClass);
    } // setupUi

    void retranslateUi(QMainWindow *QT_HelloWorldClass)
    {
        QT_HelloWorldClass->setWindowTitle(QApplication::translate("QT_HelloWorldClass", "QT_HelloWorld", 0));
    } // retranslateUi

};

namespace Ui {
    class QT_HelloWorldClass: public Ui_QT_HelloWorldClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_HELLOWORLD_H
