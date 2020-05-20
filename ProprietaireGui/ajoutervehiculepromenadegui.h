#ifndef AJOUTERVEHICULEPROMENADEGUI_H
#define AJOUTERVEHICULEPROMENADEGUI_H

#include <QtGui/QDialog>
#include "ui_ajoutervehiculepromenadegui.h"

class ajouterVehiculePromenadeGui : public QDialog
{
    Q_OBJECT

public:
    ajouterVehiculePromenadeGui(QWidget *parent = 0);
    ~ajouterVehiculePromenadeGui();

    QString reqNiv() ;
       QString reqImmatriculation();
       QString reqNbPlace();


 private slots :

   	void validerVehiculePromenade();

private:
    Ui::ajouterVehiculePromenadeGuiClass ui;
};

#endif // AJOUTERVEHICULEPROMENADEGUI_H




