#include "ajouterproprietairegui.h"
#include <QtGui/QMessageBox>


ajouterProprietaireGui::ajouterProprietaireGui(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
}

ajouterProprietaireGui::~ajouterProprietaireGui()
{

}


QString ajouterProprietaireGui::reqPrenom(){
return 	ui.lePrenom->text();


}
QString ajouterProprietaireGui::reqNom(){
	return ui.leNom->text();

}

void ajouterProprietaireGui::validerProprietaire(){
	if(reqPrenom().isEmpty()){
		QString probleme ("Le champ prenom est vide !");
		QMessageBox::information(this, "Erreur", probleme);
	}
	if(reqNom().isEmpty()){
		QString probleme ("Le champ nom est vide !");
		QMessageBox::information(this, "Erreur", probleme);
	}
	accept();
}
