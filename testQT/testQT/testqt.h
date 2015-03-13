#ifndef TESTQT_H
#define TESTQT_H

#include <QtWidgets/QMainWindow>
#include <QDebug>
#include "ui_testqt.h"
#include "regisdialog.h"
#include <QMessageBox>
#include "mytrayicon.h"
#include <qtimer.h>
#include "clientframe.h"
class testQT : public QMainWindow 
{
	Q_OBJECT

public:
	testQT(QWidget *parent = 0);
	~testQT();
	IpSettingFrame m_ipsettingdialog;
	MytrayIcon *mytrayicon;
	ClientFrame *clientframe;
public slots:
//	void showRegisWindow();
//	void SendLoginMessage();
	void slot1();
	void slot2();
	void slot3();
	void changeEvent(QEvent* event);
	void iconIsActived(QSystemTrayIcon::ActivationReason reason);
private:
	Ui::testQTClass ui;
};

#endif // TESTQT_H
