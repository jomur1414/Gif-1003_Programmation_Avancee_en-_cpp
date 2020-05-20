/********************************************************************************
** Form generated from reading UI file 'ajoutercamiongui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERCAMIONGUI_H
#define UI_AJOUTERCAMIONGUI_H

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

class Ui_ajouterCamionGuiClass
{
public:
    QLabel *labelNiv;
    QLabel *labelImmatriculation;
    QLabel *labelPoids;
    QLabel *labelNbEssieux;
    QLineEdit *leNiv;
    QLineEdit *leImmatriculation;
    QLineEdit *lePoids;
    QLineEdit *leNbEssieux;
    QPushButton *pushButtonOk;

    void setupUi(QDialog *ajouterCamionGuiClass)
    {
        if (ajouterCamionGuiClass->objectName().isEmpty())
            ajouterCamionGuiClass->setObjectName(QString::fromUtf8("ajouterCamionGuiClass"));
        ajouterCamionGuiClass->resize(400, 300);
        labelNiv = new QLabel(ajouterCamionGuiClass);
        labelNiv->setObjectName(QString::fromUtf8("labelNiv"));
        labelNiv->setGeometry(QRect(50, 30, 53, 17));
        labelImmatriculation = new QLabel(ajouterCamionGuiClass);
        labelImmatriculation->setObjectName(QString::fromUtf8("labelImmatriculation"));
        labelImmatriculation->setGeometry(QRect(20, 80, 101, 17));
        labelPoids = new QLabel(ajouterCamionGuiClass);
        labelPoids->setObjectName(QString::fromUtf8("labelPoids"));
        labelPoids->setGeometry(QRect(40, 130, 53, 17));
        labelNbEssieux = new QLabel(ajouterCamionGuiClass);
        labelNbEssieux->setObjectName(QString::fromUtf8("labelNbEssieux"));
        labelNbEssieux->setGeometry(QRect(30, 180, 92, 17));
        leNiv = new QLineEdit(ajouterCamionGuiClass);
        leNiv->setObjectName(QString::fromUtf8("leNiv"));
        leNiv->setGeometry(QRect(130, 20, 113, 27));
        leImmatriculation = new QLineEdit(ajouterCamionGuiClass);
        leImmatriculation->setObjectName(QString::fromUtf8("leImmatriculation"));
        leImmatriculation->setGeometry(QRect(130, 70, 113, 27));
        lePoids = new QLineEdit(ajouterCamionGuiClass);
        lePoids->setObjectName(QString::fromUtf8("lePoids"));
        lePoids->setGeometry(QRect(130, 120, 113, 27));
        leNbEssieux = new QLineEdit(ajouterCamionGuiClass);
        leNbEssieux->setObjectName(QString::fromUtf8("leNbEssieux"));
        leNbEssieux->setGeometry(QRect(130, 170, 113, 27));
        pushButtonOk = new QPushButton(ajouterCamionGuiClass);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setGeometry(QRect(280, 200, 80, 28));

        retranslateUi(ajouterCamionGuiClass);
        QObject::connect(pushButtonOk, SIGNAL(clicked()), ajouterCamionGuiClass, SLOT(validerCamion()));

        QMetaObject::connectSlotsByName(ajouterCamionGuiClass);
    } // setupUi

    void retranslateUi(QDialog *ajouterCamionGuiClass)
    {
        ajouterCamionGuiClass->setWindowTitle(QApplication::translate("ajouterCamionGuiClass", "ajouterCamionGui", 0, QApplication::UnicodeUTF8));
        labelNiv->setText(QApplication::translate("ajouterCamionGuiClass", "NIV", 0, QApplication::UnicodeUTF8));
        labelImmatriculation->setText(QApplication::translate("ajouterCamionGuiClass", "Immatriculation", 0, QApplication::UnicodeUTF8));
        labelPoids->setText(QApplication::translate("ajouterCamionGuiClass", "Poids", 0, QApplication::UnicodeUTF8));
        labelNbEssieux->setText(QApplication::translate("ajouterCamionGuiClass", "Nombre Essieux", 0, QApplication::UnicodeUTF8));
        pushButtonOk->setText(QApplication::translate("ajouterCamionGuiClass", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ajouterCamionGuiClass: public Ui_ajouterCamionGuiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERCAMIONGUI_H
