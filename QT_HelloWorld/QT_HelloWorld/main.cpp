#include "qt_helloworld.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QT_HelloWorld w;
	w.show();
	return a.exec();
}
