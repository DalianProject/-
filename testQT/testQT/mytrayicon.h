#ifndef MYTRAYICON_H
#define MYTRAYICON_H

#include <QObject>
#include <qsystemtrayicon.h>
#include <qaction.h>
#include <qmenu.h>
#include <qicon.h>
#include <qapplication.h>
class MytrayIcon : public QObject
{
	Q_OBJECT

public:
	MytrayIcon(QWidget *parent);
	~MytrayIcon();
	QSystemTrayIcon *trayIcon;
	QMenu *trayIconMenu;
	QAction *quitAction;
	void showMessage();
private:
	
};

#endif // MYTRAYICON_H
