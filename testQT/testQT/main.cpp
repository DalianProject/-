#include "testqt.h"
#include <QDebug>
#include "COneLineIpEdit.h"
#include <qfile.h>

#if _MSC_VER >= 1600      
#pragma execution_character_set("utf-8")      
#endif

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
		QFile file(":/qss/style.qss");
		file.open(QFile::ReadOnly);
		QString styleSheet = QLatin1String(file.readAll());
		qApp->setStyleSheet(styleSheet);
		file.close();
		testQT mainwindow;
//	mainwindow.setFixedSize(300, 200);
//	CIPLineEdit *pIPLineEdit = new CIPLineEdit(&mainwindow);
//	pIPLineEdit->setGeometry(50, 50, 120, 26);
#if QT_VERSION < QT_VERSION_CHECK(5,0,0)     
	//VS°æ±¾µÍÓÚVS2010     
#if defined(_MSC_VER) && (_MSC_VER < 1600)        
	QTextCodec::setCodecForTr(QTextCodec::codecForName("GBK"));
#else        
	QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
#endif        
#endif
	mainwindow.show();
	return a.exec();
}

