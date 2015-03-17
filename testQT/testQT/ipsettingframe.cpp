#include "ipsettingframe.h"
IpSettingFrame::IpSettingFrame(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	pIPLineEdit = new CIPLineEdit(this);
	pIPLineEdit->setGeometry(210,76,133,20);
}

IpSettingFrame::~IpSettingFrame()
{

}
void IpSettingFrame::slot1()
{
	IpInfo::m_ipadd = QString::number(pIPLineEdit->GetIPText(0),10) + "." + 
		pIPLineEdit->GetIPText(1)
		+ "." + pIPLineEdit->GetIPText(2) + "." + pIPLineEdit->GetIPText(3);
	IpInfo::port = ui.lineEdit_2->text().toInt();

	QMessageBox::about(this, QString::number(IpInfo::port,10), IpInfo::m_ipadd);
	close();
}