#include "ipsettingframe.h"

IpSettingFrame::IpSettingFrame(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	pIPLineEdit = new CIPLineEdit(this);
	pIPLineEdit->setGeometry(210,76,133,20);
//	ui.gridLayout->addWidget(pIPLineEdit, 1, 6, 1, 1);
}

IpSettingFrame::~IpSettingFrame()
{

}
