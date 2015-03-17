#ifndef CLIENTFRAME_H
#define CLIENTFRAME_H

#include <QMainWindow>
#include "ui_clientframe.h"
#include <qlist.h>
#include <qstandarditemmodel.h>
#include <qdrag.h>
#include <qlist.h>
#include <qurl.h>
#include <qdrawutil.h>
#include <qevent.h>
#include <qmimedata.h>
#include <qfileinfo.h>
#include <qdebug.h>
#include <qfiledialog.h>
#include <qmessagebox.h>
#include <qtablewidget.h>
#include <qaction.h>
#include <qthread.h>
#include "tablewidget.h"
#include "tcphelper.h"
#include "sendfilethread.h"
class ClientFrame : public QMainWindow
{
	Q_OBJECT

public:
	ClientFrame(QWidget *parent = 0);
	~ClientFrame();
	QStringList items;
	QStandardItemModel model;
	TableWidget *tableWidget;
	Ui::ClientFrame ui;
	QLabel *statusLabel;
	QThread *thread;
	TcpHelper *tcpsendFile;
	SendFileThread *sendThread;
protected:
	virtual void dragEnterEvent(QDragEnterEvent *event);
	virtual void dragMoveEvent(QDragMoveEvent *event);
	virtual void dropEvent(QDropEvent *event);
	public slots:
	void slot1();
	//sendfile slot
	void slot2();
private:
	int row_count;
	void InsertItem(QString filename,QString filesuffix);
	void sendFile(QString filename);
	void deleteFromList(int index);
};

#endif // CLIENTFRAME_H
