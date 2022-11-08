/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QPushButton *pushButton;
    QLineEdit *id;
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *signature;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QComboBox *comboBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLabel *label_21;
    QDateEdit *dateEdit_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLabel *label_20;
    QLineEdit *lineEdit_15;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *label_17;
    QLineEdit *lineEdit_9;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_13;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_14;
    QLineEdit *lineEdit_4;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QLabel *label_23;
    QLineEdit *lineEdit_21;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLabel *label_22;
    QLineEdit *lineEdit_19;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLabel *label_18;
    QLineEdit *lineEdit_11;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *label_16;
    QDateEdit *dateEdit;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLabel *label_19;
    QLineEdit *lineEdit;
    QWidget *layoutWidget10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QLabel *label_24;
    QLineEdit *lineEdit_23;
    QWidget *layoutWidget11;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_15;
    QLabel *label_25;
    QComboBox *comboBox_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(60, 50, 661, 441));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(490, 200, 89, 25));
        id = new QLineEdit(groupBox_2);
        id->setObjectName("id");
        id->setGeometry(QRect(120, 30, 113, 25));
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setGeometry(QRect(410, 160, 67, 17));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pics/delta.jpeg")));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(490, 270, 89, 25));
        signature = new QLabel(groupBox_2);
        signature->setObjectName("signature");
        signature->setGeometry(QRect(440, 410, 67, 17));
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(250, 470, 92, 23));
        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(280, 280, 92, 23));
        comboBox = new QComboBox(groupBox_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(37, 30, 81, 25));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(41, 280, 229, 28));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        horizontalLayout_8->addWidget(label_9);

        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName("label_21");

        horizontalLayout_8->addWidget(label_21);

        dateEdit_2 = new QDateEdit(layoutWidget);
        dateEdit_2->setObjectName("dateEdit_2");
        dateEdit_2->setDate(QDate(2021, 12, 31));

        horizontalLayout_8->addWidget(dateEdit_2);

        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(41, 250, 296, 27));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName("label_8");

        horizontalLayout_7->addWidget(label_8);

        label_20 = new QLabel(layoutWidget1);
        label_20->setObjectName("label_20");

        horizontalLayout_7->addWidget(label_20);

        lineEdit_15 = new QLineEdit(layoutWidget1);
        lineEdit_15->setObjectName("lineEdit_15");

        horizontalLayout_7->addWidget(lineEdit_15);

        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(41, 160, 207, 27));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        label_17 = new QLabel(layoutWidget2);
        label_17->setObjectName("label_17");

        horizontalLayout_5->addWidget(label_17);

        lineEdit_9 = new QLineEdit(layoutWidget2);
        lineEdit_9->setObjectName("lineEdit_9");

        horizontalLayout_5->addWidget(lineEdit_9);

        layoutWidget3 = new QWidget(groupBox_2);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(41, 70, 205, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        label_13 = new QLabel(layoutWidget3);
        label_13->setObjectName("label_13");

        horizontalLayout_2->addWidget(label_13);

        lineEdit_2 = new QLineEdit(layoutWidget3);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);

        layoutWidget4 = new QWidget(groupBox_2);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(41, 100, 368, 27));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget4);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        label_14 = new QLabel(layoutWidget4);
        label_14->setObjectName("label_14");

        horizontalLayout_3->addWidget(label_14);

        lineEdit_4 = new QLineEdit(layoutWidget4);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_3->addWidget(lineEdit_4);

        layoutWidget5 = new QWidget(groupBox_2);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(41, 340, 304, 27));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget5);
        label_11->setObjectName("label_11");

        horizontalLayout_10->addWidget(label_11);

        label_23 = new QLabel(layoutWidget5);
        label_23->setObjectName("label_23");

        horizontalLayout_10->addWidget(label_23);

        lineEdit_21 = new QLineEdit(layoutWidget5);
        lineEdit_21->setObjectName("lineEdit_21");

        horizontalLayout_10->addWidget(lineEdit_21);

        layoutWidget6 = new QWidget(groupBox_2);
        layoutWidget6->setObjectName("layoutWidget6");
        layoutWidget6->setGeometry(QRect(42, 310, 240, 27));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget6);
        label_10->setObjectName("label_10");

        horizontalLayout_9->addWidget(label_10);

        label_22 = new QLabel(layoutWidget6);
        label_22->setObjectName("label_22");

        horizontalLayout_9->addWidget(label_22);

        lineEdit_19 = new QLineEdit(layoutWidget6);
        lineEdit_19->setObjectName("lineEdit_19");

        horizontalLayout_9->addWidget(lineEdit_19);

        layoutWidget7 = new QWidget(groupBox_2);
        layoutWidget7->setObjectName("layoutWidget7");
        layoutWidget7->setGeometry(QRect(42, 190, 371, 27));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget7);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        label_18 = new QLabel(layoutWidget7);
        label_18->setObjectName("label_18");

        horizontalLayout_6->addWidget(label_18);

        lineEdit_11 = new QLineEdit(layoutWidget7);
        lineEdit_11->setObjectName("lineEdit_11");

        horizontalLayout_6->addWidget(lineEdit_11);

        layoutWidget8 = new QWidget(groupBox_2);
        layoutWidget8->setObjectName("layoutWidget8");
        layoutWidget8->setGeometry(QRect(42, 130, 216, 28));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget8);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        label_16 = new QLabel(layoutWidget8);
        label_16->setObjectName("label_16");

        horizontalLayout_4->addWidget(label_16);

        dateEdit = new QDateEdit(layoutWidget8);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setDateTime(QDateTime(QDate(2020, 1, 11), QTime(0, 0, 0)));
        dateEdit->setDate(QDate(2020, 1, 11));

        horizontalLayout_4->addWidget(dateEdit);

        layoutWidget9 = new QWidget(groupBox_2);
        layoutWidget9->setObjectName("layoutWidget9");
        layoutWidget9->setGeometry(QRect(46, 220, 248, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget9);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget9);
        label_7->setObjectName("label_7");

        horizontalLayout->addWidget(label_7);

        label_19 = new QLabel(layoutWidget9);
        label_19->setObjectName("label_19");

        horizontalLayout->addWidget(label_19);

        lineEdit = new QLineEdit(layoutWidget9);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        layoutWidget10 = new QWidget(groupBox_2);
        layoutWidget10->setObjectName("layoutWidget10");
        layoutWidget10->setGeometry(QRect(41, 370, 221, 27));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget10);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget10);
        label_12->setObjectName("label_12");

        horizontalLayout_11->addWidget(label_12);

        label_24 = new QLabel(layoutWidget10);
        label_24->setObjectName("label_24");

        horizontalLayout_11->addWidget(label_24);

        lineEdit_23 = new QLineEdit(layoutWidget10);
        lineEdit_23->setObjectName("lineEdit_23");

        horizontalLayout_11->addWidget(lineEdit_23);

        layoutWidget11 = new QWidget(groupBox_2);
        layoutWidget11->setObjectName("layoutWidget11");
        layoutWidget11->setGeometry(QRect(41, 400, 246, 27));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget11);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget11);
        label_15->setObjectName("label_15");

        horizontalLayout_12->addWidget(label_15);

        label_25 = new QLabel(layoutWidget11);
        label_25->setObjectName("label_25");

        horizontalLayout_12->addWidget(label_25);

        comboBox_2 = new QComboBox(layoutWidget11);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout_12->addWidget(comboBox_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "HR TOOL", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Generate pdf", nullptr));
        label->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "sign", nullptr));
        signature->setText(QString());
        checkBox->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "select", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "es", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "it", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "hr", nullptr));
        comboBox->setItemText(4, QString());

        label_9->setText(QCoreApplication::translate("MainWindow", "Date of Relieving", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#e01b24;\">*</span></p></body></html>", nullptr));
        dateEdit_2->setDisplayFormat(QCoreApplication::translate("MainWindow", "d/M/yy", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Reporting Manager", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#e01b24;\">*</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Salary", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#e01b24;\">*</span></p></body></html>", nullptr));
        lineEdit_9->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#e01b24;\">*</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Designation at Time of joining", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#e01b24;\">*</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Reason for Relieving", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#e01b24;\">*</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Experience", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#e01b24;\">*</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Designation at Time of leaving", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#e01b24;\">*</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Date of Joining", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#e01b24;\">*</span></p></body></html>", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "d/M/yy", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Department", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#e01b24;\">*</span></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Conduct", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#e01b24;\">*</span></p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Eligibility for Rehire", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#e01b24;\">*</span></p></body></html>", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "select", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "Satisfied", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "Good", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "No", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
