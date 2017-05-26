/********************************************************************************
** Form generated from reading UI file 'fenkuai.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENKUAI_H
#define UI_FENKUAI_H

#include <ActiveQt/QAxWidget>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenKuai
{
public:
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *mse;
    QLineEdit *shift_y;
    QLineEdit *rotate;
    QLineEdit *shift_x;
    QLineEdit *refImageSize;
    QLineEdit *ptpairsnum;
    QLineEdit *senImageSize;
    QLineEdit *registratetime;
    QLineEdit *scale;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLineEdit *refImageSize_2;
    QLineEdit *senImageSize_2;
    QLineEdit *ptpairsnum_2;
    QLineEdit *registratetime_2;
    QLineEdit *mse_2;
    QLineEdit *shift_x_2;
    QLineEdit *shift_y_2;
    QLineEdit *scale_2;
    QLineEdit *rotate_2;
    QAxWidget *MapCtr1;
    QAxWidget *MapCtr2;
    QAxWidget *MapToolBarCtr4;
    QAxWidget *MapTocCtr2;
    QAxWidget *MapToolBarCtr2;
    QPushButton *pushButton;
    QAxWidget *MapCtr4;
    QAxWidget *MapToolBarCtr1;
    QPushButton *pushButton_2;
    QAxWidget *MapTocCtr1;

    void setupUi(QWidget *FenKuai)
    {
        if (FenKuai->objectName().isEmpty())
            FenKuai->setObjectName(QString::fromUtf8("FenKuai"));
        FenKuai->resize(1434, 929);
        groupBox_3 = new QGroupBox(FenKuai);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(960, 510, 111, 291));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 8, 0, 1, 1, Qt::AlignHCenter);

        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 4, 0, 1, 1, Qt::AlignHCenter);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 5, 0, 1, 1, Qt::AlignHCenter);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1, Qt::AlignHCenter);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 7, 0, 1, 1, Qt::AlignHCenter);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 9, 0, 1, 1, Qt::AlignHCenter);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 6, 0, 1, 1, Qt::AlignHCenter);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1, Qt::AlignHCenter);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1, Qt::AlignHCenter);

        groupBox = new QGroupBox(FenKuai);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(790, 500, 171, 301));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mse = new QLineEdit(groupBox);
        mse->setObjectName(QString::fromUtf8("mse"));

        gridLayout->addWidget(mse, 8, 0, 1, 1);

        shift_y = new QLineEdit(groupBox);
        shift_y->setObjectName(QString::fromUtf8("shift_y"));

        gridLayout->addWidget(shift_y, 10, 0, 1, 1);

        rotate = new QLineEdit(groupBox);
        rotate->setObjectName(QString::fromUtf8("rotate"));

        gridLayout->addWidget(rotate, 12, 0, 1, 1);

        shift_x = new QLineEdit(groupBox);
        shift_x->setObjectName(QString::fromUtf8("shift_x"));

        gridLayout->addWidget(shift_x, 9, 0, 1, 1);

        refImageSize = new QLineEdit(groupBox);
        refImageSize->setObjectName(QString::fromUtf8("refImageSize"));

        gridLayout->addWidget(refImageSize, 0, 0, 1, 1);

        ptpairsnum = new QLineEdit(groupBox);
        ptpairsnum->setObjectName(QString::fromUtf8("ptpairsnum"));

        gridLayout->addWidget(ptpairsnum, 2, 0, 1, 1);

        senImageSize = new QLineEdit(groupBox);
        senImageSize->setObjectName(QString::fromUtf8("senImageSize"));

        gridLayout->addWidget(senImageSize, 1, 0, 1, 1);

        registratetime = new QLineEdit(groupBox);
        registratetime->setObjectName(QString::fromUtf8("registratetime"));

        gridLayout->addWidget(registratetime, 3, 0, 1, 1);

        scale = new QLineEdit(groupBox);
        scale->setObjectName(QString::fromUtf8("scale"));

        gridLayout->addWidget(scale, 11, 0, 1, 1);

        groupBox_2 = new QGroupBox(FenKuai);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(1070, 500, 181, 301));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        refImageSize_2 = new QLineEdit(groupBox_2);
        refImageSize_2->setObjectName(QString::fromUtf8("refImageSize_2"));

        gridLayout_3->addWidget(refImageSize_2, 0, 0, 1, 1);

        senImageSize_2 = new QLineEdit(groupBox_2);
        senImageSize_2->setObjectName(QString::fromUtf8("senImageSize_2"));

        gridLayout_3->addWidget(senImageSize_2, 1, 0, 1, 1);

        ptpairsnum_2 = new QLineEdit(groupBox_2);
        ptpairsnum_2->setObjectName(QString::fromUtf8("ptpairsnum_2"));

        gridLayout_3->addWidget(ptpairsnum_2, 2, 0, 1, 1);

        registratetime_2 = new QLineEdit(groupBox_2);
        registratetime_2->setObjectName(QString::fromUtf8("registratetime_2"));

        gridLayout_3->addWidget(registratetime_2, 3, 0, 1, 1);

        mse_2 = new QLineEdit(groupBox_2);
        mse_2->setObjectName(QString::fromUtf8("mse_2"));

        gridLayout_3->addWidget(mse_2, 4, 0, 1, 1);

        shift_x_2 = new QLineEdit(groupBox_2);
        shift_x_2->setObjectName(QString::fromUtf8("shift_x_2"));

        gridLayout_3->addWidget(shift_x_2, 5, 0, 1, 1);

        shift_y_2 = new QLineEdit(groupBox_2);
        shift_y_2->setObjectName(QString::fromUtf8("shift_y_2"));

        gridLayout_3->addWidget(shift_y_2, 6, 0, 1, 1);

        scale_2 = new QLineEdit(groupBox_2);
        scale_2->setObjectName(QString::fromUtf8("scale_2"));

        gridLayout_3->addWidget(scale_2, 7, 0, 1, 1);

        rotate_2 = new QLineEdit(groupBox_2);
        rotate_2->setObjectName(QString::fromUtf8("rotate_2"));

        gridLayout_3->addWidget(rotate_2, 8, 0, 1, 1);

        MapCtr1 = new QAxWidget(FenKuai);
        MapCtr1->setObjectName(QString::fromUtf8("MapCtr1"));
        MapCtr1->setProperty("geometry", QVariant(QRect(110, 40, 581, 421)));
        MapCtr2 = new QAxWidget(FenKuai);
        MapCtr2->setObjectName(QString::fromUtf8("MapCtr2"));
        MapCtr2->setProperty("geometry", QVariant(QRect(830, 40, 581, 421)));
        MapToolBarCtr4 = new QAxWidget(FenKuai);
        MapToolBarCtr4->setObjectName(QString::fromUtf8("MapToolBarCtr4"));
        MapToolBarCtr4->setProperty("geometry", QVariant(QRect(10, 480, 681, 31)));
        MapTocCtr2 = new QAxWidget(FenKuai);
        MapTocCtr2->setObjectName(QString::fromUtf8("MapTocCtr2"));
        MapTocCtr2->setProperty("geometry", QVariant(QRect(730, 40, 101, 421)));
        MapToolBarCtr2 = new QAxWidget(FenKuai);
        MapToolBarCtr2->setObjectName(QString::fromUtf8("MapToolBarCtr2"));
        MapToolBarCtr2->setProperty("geometry", QVariant(QRect(730, 10, 681, 31)));
        pushButton = new QPushButton(FenKuai);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(820, 810, 75, 23));
        MapCtr4 = new QAxWidget(FenKuai);
        MapCtr4->setObjectName(QString::fromUtf8("MapCtr4"));
        MapCtr4->setProperty("geometry", QVariant(QRect(10, 510, 681, 401)));
        MapToolBarCtr1 = new QAxWidget(FenKuai);
        MapToolBarCtr1->setObjectName(QString::fromUtf8("MapToolBarCtr1"));
        MapToolBarCtr1->setProperty("geometry", QVariant(QRect(10, 10, 681, 31)));
        pushButton_2 = new QPushButton(FenKuai);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1120, 810, 75, 23));
        MapTocCtr1 = new QAxWidget(FenKuai);
        MapTocCtr1->setObjectName(QString::fromUtf8("MapTocCtr1"));
        MapTocCtr1->setProperty("geometry", QVariant(QRect(10, 40, 101, 421)));

        retranslateUi(FenKuai);

        QMetaObject::connectSlotsByName(FenKuai);
    } // setupUi

    void retranslateUi(QWidget *FenKuai)
    {
        FenKuai->setWindowTitle(QApplication::translate("FenKuai", "FenKuai", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QString());
        label_8->setText(QApplication::translate("FenKuai", "\347\274\251\346\224\276\346\257\224\344\276\213", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FenKuai", "\347\256\227\346\263\225\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FenKuai", "\347\256\227\346\263\225\347\262\276\345\272\246", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FenKuai", "\345\217\202\350\200\203\345\233\276\345\203\217\345\260\272\345\257\270", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("FenKuai", "\345\271\263\347\247\273\351\207\217-Y", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("FenKuai", "\346\227\213\350\275\254\345\272\246\346\225\260", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FenKuai", "\345\271\263\347\247\273\351\207\217-X", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FenKuai", "\345\276\205\351\205\215\345\207\206\345\233\276\345\203\217\345\260\272\345\257\270", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FenKuai", "\345\214\271\351\205\215\347\202\271\345\257\271", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("FenKuai", "\351\231\215\351\207\207\346\240\267+\345\210\206\345\235\227\347\256\227\346\263\225", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("FenKuai", "\351\231\215\351\207\207\346\240\267\345\277\253\351\200\237\347\256\227\346\263\225", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("FenKuai", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("FenKuai", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FenKuai: public Ui_FenKuai {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENKUAI_H
