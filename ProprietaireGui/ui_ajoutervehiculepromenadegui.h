/********************************************************************************
** Form generated from reading UI file 'ajoutervehiculepromenadegui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERVEHICULEPROMENADEGUI_H
#define UI_AJOUTERVEHICULEPROMENADEGUI_H

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

class Ui_ajouterVehiculePromenadeGuiClass
{
public:
    QLabel *labelImmatriculation;
    QLabel *labelNiv;
    QLineEdit *leNiv;
    QPushButton *pushButtonOk;
    QLabel *labelPoids;
    QLineEdit *leNbPlace;
    QLineEdit *leImmatriculation;

    void setupUi(QDialog *ajouterVehiculePromenadeGuiClass)
    {
        if (ajouterVehiculePromenadeGuiClass->objectName().isEmpty())
            ajouterVehiculePromenadeGuiClass->setObjectName(QString::fromUtf8("ajouterVehiculePromenadeGuiClass"));
        ajouterVehiculePromenadeGuiClass->resize(400, 300);
        labelImmatriculation = new QLabel(ajouterVehiculePromenadeGuiClass);
        labelImmatriculation->setObjectName(QString::fromUtf8("labelImmatriculation"));
        labelImmatriculation->setGeometry(QRect(40, 100, 101, 17));
        labelNiv = new QLabel(ajouterVehiculePromenadeGuiClass);
        labelNiv->setObjectName(QString::fromUtf8("labelNiv"));
        labelNiv->setGeometry(QRect(70, 50, 53, 17));
        leNiv = new QLineEdit(ajouterVehiculePromenadeGuiClass);
        leNiv->setObjectName(QString::fromUtf8("leNiv"));
        leNiv->setGeometry(QRect(150, 40, 113, 27));
        pushButtonOk = new QPushButton(ajouterVehiculePromenadeGuiClass);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setGeometry(QRect(300, 220, 80, 28));
        labelPoids = new QLabel(ajouterVehiculePromenadeGuiClass);
        labelPoids->setObjectName(QString::fromUtf8("labelPoids"));
        labelPoids->setGeometry(QRect(40, 150, 101, 17));
        leNbPlace = new QLineEdit(ajouterVehiculePromenadeGuiClass);
        leNbPlace->setObjectName(QString::fromUtf8("leNbPlace"));
        leNbPlace->setGeometry(QRect(150, 140, 113, 27));
        leImmatriculation = new QLineEdit(ajouterVehiculePromenadeGuiClass);
        leImmatriculation->setObjectName(QString::fromUtf8("leImmatriculation"));
        leImmatriculation->setGeometry(QRect(150, 90, 113, 27));

        retranslateUi(ajouterVehiculePromenadeGuiClass);
        QObject::connect(pushButtonOk, SIGNAL(clicked()), ajouterVehiculePromenadeGuiClass, SLOT(validerVehiculePromenade()));

        QMetaObject::connectSlotsByName(ajouterVehiculePromenadeGuiClass);
    } // setupUi

    void retranslateUi(QDialog *ajouterVehiculePromenadeGuiClass)
    {
        ajouterVehiculePromenadeGuiClass->setWindowTitle(QApplication::translate("ajouterVehiculePromenadeGuiClass", "ajouterVehiculePromenadeGui", 0, QApplication::UnicodeUTF8));
        labelImmatriculation->setText(QApplication::translate("ajouterVehiculePromenadeGuiClass", "Immatriculation", 0, QApplication::UnicodeUTF8));
        labelNiv->setText(QApplication::translate("ajouterVehiculePromenadeGuiClass", "NIV", 0, QApplication::UnicodeUTF8));
        pushButtonOk->setText(QApplication::translate("ajouterVehiculePromenadeGuiClass", "Ok", 0, QApplication::UnicodeUTF8));
        labelPoids->setText(QApplication::translate("ajouterVehiculePromenadeGuiClass", "Nombre de place", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ajouterVehiculePromenadeGuiClass: public Ui_ajouterVehiculePromenadeGuiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERVEHICULEPROMENADEGUI_H
