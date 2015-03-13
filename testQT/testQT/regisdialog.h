#ifndef REGISDIALOG_H
#define REGISDIALOG_H

#include <QDialog>
#include "ui_regisdialog.h"
#include <qmessagebox.h>
#include "ipsettingframe.h"
class RegisDialog : public QDialog
{
	Q_OBJECT

public:
	RegisDialog(QWidget *parent = 0);
	~RegisDialog();
public slots:
	//void confirmUsername();
	//void confirmID();
	//void confirmPass();
void slot1();
void slot2();
void slot3();
void slot4();
private:
	Ui::RegisDialog ui;
};

#endif // REGISDIALOG_H
