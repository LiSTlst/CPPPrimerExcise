#ifndef QT_HELLOWORLD_H
#define QT_HELLOWORLD_H

#include <QtWidgets/QMainWindow>
#include "ui_qt_helloworld.h"

class QT_HelloWorld : public QMainWindow
{
	Q_OBJECT

public:
	QT_HelloWorld(QWidget *parent = 0);
	~QT_HelloWorld();

private:
	Ui::QT_HelloWorldClass ui;
};

#endif // QT_HELLOWORLD_H
