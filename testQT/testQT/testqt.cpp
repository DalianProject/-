#include "testqt.h"

testQT::testQT(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
		setWindowModality(Qt::WindowModal);
	mytrayicon = new MytrayIcon(this);
	connect(mytrayicon->trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)),
		this, SLOT(iconIsActived(QSystemTrayIcon::ActivationReason)));
}

testQT::~testQT()
{

}
void testQT::slot1(){
	RegisDialog regisdialog;
	regisdialog.setModal(true);
	regisdialog.show();
	regisdialog.exec();
}
void testQT::slot2(){
	
	//QMessageBox::about(this,ui.Usernameedit->text(),tr("asas"));
	this->close();
//	clientframe = new ClientFrame();
	clientframe.setWindowModality(Qt::WindowModal);
	clientframe.show();
}
void testQT::slot3(){
	m_ipsettingdialog.setModal(true);
	m_ipsettingdialog.show();
	m_ipsettingdialog.exec();
}
void testQT::changeEvent(QEvent* event){
	{
		if (event->type() == QEvent::WindowStateChange)
		{
			if (windowState() & Qt::WindowMinimized)
			{
				QTimer::singleShot(0, this, SLOT(hide()));
				mytrayicon->trayIcon->show();
			}
			QMainWindow::changeEvent(event);
		}
	}
}
void testQT::iconIsActived(QSystemTrayIcon::ActivationReason reason)
{
	switch (reason)
	{
		//µã»÷ÍÐÅÌÏÔÊ¾´°¿Ú
	case QSystemTrayIcon::Trigger:
	{
			setWindowModality(Qt::WindowModal);
			show();
			setWindowState(Qt::WindowNoState);
			this->setFocus();
			ui.Usernameedit->setFocus();
			break;
	}
		//Ë«»÷ÍÐÅÌÏÔÊ¾´°¿Ú
	case QSystemTrayIcon::DoubleClick:
	{
			setWindowModality(Qt::WindowModal);
			show();
			setWindowState(Qt::WindowNoState);
			this->setFocus();
			ui.Usernameedit->setFocus();
			setVisible(true);
			break;
	}
	default:
		break;
	}
}