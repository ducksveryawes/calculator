/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QLineEdit *Display;
    QPushButton *Button1;
    QPushButton *Button4;
    QPushButton *Button7;
    QPushButton *Clear;
    QPushButton *Button8;
    QPushButton *Button5;
    QPushButton *Button2;
    QPushButton *Button0;
    QPushButton *Button9;
    QPushButton *Button6;
    QPushButton *Button3;
    QPushButton *ChangeSign;
    QPushButton *Add;
    QPushButton *Multiply;
    QPushButton *Divide;
    QPushButton *Subtract;
    QPushButton *Equals;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(292, 335);
        Calculator->setMaximumSize(QSize(361, 376));
        Calculator->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"   background: #2a2a2a;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}"));
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setGeometry(QRect(9, 9, 201, 61));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(25);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: gray;\n"
"    border: 1px solid gray;\n"
"    color: #FFFFFF';\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setGeometry(QRect(10, 79, 61, 53));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(20);
        Button1->setFont(font1);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #808080;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #696969;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}"));
        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setGeometry(QRect(10, 143, 61, 53));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setFont(font1);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #808080;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #696969;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}"));
        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setGeometry(QRect(10, 206, 61, 53));
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setFont(font1);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #808080;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #696969;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}"));
        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setGeometry(QRect(10, 270, 61, 53));
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setFont(font1);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #808080;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #696969;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}"));
        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setGeometry(QRect(80, 206, 61, 53));
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setFont(font1);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #808080;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #696969;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}"));
        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setGeometry(QRect(80, 143, 61, 53));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setFont(font1);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #808080;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #696969;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}"));
        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setGeometry(QRect(80, 79, 61, 53));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setFont(font1);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #808080;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #696969;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}"));
        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setGeometry(QRect(80, 270, 61, 53));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setFont(font1);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #808080;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #696969;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}"));
        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setGeometry(QRect(150, 206, 61, 53));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setFont(font1);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #808080;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #696969;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}"));
        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setGeometry(QRect(150, 143, 61, 53));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setFont(font1);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #808080;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #696969;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}"));
        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setGeometry(QRect(150, 79, 61, 53));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setFont(font1);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #808080;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #696969;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}"));
        ChangeSign = new QPushButton(centralwidget);
        ChangeSign->setObjectName(QString::fromUtf8("ChangeSign"));
        ChangeSign->setGeometry(QRect(150, 270, 61, 53));
        sizePolicy.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy);
        ChangeSign->setFont(font1);
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #808080;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #696969;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}"));
        Add = new QPushButton(centralwidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setGeometry(QRect(220, 206, 61, 53));
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setFont(font1);
        Add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #A0522D;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #A52A2A;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}"));
        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        Multiply->setGeometry(QRect(220, 143, 61, 53));
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setFont(font1);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #A0522D;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #A52A2A;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}"));
        Divide = new QPushButton(centralwidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        Divide->setGeometry(QRect(220, 79, 61, 53));
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setFont(font1);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #A0522D;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #A52A2A;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}"));
        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        Subtract->setGeometry(QRect(220, 270, 61, 53));
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setFont(font1);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #A0522D;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #A52A2A;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}"));
        Equals = new QPushButton(centralwidget);
        Equals->setObjectName(QString::fromUtf8("Equals"));
        Equals->setGeometry(QRect(220, 10, 61, 61));
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        Equals->setFont(font1);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #A0522D;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #A52A2A;\n"
"    horder: 1px solid gray;\n"
"    padding: 5px;\n"
"}"));
        Calculator->setCentralWidget(centralwidget);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        ChangeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Equals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
