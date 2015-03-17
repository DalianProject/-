#ifndef IPSETTINGFRAME_H
#define IPSETTINGFRAME_H

#include <QDialog>
#include "ui_ipsettingframe.h"
#include "COneLineIpEdit.h"
#include "ipsettingframe.h"
#include "IpInfo.h"
#include <qmessagebox.h>
class IpSettingFrame : public QDialog
{
	Q_OBJECT

public:
	IpSettingFrame(QWidget *parent = 0);
	~IpSettingFrame();
	CIPLineEdit *pIPLineEdit;
	public slots:
	void slot1();
private:
	Ui::IpSettingFrame ui;
};

#endif // IPSETTINGFRAME_H
