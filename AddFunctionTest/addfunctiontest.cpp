#include "stdafx.h"
#include "addfunctiontest.h"

AddFunctionTest::AddFunctionTest(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	connect(ui.str_PushButton, &QPushButton::clicked, this, [=]()
	{
		QString filter;
		filter = "Jar file (*.jar*)";
		QDir dir;
		QString filepath;
		filepath = QFileDialog::getOpenFileName(NULL, QString("Please Select Jar File"), dir.absolutePath(), filter);
		ui.str_LineEdit->setText(filepath);
	});
}

AddFunctionTest::~AddFunctionTest()
{

}

