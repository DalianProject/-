/********************************************************************************
** Form generated from reading UI file 'regisdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISDIALOG_H
#define UI_REGISDIALOG_H

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

class Ui_RegisDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *Password;
    QLineEdit *UsernameEdit;
    QLineEdit *PassEdit;
    QLabel *rightUser;
    QLabel *Username;
    QLineEdit *IDEdit;
    QLineEdit *PassEdit2;
    QLabel *Password2;
    QLabel *rightPass;
    QLabel *rightID;
    QLabel *ID;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSplitter *splitter;
    QPushButton *confirmButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *RegisDialog)
    {
        if (RegisDialog->objectName().isEmpty())
            RegisDialog->setObjectName(QStringLiteral("RegisDialog"));
        RegisDialog->resize(569, 332);
        gridLayout_2 = new QGridLayout(RegisDialog);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(RegisDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 1, 1, 1);

        Password = new QLabel(groupBox);
        Password->setObjectName(QStringLiteral("Password"));

        gridLayout->addWidget(Password, 2, 1, 1, 1);

        UsernameEdit = new QLineEdit(groupBox);
        UsernameEdit->setObjectName(QStringLiteral("UsernameEdit"));

        gridLayout->addWidget(UsernameEdit, 0, 2, 1, 1);

        PassEdit = new QLineEdit(groupBox);
        PassEdit->setObjectName(QStringLiteral("PassEdit"));

        gridLayout->addWidget(PassEdit, 2, 2, 1, 1);

        rightUser = new QLabel(groupBox);
        rightUser->setObjectName(QStringLiteral("rightUser"));
        rightUser->setScaledContents(true);

        gridLayout->addWidget(rightUser, 0, 3, 1, 1);

        Username = new QLabel(groupBox);
        Username->setObjectName(QStringLiteral("Username"));

        gridLayout->addWidget(Username, 0, 1, 1, 1);

        IDEdit = new QLineEdit(groupBox);
        IDEdit->setObjectName(QStringLiteral("IDEdit"));

        gridLayout->addWidget(IDEdit, 6, 2, 1, 1);

        PassEdit2 = new QLineEdit(groupBox);
        PassEdit2->setObjectName(QStringLiteral("PassEdit2"));

        gridLayout->addWidget(PassEdit2, 4, 2, 1, 1);

        Password2 = new QLabel(groupBox);
        Password2->setObjectName(QStringLiteral("Password2"));

        gridLayout->addWidget(Password2, 4, 1, 1, 1);

        rightPass = new QLabel(groupBox);
        rightPass->setObjectName(QStringLiteral("rightPass"));
        rightPass->setScaledContents(true);

        gridLayout->addWidget(rightPass, 4, 3, 1, 1);

        rightID = new QLabel(groupBox);
        rightID->setObjectName(QStringLiteral("rightID"));

        gridLayout->addWidget(rightID, 6, 3, 1, 1);

        ID = new QLabel(groupBox);
        ID->setObjectName(QStringLiteral("ID"));

        gridLayout->addWidget(ID, 6, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 4, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(false);
        label->setStyleSheet(QStringLiteral(""));
        label->setTextFormat(Qt::PlainText);
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/images(2).jpg")));
        label->setScaledContents(true);

        gridLayout->addWidget(label, 2, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(270, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        splitter = new QSplitter(RegisDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        confirmButton = new QPushButton(splitter);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));
        splitter->addWidget(confirmButton);
        cancelButton = new QPushButton(splitter);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        splitter->addWidget(cancelButton);

        gridLayout_2->addWidget(splitter, 1, 1, 1, 1);

        QWidget::setTabOrder(UsernameEdit, PassEdit);
        QWidget::setTabOrder(PassEdit, PassEdit2);
        QWidget::setTabOrder(PassEdit2, IDEdit);
        QWidget::setTabOrder(IDEdit, confirmButton);
        QWidget::setTabOrder(confirmButton, cancelButton);

        retranslateUi(RegisDialog);
        QObject::connect(UsernameEdit, SIGNAL(editingFinished()), RegisDialog, SLOT(slot1()));
        QObject::connect(confirmButton, SIGNAL(clicked()), RegisDialog, SLOT(slot3()));
        QObject::connect(IDEdit, SIGNAL(textChanged(QString)), RegisDialog, SLOT(slot2()));
        QObject::connect(cancelButton, SIGNAL(clicked()), RegisDialog, SLOT(close()));
        QObject::connect(PassEdit2, SIGNAL(textChanged(QString)), RegisDialog, SLOT(slot4()));

        QMetaObject::connectSlotsByName(RegisDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisDialog)
    {
        RegisDialog->setWindowTitle(QApplication::translate("RegisDialog", "RegisDialog", 0));
        groupBox->setTitle(QApplication::translate("RegisDialog", "GroupBox", 0));
        Password->setText(QApplication::translate("RegisDialog", "\345\257\206\347\240\201", 0));
        rightUser->setText(QString());
        Username->setText(QApplication::translate("RegisDialog", "\347\224\250\346\210\267\345\220\215", 0));
        Password2->setText(QApplication::translate("RegisDialog", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", 0));
        rightPass->setText(QString());
        rightID->setText(QString());
        ID->setText(QApplication::translate("RegisDialog", "\350\272\253\344\273\275\350\257\201\345\217\267", 0));
#ifndef QT_NO_WHATSTHIS
        label->setWhatsThis(QApplication::translate("RegisDialog", "sss", 0));
#endif // QT_NO_WHATSTHIS
        label->setText(QString());
        confirmButton->setText(QApplication::translate("RegisDialog", "\347\241\256\350\256\244", 0));
        cancelButton->setText(QApplication::translate("RegisDialog", "\345\205\263\351\227\255", 0));
    } // retranslateUi

};

namespace Ui {
    class RegisDialog: public Ui_RegisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISDIALOG_H
