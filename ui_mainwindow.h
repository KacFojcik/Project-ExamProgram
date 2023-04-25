/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_13;
    QLabel *label_17;
    QPushButton *losuj;
    QTextBrowser *textBrowser_4;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QRadioButton *pytz2_ok;
    QRadioButton *pytz1_half;
    QRadioButton *pytz1_ok;
    QRadioButton *pytz1_zle;
    QRadioButton *pytz2_half;
    QRadioButton *pytz2_zle;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QTextBrowser *pyt1_lab;
    QTextBrowser *pyt2_lab;
    QTextBrowser *pyt3_lab;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QRadioButton *pyt2_zle;
    QRadioButton *pyt3_zle;
    QRadioButton *pyt3_ok;
    QRadioButton *pyt1_ok;
    QRadioButton *pyt1_zle;
    QRadioButton *pyt2_ok;
    QLabel *label_10;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QDoubleSpinBox *srednia;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *dod_pyt;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLabel *label_8;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *oblicz_ocene;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_2;
    QLabel *ocena_wynik;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QSpinBox *zaw;
    QPushButton *zaw_plus;
    QPushButton *pushButton_8;
    QWidget *widget5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QSpinBox *kat1;
    QPushButton *kat1_plus;
    QPushButton *kat1_minus;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QSpinBox *kat2;
    QPushButton *kat2_plus;
    QPushButton *kat2_minus;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QSpinBox *kat3;
    QPushButton *kat3_plus;
    QPushButton *kat3_minus;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup_5;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_4;
    QButtonGroup *buttonGroup_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(850, 600);
        MainWindow->setMinimumSize(QSize(850, 600));
        MainWindow->setMaximumSize(QSize(850, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 130, 213, 25));
        QFont font;
        font.setPointSize(16);
        label_13->setFont(font);
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 400, 241, 25));
        label_17->setFont(font);
        losuj = new QPushButton(centralwidget);
        losuj->setObjectName(QString::fromUtf8("losuj"));
        losuj->setGeometry(QRect(430, 100, 131, 41));
        textBrowser_4 = new QTextBrowser(centralwidget);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(10, 430, 581, 121));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(600, 460, 231, 61));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pytz2_ok = new QRadioButton(layoutWidget);
        buttonGroup_5 = new QButtonGroup(MainWindow);
        buttonGroup_5->setObjectName(QString::fromUtf8("buttonGroup_5"));
        buttonGroup_5->addButton(pytz2_ok);
        pytz2_ok->setObjectName(QString::fromUtf8("pytz2_ok"));

        gridLayout_3->addWidget(pytz2_ok, 1, 0, 1, 1);

        pytz1_half = new QRadioButton(layoutWidget);
        buttonGroup_4 = new QButtonGroup(MainWindow);
        buttonGroup_4->setObjectName(QString::fromUtf8("buttonGroup_4"));
        buttonGroup_4->addButton(pytz1_half);
        pytz1_half->setObjectName(QString::fromUtf8("pytz1_half"));

        gridLayout_3->addWidget(pytz1_half, 0, 1, 1, 1);

        pytz1_ok = new QRadioButton(layoutWidget);
        buttonGroup_4->addButton(pytz1_ok);
        pytz1_ok->setObjectName(QString::fromUtf8("pytz1_ok"));

        gridLayout_3->addWidget(pytz1_ok, 0, 0, 1, 1);

        pytz1_zle = new QRadioButton(layoutWidget);
        buttonGroup_4->addButton(pytz1_zle);
        pytz1_zle->setObjectName(QString::fromUtf8("pytz1_zle"));

        gridLayout_3->addWidget(pytz1_zle, 0, 2, 1, 1);

        pytz2_half = new QRadioButton(layoutWidget);
        buttonGroup_5->addButton(pytz2_half);
        pytz2_half->setObjectName(QString::fromUtf8("pytz2_half"));

        gridLayout_3->addWidget(pytz2_half, 1, 1, 1, 1);

        pytz2_zle = new QRadioButton(layoutWidget);
        buttonGroup_5->addButton(pytz2_zle);
        pytz2_zle->setObjectName(QString::fromUtf8("pytz2_zle"));

        gridLayout_3->addWidget(pytz2_zle, 1, 2, 1, 1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 160, 581, 227));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pyt1_lab = new QTextBrowser(layoutWidget1);
        pyt1_lab->setObjectName(QString::fromUtf8("pyt1_lab"));

        verticalLayout->addWidget(pyt1_lab);

        pyt2_lab = new QTextBrowser(layoutWidget1);
        pyt2_lab->setObjectName(QString::fromUtf8("pyt2_lab"));

        verticalLayout->addWidget(pyt2_lab);

        pyt3_lab = new QTextBrowser(layoutWidget1);
        pyt3_lab->setObjectName(QString::fromUtf8("pyt3_lab"));

        verticalLayout->addWidget(pyt3_lab);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(640, 160, 180, 231));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pyt2_zle = new QRadioButton(layoutWidget2);
        buttonGroup_2 = new QButtonGroup(MainWindow);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(pyt2_zle);
        pyt2_zle->setObjectName(QString::fromUtf8("pyt2_zle"));

        gridLayout_2->addWidget(pyt2_zle, 1, 1, 1, 1);

        pyt3_zle = new QRadioButton(layoutWidget2);
        buttonGroup_3 = new QButtonGroup(MainWindow);
        buttonGroup_3->setObjectName(QString::fromUtf8("buttonGroup_3"));
        buttonGroup_3->addButton(pyt3_zle);
        pyt3_zle->setObjectName(QString::fromUtf8("pyt3_zle"));

        gridLayout_2->addWidget(pyt3_zle, 2, 1, 1, 1);

        pyt3_ok = new QRadioButton(layoutWidget2);
        buttonGroup_3->addButton(pyt3_ok);
        pyt3_ok->setObjectName(QString::fromUtf8("pyt3_ok"));

        gridLayout_2->addWidget(pyt3_ok, 2, 0, 1, 1);

        pyt1_ok = new QRadioButton(layoutWidget2);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(pyt1_ok);
        pyt1_ok->setObjectName(QString::fromUtf8("pyt1_ok"));

        gridLayout_2->addWidget(pyt1_ok, 0, 0, 1, 1);

        pyt1_zle = new QRadioButton(layoutWidget2);
        buttonGroup->addButton(pyt1_zle);
        pyt1_zle->setObjectName(QString::fromUtf8("pyt1_zle"));

        gridLayout_2->addWidget(pyt1_zle, 0, 1, 1, 1);

        pyt2_ok = new QRadioButton(layoutWidget2);
        buttonGroup_2->addButton(pyt2_ok);
        pyt2_ok->setObjectName(QString::fromUtf8("pyt2_ok"));

        gridLayout_2->addWidget(pyt2_ok, 1, 0, 1, 1);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(760, 10, 59, 23));
        QFont font1;
        font1.setPointSize(14);
        label_10->setFont(font1);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 10, 131, 31));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setPointSize(10);
        label_3->setFont(font2);

        horizontalLayout_5->addWidget(label_3);

        srednia = new QDoubleSpinBox(widget);
        srednia->setObjectName(QString::fromUtf8("srednia"));
        srednia->setMaximum(6.000000000000000);
        srednia->setSingleStep(0.100000000000000);

        horizontalLayout_5->addWidget(srednia);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 50, 201, 31));
        horizontalLayout_6 = new QHBoxLayout(widget1);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font2);

        horizontalLayout_6->addWidget(label);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        dod_pyt = new QLabel(widget1);
        dod_pyt->setObjectName(QString::fromUtf8("dod_pyt"));
        QFont font3;
        font3.setPointSize(12);
        dod_pyt->setFont(font3);

        horizontalLayout_6->addWidget(dod_pyt);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(254, 10, 321, 20));
        horizontalLayout_9 = new QHBoxLayout(widget2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 20));
        label_4->setFont(font2);

        horizontalLayout_9->addWidget(label_4);

        label_8 = new QLabel(widget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(16777215, 20));
        label_8->setFont(font2);

        horizontalLayout_9->addWidget(label_8);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(610, 40, 191, 27));
        horizontalLayout_8 = new QHBoxLayout(widget3);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        oblicz_ocene = new QPushButton(widget3);
        oblicz_ocene->setObjectName(QString::fromUtf8("oblicz_ocene"));

        horizontalLayout_7->addWidget(oblicz_ocene);

        label_11 = new QLabel(widget3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font3);

        horizontalLayout_7->addWidget(label_11);


        horizontalLayout_8->addLayout(horizontalLayout_7);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        ocena_wynik = new QLabel(widget3);
        ocena_wynik->setObjectName(QString::fromUtf8("ocena_wynik"));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        ocena_wynik->setFont(font4);

        horizontalLayout_8->addWidget(ocena_wynik);

        widget4 = new QWidget(centralwidget);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(420, 40, 151, 25));
        horizontalLayout_4 = new QHBoxLayout(widget4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_4->addWidget(label_9);

        zaw = new QSpinBox(widget4);
        zaw->setObjectName(QString::fromUtf8("zaw"));
        zaw->setReadOnly(true);
        zaw->setValue(0);

        horizontalLayout_4->addWidget(zaw);

        zaw_plus = new QPushButton(widget4);
        zaw_plus->setObjectName(QString::fromUtf8("zaw_plus"));

        horizontalLayout_4->addWidget(zaw_plus);

        pushButton_8 = new QPushButton(widget4);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        horizontalLayout_4->addWidget(pushButton_8);

        widget5 = new QWidget(centralwidget);
        widget5->setObjectName(QString::fromUtf8("widget5"));
        widget5->setGeometry(QRect(252, 37, 151, 89));
        verticalLayout_2 = new QVBoxLayout(widget5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(widget5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        kat1 = new QSpinBox(widget5);
        kat1->setObjectName(QString::fromUtf8("kat1"));
        kat1->setReadOnly(true);
        kat1->setAccelerated(false);
        kat1->setValue(0);

        horizontalLayout->addWidget(kat1);

        kat1_plus = new QPushButton(widget5);
        kat1_plus->setObjectName(QString::fromUtf8("kat1_plus"));

        horizontalLayout->addWidget(kat1_plus);

        kat1_minus = new QPushButton(widget5);
        kat1_minus->setObjectName(QString::fromUtf8("kat1_minus"));

        horizontalLayout->addWidget(kat1_minus);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(widget5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        kat2 = new QSpinBox(widget5);
        kat2->setObjectName(QString::fromUtf8("kat2"));
        kat2->setWrapping(false);
        kat2->setFrame(true);
        kat2->setReadOnly(true);
        kat2->setProperty("showGroupSeparator", QVariant(false));
        kat2->setValue(0);

        horizontalLayout_2->addWidget(kat2);

        kat2_plus = new QPushButton(widget5);
        kat2_plus->setObjectName(QString::fromUtf8("kat2_plus"));

        horizontalLayout_2->addWidget(kat2_plus);

        kat2_minus = new QPushButton(widget5);
        kat2_minus->setObjectName(QString::fromUtf8("kat2_minus"));

        horizontalLayout_2->addWidget(kat2_minus);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(widget5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        kat3 = new QSpinBox(widget5);
        kat3->setObjectName(QString::fromUtf8("kat3"));
        kat3->setReadOnly(true);
        kat3->setValue(0);

        horizontalLayout_3->addWidget(kat3);

        kat3_plus = new QPushButton(widget5);
        kat3_plus->setObjectName(QString::fromUtf8("kat3_plus"));

        horizontalLayout_3->addWidget(kat3_plus);

        kat3_minus = new QPushButton(widget5);
        kat3_minus->setObjectName(QString::fromUtf8("kat3_minus"));

        horizontalLayout_3->addWidget(kat3_minus);


        verticalLayout_2->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 850, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(kat1_plus, &QPushButton::clicked, kat1, qOverload<>(&QSpinBox::stepUp));
        QObject::connect(kat1_minus, &QPushButton::clicked, kat1, qOverload<>(&QSpinBox::stepDown));
        QObject::connect(kat2_plus, &QPushButton::clicked, kat2, qOverload<>(&QSpinBox::stepUp));
        QObject::connect(kat2_minus, &QPushButton::clicked, kat2, qOverload<>(&QSpinBox::stepDown));
        QObject::connect(kat3_plus, &QPushButton::clicked, kat3, qOverload<>(&QSpinBox::stepUp));
        QObject::connect(kat3_minus, &QPushButton::clicked, kat3, qOverload<>(&QSpinBox::stepDown));
        QObject::connect(zaw_plus, &QPushButton::clicked, zaw, qOverload<>(&QSpinBox::stepUp));
        QObject::connect(pushButton_8, &QPushButton::clicked, zaw, qOverload<>(&QSpinBox::stepDown));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Egzamin PK", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "CZ\304\230\305\232\304\206 PODSTAWOWA", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "CZ\304\230\305\232\304\206 ZAAWANSOWANA", nullptr));
        losuj->setText(QCoreApplication::translate("MainWindow", "Losuj pytania", nullptr));
        pytz2_ok->setText(QCoreApplication::translate("MainWindow", "PE\305\201NA", nullptr));
        pytz1_half->setText(QCoreApplication::translate("MainWindow", "CZ\304\230\305\232\304\206IOWA", nullptr));
        pytz1_ok->setText(QCoreApplication::translate("MainWindow", "PE\305\201NA", nullptr));
        pytz1_zle->setText(QCoreApplication::translate("MainWindow", "ZLA", nullptr));
        pytz2_half->setText(QCoreApplication::translate("MainWindow", "CZ\304\230\305\232\304\206IOWA", nullptr));
        pytz2_zle->setText(QCoreApplication::translate("MainWindow", "ZLA", nullptr));
        pyt2_zle->setText(QCoreApplication::translate("MainWindow", "ZLE", nullptr));
        pyt3_zle->setText(QCoreApplication::translate("MainWindow", "ZLE", nullptr));
        pyt3_ok->setText(QCoreApplication::translate("MainWindow", "DOBRZE", nullptr));
        pyt1_ok->setText(QCoreApplication::translate("MainWindow", "DOBRZE", nullptr));
        pyt1_zle->setText(QCoreApplication::translate("MainWindow", "ZLE", nullptr));
        pyt2_ok->setText(QCoreApplication::translate("MainWindow", "DOBRZE", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "WYNIK", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\305\232REDNIA", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "DODATKOWE PYTANIA", nullptr));
        dod_pyt->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "CZ\304\230\305\232\304\206 PODSTAWOWA", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "CZ\304\230\305\232\304\206 ZAAWANSOWANA", nullptr));
        oblicz_ocene->setText(QCoreApplication::translate("MainWindow", "Oblicz", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "OCENA", nullptr));
        ocena_wynik->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "1 KAT", nullptr));
        zaw_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "1 KAT", nullptr));
        kat1_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        kat1_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "2 KAT", nullptr));
        kat2_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        kat2_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "3 KAT", nullptr));
        kat3_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        kat3_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
