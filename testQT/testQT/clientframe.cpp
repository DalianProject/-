#include "clientframe.h"

ClientFrame::ClientFrame(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	model.setColumnCount(2);
	QStringList header;
	header << tr("name") << tr("last modify time") << tr("type") << tr("size");
	ui.tableWidght->setHorizontalHeaderLabels(header);
	//table_widget->setHorizontalHeaderLabels(header);
//	model.setHeaderData(0, Qt::Vertical, "qqq");
//	model.setHeaderData(1, Qt::Vertical, "bbb");
//	QStandardItem *item = new QStandardItem(QString("Row %1"));
//	model.setHorizontalHeaderItem(1, item);
//	model.setItem(1, item);
//	ui.tableView->setModel(&model);
//	ui.->setModel(&model);
}

ClientFrame::~ClientFrame()
{

}
