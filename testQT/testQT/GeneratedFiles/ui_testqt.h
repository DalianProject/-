/********************************************************************************
** Form generated from reading UI file 'testqt.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTQT_H
#define UI_TESTQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testQTClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *Usernameedit;
    QSpacerItem *horizontalSpacer;
    QLabel *aoteman;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *LoginButton;
    QLineEdit *Passwordedit;
    QSplitter *splitter;
    QCheckBox *remembercheck;
    QCheckBox *autocheck;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QPushButton *Setting;
    QPushButton *RegisButton;

    void setupUi(QMainWindow *testQTClass)
    {
        if (testQTClass->objectName().isEmpty())
            testQTClass->setObjectName(QStringLiteral("testQTClass"));
        testQTClass->resize(548, 493);
        testQTClass->setMinimumSize(QSize(0, 493));
        testQTClass->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(testQTClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QStringLiteral(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/background (2).jpg")));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Usernameedit = new QLineEdit(groupBox);
        Usernameedit->setObjectName(QStringLiteral("Usernameedit"));

        gridLayout->addWidget(Usernameedit, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(238, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 8, 0, 1, 1);

        aoteman = new QLabel(groupBox);
        aoteman->setObjectName(QStringLiteral("aoteman"));
        aoteman->setEnabled(true);
        aoteman->setPixmap(QPixmap(QString::fromUtf8(":/image/man.jpg")));
        aoteman->setScaledContents(true);
        aoteman->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(aoteman, 0, 0, 8, 1);

        horizontalSpacer_2 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 8, 2, 1, 2);

        LoginButton = new QPushButton(groupBox);
        LoginButton->setObjectName(QStringLiteral("LoginButton"));

        gridLayout->addWidget(LoginButton, 8, 1, 1, 1);

        Passwordedit = new QLineEdit(groupBox);
        Passwordedit->setObjectName(QStringLiteral("Passwordedit"));

        gridLayout->addWidget(Passwordedit, 5, 1, 1, 1);

        splitter = new QSplitter(groupBox);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(5);
        remembercheck = new QCheckBox(splitter);
        remembercheck->setObjectName(QStringLiteral("remembercheck"));
        splitter->addWidget(remembercheck);
        autocheck = new QCheckBox(splitter);
        autocheck->setObjectName(QStringLiteral("autocheck"));
        splitter->addWidget(autocheck);

        gridLayout->addWidget(splitter, 7, 1, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 1, 1, 1);

        Setting = new QPushButton(groupBox);
        Setting->setObjectName(QStringLiteral("Setting"));
        Setting->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(Setting, 5, 3, 1, 1);

        RegisButton = new QPushButton(groupBox);
        RegisButton->setObjectName(QStringLiteral("RegisButton"));
        RegisButton->setMinimumSize(QSize(75, 20));
        RegisButton->setCursor(QCursor(Qt::PointingHandCursor));
        RegisButton->setStyleSheet(QStringLiteral("image: url(:/image/man.jpg);"));

        gridLayout->addWidget(RegisButton, 3, 3, 1, 1);


        verticalLayout->addWidget(groupBox);

        testQTClass->setCentralWidget(centralWidget);
        QWidget::setTabOrder(Usernameedit, Passwordedit);
        QWidget::setTabOrder(Passwordedit, remembercheck);
        QWidget::setTabOrder(remembercheck, autocheck);
        QWidget::setTabOrder(autocheck, LoginButton);
        QWidget::setTabOrder(LoginButton, Setting);
        QWidget::setTabOrder(Setting, RegisButton);

        retranslateUi(testQTClass);
        QObject::connect(RegisButton, SIGNAL(clicked()), testQTClass, SLOT(slot1()));
        QObject::connect(LoginButton, SIGNAL(clicked()), testQTClass, SLOT(slot2()));
        QObject::connect(Setting, SIGNAL(clicked()), testQTClass, SLOT(slot3()));

        QMetaObject::connectSlotsByName(testQTClass);
    } // setupUi

    void retranslateUi(QMainWindow *testQTClass)
    {
        testQTClass->setWindowTitle(QApplication::translate("testQTClass", "testQT", 0));
        label->setText(QString());
        groupBox->setTitle(QString());
        Usernameedit->setPlaceholderText(QApplication::translate("testQTClass", "\347\224\250\346\210\267\345\220\215", 0));
        aoteman->setText(QString());
        LoginButton->setText(QApplication::translate("testQTClass", " \347\231\273\351\231\206", 0));
        Passwordedit->setPlaceholderText(QApplication::translate("testQTClass", "\345\257\206\347\240\201", 0));
        remembercheck->setText(QApplication::translate("testQTClass", "\350\256\260\344\275\217\345\257\206\347\240\201", 0));
        autocheck->setText(QApplication::translate("testQTClass", "\350\207\252\345\212\250\347\231\273\351\231\206", 0));
        Setting->setText(QApplication::translate("testQTClass", "\350\256\276\347\275\256", 0));
        RegisButton->setText(QApplication::translate("testQTClass", "\346\263\250\345\206\214", 0));
    } // retranslateUi

};

namespace Ui {
    class testQTClass: public Ui_testQTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTQT_H
