#include "ColorDetect.h"
#include <QtWidgets/QApplication>

#include "LogDlg.h"

int main(int argc, char *argv[])
{

	QApplication::addLibraryPath("./plugins");
	QApplication a(argc, argv);

	LogDlg w;

	//ColorDetect w;
	w.show();
	return a.exec();
}
