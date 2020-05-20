/********************************************************************************
** Form generated from reading UI file 'ajouterproprietairegui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERPROPRIETAIREGUI_H
#define UI_AJOUTERPROPRIETAIREGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ajouterProprietaireGuiClass
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *leNom;
    QLineEdit *lePrenom;
    QPushButton *pushButtonOk;

    void setupUi(QDialog *ajouterProprietaireGuiClass)
    {
        if (ajouterProprietaireGuiClass->objectName().isEmpty())
            ajouterProprietaireGuiClass->setObjectName(QString::fromUtf8("ajouterProprietaireGuiClass"));
        ajouterProprietaireGuiClass->resize(411, 309);
        label = new QLabel(ajouterProprietaireGuiClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 81, 41));
        label_2 = new QLabel(ajouterProprietaireGuiClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 100, 53, 17));
        leNom = new QLineEdit(ajouterProprietaireGuiClass);
        leNom->setObjectName(QString::fromUtf8("leNom"));
        leNom->setGeometry(QRect(100, 40, 113, 27));
        lePrenom = new QLineEdit(ajouterProprietaireGuiClass);
        lePrenom->setObjectName(QString::fromUtf8("lePrenom"));
        lePrenom->setGeometry(QRect(100, 90, 113, 27));
        pushButtonOk = new QPushButton(ajouterProprietaireGuiClass);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setGeometry(QRect(240, 220, 101, 28));

        retranslateUi(ajouterProprietaireGuiClass);
        QObject::connect(pushButtonOk, SIGNAL(clicked()), ajouterProprietaireGuiClass, SLOT(validerProprietaire()));

        QMetaObject::connectSlotsByName(ajouterProprietaireGuiClass);
    } // setupUi

    void retranslateUi(QDialog *ajouterProprietaireGuiClass)
    {
        ajouterProprietaireGuiClass->setWindowTitle(QApplication::translate("ajouterProprietaireGuiClass", "ajouterProprietaireGui", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ajouterProprietaireGuiClass", "Nom", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ajouterProprietaireGuiClass", "Prenom", 0, QApplication::UnicodeUTF8));
        pushButtonOk->setText(QApplication::translate("ajouterProprietaireGuiClass", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ajouterProprietaireGuiClass: public Ui_ajouterProprietaireGuiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERPROPRIETAIREGUI_H
