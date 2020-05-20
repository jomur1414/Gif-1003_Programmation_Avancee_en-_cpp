/********************************************************************************
** Form generated from reading UI file 'proprietairegui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPRIETAIREGUI_H
#define UI_PROPRIETAIREGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProprietaireGuiClass
{
public:
    QAction *actionSupprimerVehicule;
    QAction *actionQuitter;
    QAction *actionAJouterCamion;
    QAction *actionAjouterVehiculePromenade;
    QWidget *centralwidget;
    QPlainTextEdit *plainTextEditAfficherNom;
    QPlainTextEdit *plainTextEditAfficherPrenom;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuAJouterVehicule;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ProprietaireGuiClass)
    {
        if (ProprietaireGuiClass->objectName().isEmpty())
            ProprietaireGuiClass->setObjectName(QString::fromUtf8("ProprietaireGuiClass"));
        ProprietaireGuiClass->resize(637, 600);
        actionSupprimerVehicule = new QAction(ProprietaireGuiClass);
        actionSupprimerVehicule->setObjectName(QString::fromUtf8("actionSupprimerVehicule"));
        actionSupprimerVehicule->setEnabled(true);
        actionQuitter = new QAction(ProprietaireGuiClass);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionAJouterCamion = new QAction(ProprietaireGuiClass);
        actionAJouterCamion->setObjectName(QString::fromUtf8("actionAJouterCamion"));
        actionAjouterVehiculePromenade = new QAction(ProprietaireGuiClass);
        actionAjouterVehiculePromenade->setObjectName(QString::fromUtf8("actionAjouterVehiculePromenade"));
        centralwidget = new QWidget(ProprietaireGuiClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        plainTextEditAfficherNom = new QPlainTextEdit(centralwidget);
        plainTextEditAfficherNom->setObjectName(QString::fromUtf8("plainTextEditAfficherNom"));
        plainTextEditAfficherNom->setEnabled(false);
        plainTextEditAfficherNom->setGeometry(QRect(90, 10, 191, 41));
        plainTextEditAfficherPrenom = new QPlainTextEdit(centralwidget);
        plainTextEditAfficherPrenom->setObjectName(QString::fromUtf8("plainTextEditAfficherPrenom"));
        plainTextEditAfficherPrenom->setEnabled(false);
        plainTextEditAfficherPrenom->setGeometry(QRect(360, 10, 201, 41));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(70, 70, 491, 321));
        textEdit->setReadOnly(true);
        ProprietaireGuiClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ProprietaireGuiClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 637, 25));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuAJouterVehicule = new QMenu(menuMenu);
        menuAJouterVehicule->setObjectName(QString::fromUtf8("menuAJouterVehicule"));
        menuAJouterVehicule->setEnabled(true);
        ProprietaireGuiClass->setMenuBar(menubar);
        statusbar = new QStatusBar(ProprietaireGuiClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ProprietaireGuiClass->setStatusBar(statusbar);
        toolBar = new QToolBar(ProprietaireGuiClass);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        ProprietaireGuiClass->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addSeparator();
        menuMenu->addAction(menuAJouterVehicule->menuAction());
        menuMenu->addAction(actionSupprimerVehicule);
        menuMenu->addAction(actionQuitter);
        menuAJouterVehicule->addAction(actionAJouterCamion);
        menuAJouterVehicule->addAction(actionAjouterVehiculePromenade);

        retranslateUi(ProprietaireGuiClass);
        QObject::connect(actionQuitter, SIGNAL(triggered()), ProprietaireGuiClass, SLOT(close()));
        QObject::connect(actionAJouterCamion, SIGNAL(triggered()), ProprietaireGuiClass, SLOT(dialogAjouterCamion()));
        QObject::connect(actionAjouterVehiculePromenade, SIGNAL(triggered()), ProprietaireGuiClass, SLOT(dialogAjouterVehiculePromenade()));
        QObject::connect(actionSupprimerVehicule, SIGNAL(triggered()), ProprietaireGuiClass, SLOT(dialogSupprimerVehicule()));

        QMetaObject::connectSlotsByName(ProprietaireGuiClass);
    } // setupUi

    void retranslateUi(QMainWindow *ProprietaireGuiClass)
    {
        ProprietaireGuiClass->setWindowTitle(QApplication::translate("ProprietaireGuiClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionSupprimerVehicule->setText(QApplication::translate("ProprietaireGuiClass", "SupprimerVehicule", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("ProprietaireGuiClass", "Quitter", 0, QApplication::UnicodeUTF8));
        actionAJouterCamion->setText(QApplication::translate("ProprietaireGuiClass", "AJouterCamion", 0, QApplication::UnicodeUTF8));
        actionAjouterVehiculePromenade->setText(QApplication::translate("ProprietaireGuiClass", "AjouterVehiculePromenade", 0, QApplication::UnicodeUTF8));
        menuMenu->setTitle(QApplication::translate("ProprietaireGuiClass", "Menu", 0, QApplication::UnicodeUTF8));
        menuAJouterVehicule->setTitle(QApplication::translate("ProprietaireGuiClass", "AJouterVehicule", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("ProprietaireGuiClass", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ProprietaireGuiClass: public Ui_ProprietaireGuiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPRIETAIREGUI_H
