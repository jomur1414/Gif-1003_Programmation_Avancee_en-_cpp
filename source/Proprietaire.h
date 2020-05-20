/*
 * Proprietaire.h
 *
 *  Created on: 2019-11-13
 *      Author: etudiant
 */

#ifndef PROPRIETAIRE_H_
#define PROPRIETAIRE_H_
#include <string>
#include <vector>
#include "Vehicule.h"

namespace saaq {

/**
 * \class Proprietaire
 * \brief Cette classe permet de créer un objet Proprietaire avec comme parametre d'entre un nom et un prenom string \n
 */

class Proprietaire {
public:

	virtual ~Proprietaire();
	Proprietaire(const std::string& p_nom, const std::string& p_prenom);

	void ajouterVehicule(const Vehicule& p_nouveauVehicule);
	const std::string& reqNom() const;
	const std::string& reqPrenom() const;
	std::string reqProprietaireFormate() const;
	void supprimerVehicule(const std::string& p_niv);
	friend class UnProprietaire;
	Proprietaire& operator=(const Proprietaire& p_proprietaire);

private:

	std::vector<Vehicule*> m_vVehicules;
	bool VehiculeEstDejaPresent(const std::string& p_niv);
	Proprietaire(const Proprietaire& p_proprietaire);
	virtual void verifieInvariant() const;
	std::string m_nom;
	std::string m_prenom;
};

} /* namespace saaq */

#endif /* PROPRIETAIRE_H_ */
