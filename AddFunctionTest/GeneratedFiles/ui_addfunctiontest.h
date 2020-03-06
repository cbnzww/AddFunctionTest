/********************************************************************************
** Form generated from reading UI file 'addfunctiontest.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFUNCTIONTEST_H
#define UI_ADDFUNCTIONTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddFunctionTestClass
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_Option3;
    QSpacerItem *horizontalSpacer_10;
    QLabel *str_Label;
    QComboBox *str_ComboBox;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_Option3_2;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *str_PushButton;
    QLineEdit *str_LineEdit;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *AddFunctionTestClass)
    {
        if (AddFunctionTestClass->objectName().isEmpty())
            AddFunctionTestClass->setObjectName(QStringLiteral("AddFunctionTestClass"));
        AddFunctionTestClass->resize(800, 600);
        verticalLayout = new QVBoxLayout(AddFunctionTestClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(AddFunctionTestClass);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, 580));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_Option3 = new QHBoxLayout();
        horizontalLayout_Option3->setSpacing(6);
        horizontalLayout_Option3->setObjectName(QStringLiteral("horizontalLayout_Option3"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Option3->addItem(horizontalSpacer_10);

        str_Label = new QLabel(scrollAreaWidgetContents);
        str_Label->setObjectName(QStringLiteral("str_Label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(str_Label->sizePolicy().hasHeightForWidth());
        str_Label->setSizePolicy(sizePolicy);
        str_Label->setMinimumSize(QSize(230, 25));
        str_Label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_Option3->addWidget(str_Label);

        str_ComboBox = new QComboBox(scrollAreaWidgetContents);
        str_ComboBox->setObjectName(QStringLiteral("str_ComboBox"));
        sizePolicy.setHeightForWidth(str_ComboBox->sizePolicy().hasHeightForWidth());
        str_ComboBox->setSizePolicy(sizePolicy);
        str_ComboBox->setMinimumSize(QSize(360, 30));
        str_ComboBox->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_Option3->addWidget(str_ComboBox);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Option3->addItem(horizontalSpacer_11);


        verticalLayout_2->addLayout(horizontalLayout_Option3);

        horizontalLayout_Option3_2 = new QHBoxLayout();
        horizontalLayout_Option3_2->setSpacing(6);
        horizontalLayout_Option3_2->setObjectName(QStringLiteral("horizontalLayout_Option3_2"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Option3_2->addItem(horizontalSpacer_12);

        str_PushButton = new QPushButton(scrollAreaWidgetContents);
        str_PushButton->setObjectName(QStringLiteral("str_PushButton"));
        sizePolicy.setHeightForWidth(str_PushButton->sizePolicy().hasHeightForWidth());
        str_PushButton->setSizePolicy(sizePolicy);
        str_PushButton->setMinimumSize(QSize(100, 25));
        str_PushButton->setFocusPolicy(Qt::StrongFocus);
        str_PushButton->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        str_PushButton->setCheckable(false);
        str_PushButton->setAutoDefault(false);
        str_PushButton->setFlat(false);

        horizontalLayout_Option3_2->addWidget(str_PushButton);

        str_LineEdit = new QLineEdit(scrollAreaWidgetContents);
        str_LineEdit->setObjectName(QStringLiteral("str_LineEdit"));
        sizePolicy.setHeightForWidth(str_LineEdit->sizePolicy().hasHeightForWidth());
        str_LineEdit->setSizePolicy(sizePolicy);
        str_LineEdit->setMinimumSize(QSize(490, 30));
        str_LineEdit->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_Option3_2->addWidget(str_LineEdit);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Option3_2->addItem(horizontalSpacer_13);


        verticalLayout_2->addLayout(horizontalLayout_Option3_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(AddFunctionTestClass);

        str_PushButton->setDefault(false);


        QMetaObject::connectSlotsByName(AddFunctionTestClass);
    } // setupUi

    void retranslateUi(QWidget *AddFunctionTestClass)
    {
        AddFunctionTestClass->setWindowTitle(QApplication::translate("AddFunctionTestClass", "AddFunctionTest", Q_NULLPTR));
        str_Label->setText(QApplication::translate("AddFunctionTestClass", "\346\225\260\346\215\256\346\272\220\346\240\274\345\274\217\346\230\257\345\220\246\351\200\232\347\224\250", Q_NULLPTR));
        str_ComboBox->clear();
        str_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddFunctionTestClass", "\346\230\257", Q_NULLPTR)
         << QApplication::translate("AddFunctionTestClass", "\345\220\246", Q_NULLPTR)
        );
        str_PushButton->setText(QApplication::translate("AddFunctionTestClass", "\351\200\211\346\213\251\346\226\207\344\273\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddFunctionTestClass: public Ui_AddFunctionTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFUNCTIONTEST_H
