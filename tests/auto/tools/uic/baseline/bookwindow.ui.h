/********************************************************************************
** Form generated from reading UI file 'bookwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef BOOKWINDOW_H
#define BOOKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QTableView *bookTable;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLineEdit *titleEdit;
    QLabel *label_2_2_2_2;
    QComboBox *authorEdit;
    QLabel *label_3;
    QComboBox *genreEdit;
    QLabel *label_4;
    QSpinBox *yearEdit;
    QLabel *label;
    QSpinBox *ratingEdit;

    void setupUi(QMainWindow *BookWindow)
    {
        if (BookWindow->objectName().isEmpty())
            BookWindow->setObjectName("BookWindow");
        BookWindow->resize(601, 420);
        centralWidget = new QWidget(BookWindow);
        centralWidget->setObjectName("centralWidget");
        vboxLayout = new QVBoxLayout(centralWidget);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        vboxLayout1 = new QVBoxLayout(groupBox);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName("vboxLayout1");
        bookTable = new QTableView(groupBox);
        bookTable->setObjectName("bookTable");
        bookTable->setSelectionBehavior(QAbstractItemView::SelectRows);

        vboxLayout1->addWidget(bookTable);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName("formLayout");
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_5);

        titleEdit = new QLineEdit(groupBox_2);
        titleEdit->setObjectName("titleEdit");
        titleEdit->setEnabled(true);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, titleEdit);

        label_2_2_2_2 = new QLabel(groupBox_2);
        label_2_2_2_2->setObjectName("label_2_2_2_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2_2_2_2);

        authorEdit = new QComboBox(groupBox_2);
        authorEdit->setObjectName("authorEdit");
        authorEdit->setEnabled(true);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, authorEdit);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        genreEdit = new QComboBox(groupBox_2);
        genreEdit->setObjectName("genreEdit");
        genreEdit->setEnabled(true);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, genreEdit);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        yearEdit = new QSpinBox(groupBox_2);
        yearEdit->setObjectName("yearEdit");
        yearEdit->setEnabled(true);
        yearEdit->setMaximum(2100);
        yearEdit->setMinimum(-1000);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, yearEdit);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label);

        ratingEdit = new QSpinBox(groupBox_2);
        ratingEdit->setObjectName("ratingEdit");
        ratingEdit->setMaximum(5);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, ratingEdit);


        vboxLayout1->addWidget(groupBox_2);


        vboxLayout->addWidget(groupBox);

        BookWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(bookTable, titleEdit);
        QWidget::setTabOrder(titleEdit, authorEdit);
        QWidget::setTabOrder(authorEdit, genreEdit);
        QWidget::setTabOrder(genreEdit, yearEdit);

        retranslateUi(BookWindow);

        QMetaObject::connectSlotsByName(BookWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BookWindow)
    {
        BookWindow->setWindowTitle(QCoreApplication::translate("BookWindow", "Books", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BookWindow", "Books", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("BookWindow", "Details", nullptr));
        label_5->setText(QCoreApplication::translate("BookWindow", "<b>Title:</b>", nullptr));
        label_2_2_2_2->setText(QCoreApplication::translate("BookWindow", "<b>Author: </b>", nullptr));
        label_3->setText(QCoreApplication::translate("BookWindow", "<b>Genre:</b>", nullptr));
        label_4->setText(QCoreApplication::translate("BookWindow", "<b>Year:</b>", nullptr));
        yearEdit->setPrefix(QString());
        label->setText(QCoreApplication::translate("BookWindow", "<b>Rating:</b>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookWindow: public Ui_BookWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BOOKWINDOW_H
