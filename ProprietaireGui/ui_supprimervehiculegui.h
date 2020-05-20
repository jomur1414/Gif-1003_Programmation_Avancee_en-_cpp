/********************************************************************************
** Form generated from reading UI file 'supprimervehiculegui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPRIMERVEHICULEGUI_H
#define UI_SUPPRIMERVEHICULEGUI_H

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

class Ui_SupprimerVehiculeGuiClass
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *leNiv;
    QPushButton *pushButton;

    void setupUi(QDialog *SupprimerVehiculeGuiClass)
    {
        if (SupprimerVehiculeGuiClass->objectName().isEmpty())
            SupprimerVehiculeGuiClass->setObjectName(QString::fromUtf8("SupprimerVehiculeGuiClass"));
        SupprimerVehiculeGuiClass->resize(400, 300);
        label = new QLabel(SupprimerVehiculeGuiClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 30, 141, 41));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label_2 = new QLabel(SupprimerVehiculeGuiClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 130, 53, 17));
        label_2->setCursor(QCursor(Qt::CrossCursor));
        leNiv = new QLineEdit(SupprimerVehiculeGuiClass);
        leNiv->setObjectName(QString::fromUtf8("leNiv"));
        leNiv->setGeometry(QRect(100, 120, 231, 27));
        pushButton = new QPushButton(SupprimerVehiculeGuiClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 210, 191, 28));

        retranslateUi(SupprimerVehiculeGuiClass);
        QObject::connect(pushButton, SIGNAL(clicked()), SupprimerVehiculeGuiClass, SLOT(confirmerSuppression()));

        QMetaObject::connectSlotsByName(SupprimerVehiculeGuiClass);
    } // setupUi

    void retranslateUi(QDialog *SupprimerVehiculeGuiClass)
    {
        SupprimerVehiculeGuiClass->setWindowTitle(QApplication::translate("SupprimerVehiculeGuiClass", "SupprimerVehiculeGui", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SupprimerVehiculeGuiClass", "Supprimer Vehicule", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SupprimerVehiculeGuiClass", "NIV", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("SupprimerVehiculeGuiClass", "Confirmer suppresion", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SupprimerVehiculeGuiClass: public Ui_SupprimerVehiculeGuiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRIMERVEHICULEGUI_H
