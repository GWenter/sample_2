/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *underline_box;
    QCheckBox *Italic_box;
    QCheckBox *boold_box;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *blue_btn;
    QRadioButton *red_btn;
    QRadioButton *black_btn;
    QPlainTextEdit *text_in;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *confirm_btn;
    QPushButton *concel_btn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *esc_btn;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 20, 261, 61));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        underline_box = new QCheckBox(groupBox);
        underline_box->setObjectName(QStringLiteral("underline_box"));
        QFont font;
        font.setPointSize(11);
        underline_box->setFont(font);

        horizontalLayout->addWidget(underline_box);

        Italic_box = new QCheckBox(groupBox);
        Italic_box->setObjectName(QStringLiteral("Italic_box"));
        Italic_box->setFont(font);

        horizontalLayout->addWidget(Italic_box);

        boold_box = new QCheckBox(groupBox);
        boold_box->setObjectName(QStringLiteral("boold_box"));
        boold_box->setFont(font);

        horizontalLayout->addWidget(boold_box);

        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 80, 281, 61));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        blue_btn = new QRadioButton(groupBox_2);
        blue_btn->setObjectName(QStringLiteral("blue_btn"));
        blue_btn->setFont(font);

        horizontalLayout_2->addWidget(blue_btn);

        red_btn = new QRadioButton(groupBox_2);
        red_btn->setObjectName(QStringLiteral("red_btn"));
        red_btn->setFont(font);

        horizontalLayout_2->addWidget(red_btn);

        black_btn = new QRadioButton(groupBox_2);
        black_btn->setObjectName(QStringLiteral("black_btn"));
        black_btn->setFont(font);

        horizontalLayout_2->addWidget(black_btn);

        text_in = new QPlainTextEdit(Dialog);
        text_in->setObjectName(QStringLiteral("text_in"));
        text_in->setGeometry(QRect(50, 160, 271, 71));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        text_in->setFont(font1);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 140, 75, 23));
        widget = new QWidget(Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 250, 309, 25));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        confirm_btn = new QPushButton(widget);
        confirm_btn->setObjectName(QStringLiteral("confirm_btn"));

        horizontalLayout_3->addWidget(confirm_btn);

        concel_btn = new QPushButton(widget);
        concel_btn->setObjectName(QStringLiteral("concel_btn"));

        horizontalLayout_3->addWidget(concel_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        esc_btn = new QPushButton(widget);
        esc_btn->setObjectName(QStringLiteral("esc_btn"));

        horizontalLayout_3->addWidget(esc_btn);


        retranslateUi(Dialog);
        QObject::connect(concel_btn, SIGNAL(clicked()), Dialog, SLOT(reject()));
        QObject::connect(esc_btn, SIGNAL(clicked()), Dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Dialog", "GroupBox", Q_NULLPTR));
        underline_box->setText(QApplication::translate("Dialog", "underline", Q_NULLPTR));
        Italic_box->setText(QApplication::translate("Dialog", "italic", Q_NULLPTR));
        boold_box->setText(QApplication::translate("Dialog", "boold", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Dialog", "GroupBox", Q_NULLPTR));
        blue_btn->setText(QApplication::translate("Dialog", "blue", Q_NULLPTR));
        red_btn->setText(QApplication::translate("Dialog", "red", Q_NULLPTR));
        black_btn->setText(QApplication::translate("Dialog", "black", Q_NULLPTR));
        text_in->setPlainText(QApplication::translate("Dialog", "hello\n"
"world", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog", "PushButton", Q_NULLPTR));
        confirm_btn->setText(QApplication::translate("Dialog", "confirm", Q_NULLPTR));
        concel_btn->setText(QApplication::translate("Dialog", "cancel", Q_NULLPTR));
        esc_btn->setText(QApplication::translate("Dialog", "esc", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
