#include "ajoutervehiculepromenadegui.h"
#include <QtGui/QMessageBox>

ajouterVehiculePromenadeGui::ajouterVehiculePromenadeGui(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
}

ajouterVehiculePromenadeGui::~ajouterVehiculePromenadeGui()
{

}


QString ajouterVehiculePromenadeGui::reqNiv() {
return 	ui.leNiv->text();
}

QString ajouterVehiculePromenadeGui::reqImmatriculation(){
return 	ui.leImmatriculation->text();
}

QString ajouterVehiculePromenadeGui::reqNbPlace(){
return 	ui.leNbPlace->text();
}




void ajouterVehiculePromenadeGui::validerVehiculePromenade(){
	if(ui.leNiv->text().isEmpty()){
		QString probleme ("Le champ Niv est vide !");
		QMessageBox::information(this, "Erreur", probleme);
	}
	if(ui.leImmatriculation->text().isEmpty()){
		QString probleme ("Le champ immatriculation est vide !");
		QMessageBox::information(this, "Erreur", probleme);
	}
	if(ui.leNbPlace->text().isEmpty()){
		QString probleme ("Le champ nombre de places est vide !");
		QMessageBox::information(this, "Erreur", probleme);
	}

	accept();
}
