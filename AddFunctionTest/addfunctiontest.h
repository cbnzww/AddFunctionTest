#ifndef ADDFUNCTIONTEST_H
#define ADDFUNCTIONTEST_H

#include <QtWidgets/QWidget>
#include "ui_addfunctiontest.h"

class AddFunctionTest : public QWidget
{
	Q_OBJECT

public:
	AddFunctionTest(QWidget *parent = 0);
	~AddFunctionTest();

private:
	Ui::AddFunctionTestClass ui;
};

#endif // ADDFUNCTIONTEST_H
