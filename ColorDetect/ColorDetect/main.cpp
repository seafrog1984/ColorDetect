#include "ColorDetect.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{

	QApplication::addLibraryPath("./plugins");
	QApplication a(argc, argv);
	ColorDetect w;
	w.show();
	return a.exec();
}
