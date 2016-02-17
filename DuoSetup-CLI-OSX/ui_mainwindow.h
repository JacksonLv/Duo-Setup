/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *fileBrowseLineEdit;
    QPushButton *fileBrowseButton;
    QTextEdit *otaResultsTextEdit;
    QPushButton *otaButton;
    QHBoxLayout *horizontalLayout_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 500);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setAcceptDrops(false);
        MainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        fileBrowseLineEdit = new QLineEdit(centralWidget);
        fileBrowseLineEdit->setObjectName(QStringLiteral("fileBrowseLineEdit"));
        fileBrowseLineEdit->setReadOnly(false);

        horizontalLayout->addWidget(fileBrowseLineEdit);

        fileBrowseButton = new QPushButton(centralWidget);
        fileBrowseButton->setObjectName(QStringLiteral("fileBrowseButton"));

        horizontalLayout->addWidget(fileBrowseButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        otaResultsTextEdit = new QTextEdit(centralWidget);
        otaResultsTextEdit->setObjectName(QStringLiteral("otaResultsTextEdit"));
        otaResultsTextEdit->setReadOnly(true);

        gridLayout->addWidget(otaResultsTextEdit, 8, 0, 1, 1);

        otaButton = new QPushButton(centralWidget);
        otaButton->setObjectName(QStringLiteral("otaButton"));

        gridLayout->addWidget(otaButton, 9, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);

        gridLayout->addLayout(horizontalLayout_3, 4, 0, 4, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(fileBrowseButton, otaButton);
        QWidget::setTabOrder(otaButton, fileBrowseLineEdit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "duo-setup-cli", 0));
        fileBrowseLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Select FIle", 0));
        fileBrowseButton->setText(QApplication::translate("MainWindow", "Browse", 0));
        otaButton->setText(QApplication::translate("MainWindow", "Flash", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
