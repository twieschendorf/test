/********************************************************************************
** Form generated from reading UI file 'buttonssliders.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONSSLIDERS_H
#define UI_BUTTONSSLIDERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ButtonsSliders
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QProgressBar *volDisp;
    QSpacerItem *verticalSpacer_3;
    QSlider *volSlider;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLCDNumber *lightDispMain;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QDial *lightDialMain;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ButtonsSliders)
    {
        if (ButtonsSliders->objectName().isEmpty())
            ButtonsSliders->setObjectName(QStringLiteral("ButtonsSliders"));
        ButtonsSliders->resize(1011, 378);
        centralWidget = new QWidget(ButtonsSliders);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_4 = new QHBoxLayout(centralWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 40);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        volDisp = new QProgressBar(centralWidget);
        volDisp->setObjectName(QStringLiteral("volDisp"));
        volDisp->setValue(50);

        verticalLayout->addWidget(volDisp);

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        volSlider = new QSlider(centralWidget);
        volSlider->setObjectName(QStringLiteral("volSlider"));
        volSlider->setMaximum(100);
        volSlider->setValue(50);
        volSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(volSlider);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_5 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        verticalSpacer_6 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        lightDispMain = new QLCDNumber(centralWidget);
        lightDispMain->setObjectName(QStringLiteral("lightDispMain"));
        lightDispMain->setSmallDecimalPoint(false);
        lightDispMain->setProperty("intValue", QVariant(100));

        horizontalLayout->addWidget(lightDispMain);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lightDialMain = new QDial(centralWidget);
        lightDialMain->setObjectName(QStringLiteral("lightDialMain"));
        lightDialMain->setMaximum(100);
        lightDialMain->setValue(100);

        horizontalLayout_2->addWidget(lightDialMain);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        ButtonsSliders->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ButtonsSliders);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1011, 21));
        ButtonsSliders->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ButtonsSliders);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ButtonsSliders->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ButtonsSliders);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ButtonsSliders->setStatusBar(statusBar);

        retranslateUi(ButtonsSliders);

        QMetaObject::connectSlotsByName(ButtonsSliders);
    } // setupUi

    void retranslateUi(QMainWindow *ButtonsSliders)
    {
        ButtonsSliders->setWindowTitle(QApplication::translate("ButtonsSliders", "ButtonsSliders", Q_NULLPTR));
        label->setText(QApplication::translate("ButtonsSliders", "<html><head/><body><p><span style=\" font-weight:600;\">Volume Slider</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("ButtonsSliders", "<html><head/><body><p><span style=\" font-weight:600;\">Main Light Control</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ButtonsSliders: public Ui_ButtonsSliders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONSSLIDERS_H
