#ifndef CLIENTFRAME_H
#define CLIENTFRAME_H

#include <QMainWindow>
#include "ui_clientframe.h"
#include <qlist.h>
#include <qstandarditemmodel.h>
class ClientFrame : public QMainWindow
{
	Q_OBJECT

public:
	ClientFrame(QWidget *parent = 0);
	~ClientFrame();
	QStringList items;
	QStandardItemModel model;
private:
	Ui::ClientFrame ui;
};

#endif // CLIENTFRAME_H
