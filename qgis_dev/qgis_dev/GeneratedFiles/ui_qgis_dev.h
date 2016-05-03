/********************************************************************************
** Form generated from reading UI file 'qgis_dev.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGIS_DEV_H
#define UI_QGIS_DEV_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qgis_devClass
{
public:
    QAction *actionAdd_Vector;
    QAction *actionAdd_Raster;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuVector;
    QMenu *menuRaster;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qgis_devClass)
    {
        if (qgis_devClass->objectName().isEmpty())
            qgis_devClass->setObjectName(QString::fromUtf8("qgis_devClass"));
        qgis_devClass->resize(600, 400);
        actionAdd_Vector = new QAction(qgis_devClass);
        actionAdd_Vector->setObjectName(QString::fromUtf8("actionAdd_Vector"));
        actionAdd_Raster = new QAction(qgis_devClass);
        actionAdd_Raster->setObjectName(QString::fromUtf8("actionAdd_Raster"));
        centralWidget = new QWidget(qgis_devClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        qgis_devClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(qgis_devClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menuVector = new QMenu(menuBar);
        menuVector->setObjectName(QString::fromUtf8("menuVector"));
        menuRaster = new QMenu(menuBar);
        menuRaster->setObjectName(QString::fromUtf8("menuRaster"));
        qgis_devClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qgis_devClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        qgis_devClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(qgis_devClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        qgis_devClass->setStatusBar(statusBar);

        menuBar->addAction(menuVector->menuAction());
        menuBar->addAction(menuRaster->menuAction());
        menuVector->addAction(actionAdd_Vector);
        menuRaster->addAction(actionAdd_Raster);

        retranslateUi(qgis_devClass);

        QMetaObject::connectSlotsByName(qgis_devClass);
    } // setupUi

    void retranslateUi(QMainWindow *qgis_devClass)
    {
        qgis_devClass->setWindowTitle(QApplication::translate("qgis_devClass", "qgis_dev", 0, QApplication::UnicodeUTF8));
        actionAdd_Vector->setText(QApplication::translate("qgis_devClass", "Add Vector", 0, QApplication::UnicodeUTF8));
        actionAdd_Raster->setText(QApplication::translate("qgis_devClass", "Add Raster", 0, QApplication::UnicodeUTF8));
        menuVector->setTitle(QApplication::translate("qgis_devClass", "Vector", 0, QApplication::UnicodeUTF8));
        menuRaster->setTitle(QApplication::translate("qgis_devClass", "Raster", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class qgis_devClass: public Ui_qgis_devClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGIS_DEV_H
