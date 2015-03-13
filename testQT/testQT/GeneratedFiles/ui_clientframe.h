/********************************************************************************
** Form generated from reading UI file 'clientframe.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTFRAME_H
#define UI_CLIENTFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientFrame
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QCheckBox *checkBox;
    QTableWidget *tableWidget;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ClientFrame)
    {
        if (ClientFrame->objectName().isEmpty())
            ClientFrame->setObjectName(QStringLiteral("ClientFrame"));
        ClientFrame->resize(811, 497);
        centralWidget = new QWidget(ClientFrame);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(310, 40, 461, 351));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(30, 20, 71, 16));
        tableWidget = new QTableWidget(groupBox);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 50, 431, 281));
        ClientFrame->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(ClientFrame);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ClientFrame->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ClientFrame);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ClientFrame->setStatusBar(statusBar);

        mainToolBar->addSeparator();

        retranslateUi(ClientFrame);

        QMetaObject::connectSlotsByName(ClientFrame);
    } // setupUi

    void retranslateUi(QMainWindow *ClientFrame)
    {
        ClientFrame->setWindowTitle(QApplication::translate("ClientFrame", "ClientFrame", 0));
        groupBox->setTitle(QApplication::translate("ClientFrame", "GroupBox", 0));
        checkBox->setText(QApplication::translate("ClientFrame", "CheckBox", 0));
    } // retranslateUi

};

namespace Ui {
    class ClientFrame: public Ui_ClientFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTFRAME_H
