#include "stdafx.h"
#include "addfunctiontest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	AddFunctionTest w;
	w.show();
	return a.exec();
}
