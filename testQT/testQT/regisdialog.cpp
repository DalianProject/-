#include "regisdialog.h"

RegisDialog::RegisDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

RegisDialog::~RegisDialog()
{

}
void RegisDialog::slot1(){
	QString sUsername = ui.UsernameEdit->text();
}
void RegisDialog::slot3(){
	QString sUsername = ui.UsernameEdit->text();
	QString sPassword = ui.PassEdit->text();
	QString sID = ui.IDEdit->text();
	this->close();
}
void RegisDialog::slot2(){
	QString sPass1 = ui.PassEdit->text();
	QString sPass2 = ui.PassEdit2->text();
	if (sPass1 != sPass2){
	//	ui.rightPass->setPixmap(QPixmap(QString::fromUtf8(":/image/image(2).jpg")));
		//ui.rightPass->setScaledContents(true);
		ui.rightPass->setText("ÃÜÂë²»Ò»ÖÂ");
	}
	else{
		ui.rightPass->setPixmap(QPixmap(QString::fromUtf8(":/image/images(2).jpg")));
		ui.rightPass->setScaledContents(true);
	}
}
void RegisDialog::slot4(){
	ui.rightPass->setText("");
}