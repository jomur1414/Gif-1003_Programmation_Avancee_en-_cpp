#ifndef PROPRIETAIREGUI_H
#define PROPRIETAIREGUI_H

#include <QtGui/QMainWindow>
#include "ui_proprietairegui.h"
#include "Proprietaire.h"
#include <vector>
#include "Camion.h"

using namespace saaq;

class ProprietaireGui : public QMainWindow
{
    Q_OBJECT

public:
    ProprietaireGui(QWidget *parent = 0);
    ~ProprietaireGui();

    //valider s'il faut mettre les valeurs numériques a 0


//    void AjouterCamion(const std::string p_niv, const std::string p_immatriculation,
//			const int p_poids, const int p_nbEssieux);
//   void ajouterVehiculePromenade(const std::string p_niv,
  //  		const std::string p_immatriculation, const int p_nbPlaces);

    void ajouterProprietaire(const std::string& p_nom,
   		const std::string& p_prenom);
     void ajouterCamion(const std::string p_niv, const std::string p_immatriculation,
     		const int p_poids, const int p_nbEssieux);
     void ajouterVehiculePromenade(const std::string p_niv,
		const std::string p_immatriculation, const int p_nbPlaces);

 	void supprimerVehicule(const std::string& p_niv);

private slots :
//		void dialogAjouterProprietaire();
		void dialogAjouterCamion();
		void dialogAjouterVehiculePromenade();
		void dialogSupprimerVehicule();
    void afficherListeVehicule();

private:
    Ui::ProprietaireGuiClass ui;
    QStringList strings;
    bool VehiculeEstDejaPresent (const std::string& p_niv);
    Proprietaire m_proprietaire;
};




#endif // PROPRIETAIREGUI_H