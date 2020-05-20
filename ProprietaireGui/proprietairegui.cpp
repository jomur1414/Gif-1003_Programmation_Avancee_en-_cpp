#include "proprietairegui.h"
#include <vector>
#include "Proprietaire.h"
#include "ajouterproprietairegui.h"
#include "ajoutervehiculepromenadegui.h"
#include "ajoutercamiongui.h"
#include "Camion.h"
#include "VehiculePromenade.h"
#include "Vehicule.h"
#include <string>
#include <iostream>
#include <QTextStream>
#include <QTableWidgetItem>
#include <QLabel>
#include <QtGui/QMessageBox>
#include <QTextEdit>
#include "VehiculeException.h"
#include "supprimervehiculegui.h"

using namespace saaq;

ProprietaireGui::ProprietaireGui(QWidget *parent) :
		QMainWindow(parent), m_proprietaire("Chretien", "Jean") {
	ui.setupUi(this);
	ui.plainTextEditAfficherNom->setPlainText("Chretien");
	ui.plainTextEditAfficherNom->setHidden(true);
	ui.plainTextEditAfficherPrenom->setPlainText("Jean");
	ui.plainTextEditAfficherPrenom->setHidden(true);
}

ProprietaireGui::~ProprietaireGui() {
}

//void ProprietaireGui::ajouterProprietaire(const std::string& p_nom,
//		const std::string& p_prenom){
//	Proprietaire monNouveauProprietaire(p_nom, p_prenom);
//	std::cout<<monNouveauProprietaire.reqNom()<<std::endl;
//	std::cout<<monNouveauProprietaire.reqPrenom()<<std::endl;
//
//}

//void ProprietaireGui::dialogAjouterProprietaire(){
//	ajouterProprietaireGui saisieProprietaire(this);
//	if (saisieProprietaire.exec()){
//		ajouterProprietaire(saisieProprietaire.reqNom().toStdString(),
//			saisieProprietaire.reqPrenom().toStdString());
//		ui.textEditAfficherNom->setText(saisieProprietaire.reqNom());
//		ui.textEditAfficherPrenom->setText(saisieProprietaire.reqPrenom());
//	}
//}

void ProprietaireGui::ajouterCamion(const std::string p_niv,
		const std::string p_immatriculation, const int p_poids,
		const int p_nbEssieux) {
	try {
		Camion monNouveauCamion(p_niv, p_immatriculation, p_poids, p_nbEssieux);
		m_proprietaire.ajouterVehicule(monNouveauCamion);
		ui.actionSupprimerVehicule->setEnabled(true);
	} catch (VehiculeDejaPresentException& e) {
		QString message = (e.what());
		QMessageBox::information(this, "ERREUR", message);
	}
	afficherListeVehicule();
}

void ProprietaireGui::dialogAjouterCamion() {
	ajouterCamionGui saisieCamion(this);
	if (saisieCamion.exec()) {
		ProprietaireGui::ajouterCamion(saisieCamion.reqNiv().toStdString(),
				saisieCamion.reqImmatriculation().toStdString(),
				saisieCamion.reqPoids().toInt(),
				saisieCamion.reqNbEssieux().toInt());
	}
}

void ProprietaireGui::dialogSupprimerVehicule() {
	SupprimerVehiculeGui suppressionVehicule(this);
	if (suppressionVehicule.exec()) {
		supprimerVehicule(suppressionVehicule.reqNiv().toStdString());
	}
	afficherListeVehicule();
}

void ProprietaireGui::ajouterVehiculePromenade(const std::string p_niv,
		const std::string p_immatriculation, const int p_nbPlaces) {
	try {
		VehiculePromenade vehiculeProm(p_niv, p_immatriculation, p_nbPlaces);
		m_proprietaire.ajouterVehicule(vehiculeProm);
		afficherListeVehicule();
	} catch (VehiculeDejaPresentException& e) {
		QString message = (e.what());
		QMessageBox::information(this, "ERREUR", message);
	}
}

void ProprietaireGui::dialogAjouterVehiculePromenade() {
	ajouterVehiculePromenadeGui saisieVehiculePromenade(this);
	if (saisieVehiculePromenade.exec()) {
		ProprietaireGui::ajouterVehiculePromenade(
				saisieVehiculePromenade.reqNiv().toStdString(),
				saisieVehiculePromenade.reqImmatriculation().toStdString(),
				saisieVehiculePromenade.reqNbPlace().toInt());
	}
}

//void ProprietaireGui::afficherListeVehicule(){
//	std::vector<Vehicule*>::iterator it;
//	for(it = m_vVehicules.begin(); it < m_vVehicules.end(); it++){
//	//for(size_t i = 0; i < Proprietaire::m_vVehicules.size(); i++){
//	//	flux << m_vVehicules[i]->reqEmployeFormate().c_str();
//	//		//if((*it)->reqNomFamille() == (*tNom).text().toStdString() && (*it)->reqPrenom() == (*tPrenom).text().toStdString()){
//				ui.textBrowser->setText((*it)->reqVehiculeFormate().c_str());
//			//	ui.textBrowser->setText("\n");
//			}
//		}

//  bool ProprietaireGui::VehiculeEstDejaPresent (const std::string& p_niv){
//	bool VehiculeEstPresent = false;
//	std::vector<Vehicule *>::const_iterator it;
//	for(it = m_vVehicules.begin(); it < m_vVehicules.end(); it++){
//		if ((*it)->reqNiv() == p_niv)
//			VehiculeEstPresent = true;
//	}
//	return VehiculeEstPresent;
//}

void ProprietaireGui::supprimerVehicule(const std::string& p_niv) {

	try {
		m_proprietaire.supprimerVehicule(p_niv);
	} catch (VehiculeAbsentException& e) {
		QString message = (e.what());
		QMessageBox::information(this, "ERREUR", message);
	}

}

void ProprietaireGui::afficherListeVehicule() {
	ui.textEdit->setText(
			QString::fromStdString(m_proprietaire.reqProprietaireFormate()));
}

