#include "ajoutercamiongui.h"

#include <QtGui/QMessageBox>

ajouterCamionGui::ajouterCamionGui(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
}

ajouterCamionGui::~ajouterCamionGui()
{

}

QString ajouterCamionGui::reqNiv() {
return 	ui.leNiv->text();
}

QString ajouterCamionGui::reqImmatriculation(){
return 	ui.leImmatriculation->text();
}

QString ajouterCamionGui::reqPoids(){
return 	ui.lePoids->text();
}

QString ajouterCamionGui::reqNbEssieux(){
return 	ui.leNbEssieux->text();
}

void ajouterCamionGui::validerCamion(){
	if(ui.leNiv->text().isEmpty()){
		QString probleme ("Le champ Niv est vide !");
		QMessageBox::information(this, "Erreur", probleme);
	}
	if(ui.leImmatriculation->text().isEmpty()){
		QString probleme ("Le champ immatriculation est vide !");
		QMessageBox::information(this, "Erreur", probleme);
	}
	if(ui.lePoids->text().isEmpty()){
		QString probleme ("Le champ Poids est vide !");
		QMessageBox::information(this, "Erreur", probleme);
	}
	if(ui.leNbEssieux->text().isEmpty()){
		QString probleme ("Le champ NbEssieux est vide !");
		QMessageBox::information(this, "erreur", probleme);
	}
	accept();
}
