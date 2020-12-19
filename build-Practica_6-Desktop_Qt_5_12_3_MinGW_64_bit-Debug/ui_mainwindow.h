/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
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
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *x;
    QLabel *label_2;
    QDoubleSpinBox *y;
    QLabel *label_3;
    QDoubleSpinBox *vx;
    QLabel *label_4;
    QDoubleSpinBox *vy;
    QLabel *label_5;
    QDoubleSpinBox *masa;
    QLabel *label_6;
    QDoubleSpinBox *radio;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1100, 900);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 900, 800));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(910, 20, 131, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(910, 50, 131, 23));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(910, 360, 131, 23));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(910, 80, 131, 266));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        x = new QDoubleSpinBox(widget);
        x->setObjectName(QString::fromUtf8("x"));
        x->setMinimum(-99999999999999996863366107917975552.000000000000000);
        x->setMaximum(100000000000000000026609864708367276537402401181200809098131977453489758916313088.000000000000000);

        formLayout->setWidget(1, QFormLayout::LabelRole, x);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        y = new QDoubleSpinBox(widget);
        y->setObjectName(QString::fromUtf8("y"));
        y->setMinimum(-9999999999999999830336967949613257980309080240684656321838454199566729216.000000000000000);
        y->setMaximum(99999999999999997168788049560464200849936328366177157906432.000000000000000);

        formLayout->setWidget(3, QFormLayout::LabelRole, y);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        vx = new QDoubleSpinBox(widget);
        vx->setObjectName(QString::fromUtf8("vx"));
        vx->setMinimum(-100000000000000004337729697461918607329029332495193931179177378933611681288968111094132375552.000000000000000);
        vx->setMaximum(100000000000000001463069523067487303097004298786465505927861078716979636425114821591040.000000000000000);

        formLayout->setWidget(5, QFormLayout::LabelRole, vx);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);

        vy = new QDoubleSpinBox(widget);
        vy->setObjectName(QString::fromUtf8("vy"));
        vy->setMinimum(-100000000000000001555941612946684302426820139692106143336977058043083378116475570326498538991504744767620628086784.000000000000000);
        vy->setMaximum(9999999999999999818508707188399807864717650964328171247958398369899072554380053298205803424393137676263358464.000000000000000);

        formLayout->setWidget(7, QFormLayout::LabelRole, vy);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_5);

        masa = new QDoubleSpinBox(widget);
        masa->setObjectName(QString::fromUtf8("masa"));
        masa->setMinimum(-1000000000000000049861653971908893017010268485438462151574892930611988399099305815384459015356416.000000000000000);
        masa->setMaximum(99999999999999996881384047029926983435371269061279689406644211752791525136670645395254002395395884805259264.000000000000000);

        formLayout->setWidget(9, QFormLayout::LabelRole, masa);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_6);

        radio = new QDoubleSpinBox(widget);
        radio->setObjectName(QString::fromUtf8("radio"));
        radio->setMinimum(-100000000000000001440594758724527385583111862242831263013712314935498927069126131626863257625726456080505437183296233537536.000000000000000);
        radio->setMaximum(100000000000000001403918625579970521782461970570129136093830042945021304548650108108184133243565686844612285763778101906192989276863139689872767772084421689716760605683089408.000000000000000);

        formLayout->setWidget(11, QFormLayout::LabelRole, radio);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1100, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Star", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Agregar", nullptr));
        label->setText(QApplication::translate("MainWindow", "pos_X", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "pos_y", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "vel_x", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "vel_y", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "masa", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "radio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
