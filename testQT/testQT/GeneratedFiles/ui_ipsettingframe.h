/********************************************************************************
** Form generated from reading UI file 'ipsettingframe.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IPSETTINGFRAME_H
#define UI_IPSETTINGFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_IpSettingFrame
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QSplitter *splitter;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *IpSettingFrame)
    {
        if (IpSettingFrame->objectName().isEmpty())
            IpSettingFrame->setObjectName(QStringLiteral("IpSettingFrame"));
        IpSettingFrame->resize(428, 287);
        IpSettingFrame->setMinimumSize(QSize(428, 287));
        IpSettingFrame->setMaximumSize(QSize(428, 287));
        gridLayout_2 = new QGridLayout(IpSettingFrame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(IpSettingFrame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(33, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 4, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 3, 6, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 2, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 47, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(36, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 7, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 2, 1, 2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(199, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        splitter = new QSplitter(IpSettingFrame);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        splitter->addWidget(pushButton);
        pushButton_2 = new QPushButton(splitter);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        splitter->addWidget(pushButton_2);

        gridLayout_2->addWidget(splitter, 1, 1, 1, 1);


        retranslateUi(IpSettingFrame);
        QObject::connect(pushButton, SIGNAL(clicked()), IpSettingFrame, SLOT(slot1()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), IpSettingFrame, SLOT(close()));

        QMetaObject::connectSlotsByName(IpSettingFrame);
    } // setupUi

    void retranslateUi(QDialog *IpSettingFrame)
    {
        IpSettingFrame->setWindowTitle(QApplication::translate("IpSettingFrame", "IpSettingFrame", 0));
        groupBox->setTitle(QApplication::translate("IpSettingFrame", "GroupBox", 0));
        label->setText(QApplication::translate("IpSettingFrame", "TextLabel", 0));
        label_2->setText(QApplication::translate("IpSettingFrame", "TextLabel", 0));
        pushButton->setText(QApplication::translate("IpSettingFrame", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("IpSettingFrame", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class IpSettingFrame: public Ui_IpSettingFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IPSETTINGFRAME_H
