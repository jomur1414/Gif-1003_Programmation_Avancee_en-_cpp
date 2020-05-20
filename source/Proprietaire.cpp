/*
 * \file Proprietaire.cpp
 * \brief Implémentation de la classe Proprietaire
 * \author Jonathan Murray
 * \version 0.1
 * \date 2019-11-25
 */

#include "Proprietaire.h"
using namespace std;
#include<iostream>
#include <sstream>
#include "ContratException.h"
#include "Vehicule.h"
#include "Camion.h"
#include "VehiculeException.h"
#include <vector>

using namespace saaq;

namespace saaq {

/**
 * \brief Constructeur avec paramètre.
 *  Création d'un objet Proprietaire à partir de valeurs passées en paramètres.
 * \param[in] p_nom est un string qui represente le nom
 * \param[in] p_prenom est un string qui represente le prenom
 * \pre p_nom est non vide
 * \pre p_prenomn est non vide
 * \post m_immatriculation prend la valeur de p_immatriculation
 * \post m_niv p rend la valeur de p_niv
 */

Proprietaire::Proprietaire(const std::string& p_nom,
		const std::string& p_prenom) :
		m_nom(p_nom), m_prenom(p_prenom) {

	PRECONDITION(!p_prenom.empty());
	PRECONDITION(!p_nom.empty());

	POSTCONDITION(reqNom() == p_nom);
	POSTCONDITION(reqPrenom() == p_prenom);

	INVARIANTS();

}

Proprietaire::~Proprietaire() {
	for (std::vector<Vehicule *>::iterator it = m_vVehicules.begin();
			it != m_vVehicules.end(); it++) {
		delete (*it);
	}
}

/**
 * @brief Constructeur copie qui creer une copie de l'objet proprietaire pour liberer de la memoire
 * Permet de faire des deep copy
 * @param[in] p_prorprietaire qui est l'objet de construction
 */

Proprietaire::Proprietaire(const Proprietaire& p_proprietaire) :
		m_nom(p_proprietaire.reqNom()), m_prenom(p_proprietaire.reqPrenom()) {
	for (size_t i = 0; i < p_proprietaire.m_vVehicules.size(); i++) {
		ajouterVehicule(*p_proprietaire.m_vVehicules[i]);
	}

	INVARIANTS();
}

/**
 * @brief operator=. Permet la surcharge de l'operateur =
 * La methode fait d'abord une copie des objet en memoire puis libere de l'espace memorie prise par l'objet courant
 * pour obtenir son adresse.
 * Ensuite, la methode alloue et copie les paramètres de la novuelle ressource
 * @param[in] p_prorprietaire qui est l'objet de construction
 */

Proprietaire& Proprietaire::operator=(const Proprietaire& p_proprietaire) {

	std::vector<Vehicule*> nouvVecteur = std::vector<Vehicule*>(
			p_proprietaire.m_vVehicules);
	for (size_t i = 0; i < p_proprietaire.m_vVehicules.size(); i++) {
		delete p_proprietaire.m_vVehicules[i];
	}
	m_vVehicules = nouvVecteur;
	m_prenom = p_proprietaire.reqPrenom();
	m_nom = p_proprietaire.reqNom();
	return *this;

	INVARIANTS();
}

/**
 * \brief Accesseur nom du proprietaire
 * \return le nom de proprietaire
 */

const std::string& Proprietaire::reqNom() const {

	return m_nom;
}
/**
 * \brief Accesseur prenom du proprietaire
 * \return le prenom de proprietaire
 */
const std::string& Proprietaire::reqPrenom() const {
	return m_prenom;
}

/**
 * \brief Methode qui permet d'ajouter dans un vecteur les nouveaux vehicules du proprietaire
 * La méthode fait appel à la fonction VehiculeEstDejaPresent avant d'ajouter un nouveau véhicule.
 * Une exception de type VehiculeDejaPresentException est lancée si on tente d'ajouter un véhicule déja présent.
 */

void Proprietaire::ajouterVehicule(const Vehicule& p_nouveauVehicule) {
	if (VehiculeEstDejaPresent(p_nouveauVehicule.reqNiv())) {
		throw VehiculeDejaPresentException(
				p_nouveauVehicule.reqVehiculeFormate());
	}
	m_vVehicules.push_back(p_nouveauVehicule.clone());
}

/**
 * @brief Méthode qui retire des véhicules du propriétaire le véhicule dont le niv est passé en paramètre.
 * Une exception de type VehiculeAbsentException est lancée si on tente de retirer un véhicule qui n'est pas
 * dans le vecteur.
 * @param[in] p_niv, une string correspondant au NIV du véhicule à retirer.
 *
 */

void Proprietaire::supprimerVehicule(const string& p_niv) {
	if (!VehiculeEstDejaPresent(p_niv)) {
		throw VehiculeAbsentException("Le vehicule n'existe pas");
	}
	for (std::vector<Vehicule*>::iterator it = m_vVehicules.begin();
			it != m_vVehicules.end(); it++) {
		if ((*it)->reqNiv() == p_niv) {
			delete *it;
			m_vVehicules.erase(it--);
		}
	}
}

/**
 * @brief méthode qui parcourt les véhicules du propriétaire pour savoir si le véhicule passé en paramètre
 * y est déjà
 * @return un booléen, true is le véhicule est déjà dans le vecteur, false sinon.
 */

bool Proprietaire::VehiculeEstDejaPresent(const string& p_niv) {
	bool vehiculePresent = false;
	for (std::vector<Vehicule*>::const_iterator it = m_vVehicules.begin();
			it != m_vVehicules.end(); it++) {
		if ((*it)->reqNiv() == p_niv) {
			vehiculePresent = true;
		}
	}
	return vehiculePresent;
}

/**
 * \brief Affichage les informations du propriétaire.
 * \return pour chaque Vehicule le niv, la plaque, la date de creation et si applicable, le nombre d'essieux, le poids, la tarification et le nombre de place
 */

std::string Proprietaire::reqProprietaireFormate() const {

	std::ostringstream os;

	os << "Proprietaire " << endl;
	os << "--------------------------" << "\n";
	os << "Nom : " << reqNom() << endl;
	os << "Prenom : " << reqPrenom() << endl;
	for (size_t i = 0; i < m_vVehicules.size(); i++) {
		os << "---------------------" << endl;
		os << m_vVehicules[i]->reqVehiculeFormate();
		os << endl;
	}

	return os.str();
}

/**
 * \brief Vérifier les invariants de classe
 */

void Proprietaire::verifieInvariant() const {
	INVARIANT(!m_nom.empty());
	INVARIANT(!m_prenom.empty());
}

}
