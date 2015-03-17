#include "clientframe.h"

ClientFrame::ClientFrame(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.statusBar->setStyleSheet(QString("QStatusBar::item{border:¡¡0px}"));
	statusLabel = new QLabel;
	statusLabel->setMinimumSize(statusLabel->sizeHint());
	statusLabel->setAlignment(Qt::AlignHCenter);
	statusBar()->addWidget(statusLabel);
	
	//statusLabel->setText("11111");
	row_count = 0;
	setAcceptDrops(true);
	tableWidget = new TableWidget(ui.groupBox);
	tableWidget->setObjectName(QStringLiteral("tableWidget"));
	tableWidget->setAcceptDrops(false);
	tableWidget->setDragEnabled(false);
	tableWidget->setDragDropOverwriteMode(false);
	tableWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
	tableWidget->showImageLabel = ui.ShowImageLabel;
	ui.verticalLayout->addWidget(tableWidget);
}

ClientFrame::~ClientFrame()
{

}
void ClientFrame::dropEvent(QDropEvent *event)
{
	ClientFrame *source = qobject_cast<ClientFrame*>(event->source());
	QString localFile;
	QList<QUrl> urls = event->mimeData()->urls();
//	QUrl url = event->mimeData()->urls().at(0);
//	localFile = url.toLocalFile();
	foreach(QUrl url, urls) {
		QString file_name = url.toLocalFile();
		QFileInfo temDir(file_name);
		QString fileSuffix = temDir.suffix();
		if (fileSuffix == "bmp" || fileSuffix == "jpg" || fileSuffix == "png")
		{
			QString  fileName = temDir.fileName();
			InsertItem(file_name, fileName);
			ui.ShowImageLabel->setPixmap(file_name);
		}
	}
}
void ClientFrame::InsertItem(QString filename, QString filepath)
{
	row_count = tableWidget->rowCount();
	tableWidget->insertRow(row_count); 
	QTableWidgetItem *item = new QTableWidgetItem();
	QTableWidgetItem *item1 = new QTableWidgetItem();
	item->setIcon(QIcon(filename));
	item->setText(filepath);
	item1->setText(filename);
	tableWidget->listOfItems1.append(item);
	tableWidget->listOfItems2.append(item1);
	tableWidget->setItem(row_count, 0, item);
	tableWidget->setItem(row_count, 1, item1);
	QColor color("gray");
	item1->setTextColor(color);
}
void ClientFrame::dragEnterEvent(QDragEnterEvent *event)
{
	event->acceptProposedAction();
	ClientFrame *source =
		qobject_cast<ClientFrame *>(event->source());
	if (source && source != this) {
		event->setDropAction(Qt::MoveAction);
		event->accept();
	}
}
void ClientFrame::dragMoveEvent(QDragMoveEvent *event)
{
	event->acceptProposedAction();
	ClientFrame *source =
		qobject_cast<ClientFrame *>(event->source());
	if (source && source != this) {
		event->setDropAction(Qt::MoveAction);
		event->accept();
	}
	
}
void ClientFrame::slot1()
{
	QString filename = QFileDialog::getOpenFileName(this,
		tr("Open Image"),
		"",
		tr("Images (*.png *.bmp *.jpg)"));  
	if (filename.isEmpty())
	{
		return;
	}
	else
	{
		QFileInfo temDir(filename);
		QString  file_Name = temDir.fileName();
		InsertItem(file_Name, filename);
		ui.ShowImageLabel->setPixmap(filename);
	//	ui.ShowImageLabel->setContextMenuPolicy()		
	}
}
void ClientFrame::slot2()
{
	if (tableWidget->selectedRanges().count() > 0)
	{
		//tcpsendFile = new TcpHelper( tableWidget->listOfItems1.at(0)->text());
		//tcpsendFile->m_filelist = tableWidget->selectedRanges();
		//tcpsendFile->sendhint = statusLabel;
		//tcpsendFile->sendProcessBar = ui.progressBar;
		//tcpsendFile->send();
		///*thread = new QThread(this);
		//tcpsendFile->moveToThread(thread);*/
		//connect(thread, SIGNAL(started()), tcpsendFile, SLOT(send()));
		sendThread = new SendFileThread(this,tableWidget->listOfItems2.at(0)->text());
		sendThread->sendhint = statusLabel;
		sendThread->sendProcessBar = ui.progressBar;
		sendThread->start();
	//	thread->start();
		
	}
	else{

		QMessageBox::about(this, "warning", "No selection");
	}
}