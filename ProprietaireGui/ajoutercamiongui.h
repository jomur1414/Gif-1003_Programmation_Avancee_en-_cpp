#ifndef AJOUTERCAMIONGUI_H
#define AJOUTERCAMIONGUI_H

#include <QtGui/QDialog>
//#include <QtGui/QString>
#include "ui_ajoutercamiongui.h"

class ajouterCamionGui : public QDialog
{
    Q_OBJECT

public:
    ajouterCamionGui(QWidget *parent = 0);
    ~ajouterCamionGui();
    QString reqNiv() ;
       QString reqImmatriculation();
       QString reqPoids();
       QString reqNbEssieux();

private slots:
      	void validerCamion();


private:
    Ui::ajouterCamionGuiClass ui;





};

#endif // AJOUTERCAMIONGUI_H
