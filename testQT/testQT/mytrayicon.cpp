#include "mytrayicon.h"

MytrayIcon::MytrayIcon(QWidget *parent)
	: QObject(parent)
{
	trayIcon = new QSystemTrayIcon(this);
	trayIcon->setIcon(QIcon((QString::fromUtf8(":/image/images(2).jpg"))));
	trayIcon->show();
	quitAction = new QAction(tr("&Quit"), this);
	connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));
	trayIconMenu = new QMenu();
	trayIconMenu->addAction(quitAction);
	trayIcon->setContextMenu(trayIconMenu);
}

MytrayIcon::~MytrayIcon()
{

}

