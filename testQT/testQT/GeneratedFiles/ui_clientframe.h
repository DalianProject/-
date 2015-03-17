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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientFrame
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QPushButton *IPsetting;
    QPushButton *SelectFileButoon;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *logoutButton;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *ShowImageLabel;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *SendButton;
    QPushButton *stopSendButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ClientFrame)
    {
        if (ClientFrame->objectName().isEmpty())
            ClientFrame->setObjectName(QStringLiteral("ClientFrame"));
        ClientFrame->resize(811, 496);
        ClientFrame->setMinimumSize(QSize(811, 0));
        ClientFrame->setAcceptDrops(true);
        centralWidget = new QWidget(ClientFrame);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAcceptDrops(false);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout->addWidget(checkBox);


        gridLayout->addWidget(groupBox, 1, 5, 1, 1);

        IPsetting = new QPushButton(centralWidget);
        IPsetting->setObjectName(QStringLiteral("IPsetting"));

        gridLayout->addWidget(IPsetting, 0, 1, 1, 1);

        SelectFileButoon = new QPushButton(centralWidget);
        SelectFileButoon->setObjectName(QStringLiteral("SelectFileButoon"));

        gridLayout->addWidget(SelectFileButoon, 0, 0, 1, 1);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 2, 5, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(273, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        logoutButton = new QPushButton(centralWidget);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        logoutButton->setAcceptDrops(false);

        horizontalLayout->addWidget(logoutButton);


        gridLayout->addLayout(horizontalLayout, 0, 5, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ShowImageLabel = new QLabel(groupBox_2);
        ShowImageLabel->setObjectName(QStringLiteral("ShowImageLabel"));
        ShowImageLabel->setAutoFillBackground(true);
        ShowImageLabel->setScaledContents(false);
        ShowImageLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(ShowImageLabel);


        verticalLayout_4->addWidget(groupBox_2);


        gridLayout->addLayout(verticalLayout_4, 1, 0, 1, 5);

        horizontalSpacer_4 = new QSpacerItem(185, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(266, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 3);

        SendButton = new QPushButton(centralWidget);
        SendButton->setObjectName(QStringLiteral("SendButton"));
        SendButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        SendButton->setAcceptDrops(false);

        gridLayout->addWidget(SendButton, 2, 3, 1, 1);

        stopSendButton = new QPushButton(centralWidget);
        stopSendButton->setObjectName(QStringLiteral("stopSendButton"));

        gridLayout->addWidget(stopSendButton, 2, 4, 1, 1);

        ClientFrame->setCentralWidget(centralWidget);
        groupBox->raise();
        progressBar->raise();
        SendButton->raise();
        stopSendButton->raise();
        SelectFileButoon->raise();
        IPsetting->raise();
        statusBar = new QStatusBar(ClientFrame);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ClientFrame->setStatusBar(statusBar);

        retranslateUi(ClientFrame);
        QObject::connect(SelectFileButoon, SIGNAL(clicked()), ClientFrame, SLOT(slot1()));
        QObject::connect(SendButton, SIGNAL(clicked()), ClientFrame, SLOT(slot2()));

        QMetaObject::connectSlotsByName(ClientFrame);
    } // setupUi

    void retranslateUi(QMainWindow *ClientFrame)
    {
        ClientFrame->setWindowTitle(QApplication::translate("ClientFrame", "ClientFrame", 0));
        groupBox->setTitle(QApplication::translate("ClientFrame", "GroupBox", 0));
        checkBox->setText(QApplication::translate("ClientFrame", "CheckBox", 0));
        IPsetting->setText(QApplication::translate("ClientFrame", "PushButton", 0));
        SelectFileButoon->setText(QApplication::translate("ClientFrame", "PushButton", 0));
        logoutButton->setText(QApplication::translate("ClientFrame", "PushButton", 0));
        groupBox_2->setTitle(QApplication::translate("ClientFrame", "GroupBox", 0));
        ShowImageLabel->setText(QApplication::translate("ClientFrame", "TextLabel", 0));
        SendButton->setText(QApplication::translate("ClientFrame", "PushButton", 0));
        stopSendButton->setText(QApplication::translate("ClientFrame", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class ClientFrame: public Ui_ClientFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTFRAME_H
