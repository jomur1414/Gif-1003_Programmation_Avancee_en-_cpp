/**
 * \file Vehicule.cpp
 * \brief Implantation de la classe Vehicule
 * \author Jonathan Murray
 * \version 1.0
 */

#include "Vehicule.h"
using namespace std;
#include<iostream>
#include <sstream>
#include "Date.h"
#include "ContratException.h"
#include "validationFormat.h"
using namespace util;

namespace saaq {

/**
 * \brief Constructeur avec paramètre.
 *        Création d'un objet Véhicule à partir de valeurs passées en paramètres.
 * \param[in] p_niv est un string qui représente le NIV du Véhicule
 * \param[in] p_immatriculation est un string qui l'immatriculation du Véhicule
 * \pre p_niv est non vide
 * \pre p_immatriculation est non vide
 * \post m_immatriculation prend la valeur de p_immatriculation
 * \post m_niv p rend la valeur de p_niv
 */


/**
 * \brief retourne le numéro de plaque d'immatriculation de l'objet courant
 * \return un string qui correspodant au NIV du véhicule
 */
const std::string& Vehicule::reqImmatriculation() const {
	return m_immatriculation;
}

/**
 * \brief permet de modifier le numéro de plaque d'immatrulation de l'objet courant
 */
void Vehicule::asgImmatriculation(const std::string& p_immatriculation) {

	m_immatriculation = p_immatriculation;

	PRECONDITION(util::validationImmatriculationCamion(p_immatriculation));

	PRECONDITION(util::validationImmatriculationPromenade(p_immatriculation));

	POSTCONDITION(m_immatriculation == p_immatriculation);

	INVARIANTS();

}

/**
 * \brief retourne le numéro de NIV de l'objet courant
 * \return un string qui correspodant au NIV du véhicule
 */
const std::string& Vehicule::reqNiv() const {
	return m_niv;
}

//void Vehicule::asgNiv(const std::string& p_niv) {
//	m_niv = p_niv;
//}

/**
 * \brief retourne la date d'enregistrement de l'objet courant
 * \return un string qui correspodant au NIV du véhicule
 */

const util::Date Vehicule::reqDateEnregistrement() const {
	return m_dateEnregistrement;
}

/**
 * \brief Permet de modifier la date d'enregistrement du véhicule
 */

void Vehicule::asgDateEnregistrement(util::Date dateEnregistrement) {
	m_dateEnregistrement = dateEnregistrement;
}

/**
 * \brief Le constructeur du véhicule avec paramètres d'enrtés de l'usager \n
 * 		 Construit un objet véhicule à partir de valeurs passées en paramètres.
 * \param[in] p_immatriculation est un string qui représente la plaque d'immatriculation du véhicule
 * \param[in] p_niv est un string qui représente le NIV du véhicule
 */
Vehicule::Vehicule(const std::string p_niv, const std::string p_immatriculation) :
		m_niv(p_niv), m_immatriculation(p_immatriculation) {

	PRECONDITION(util::validerNiv(p_niv))
	PRECONDITION(util::validationImmatriculationPromenade(p_immatriculation));
	PRECONDITION(util::validationImmatriculationPromenade(p_immatriculation));
	PRECONDITION(!p_niv.empty());
	PRECONDITION(!p_immatriculation.empty());

	POSTCONDITION(m_niv == p_niv);
	POSTCONDITION(m_immatriculation == p_immatriculation);

	INVARIANTS();

}

/**
 * \brief Présente dans de facon formate les informations à l'usager dans la console sous forme de string
 * \return un string avec les informations du véhicule a l'usager
 */
std::string Vehicule::reqVehiculeFormate() const {

	std::ostringstream os;
	os << m_niv << "\n" << "Numero d'immatriculation :" << m_immatriculation
			<< "\n" << "Date d'enregistrement :" << util::Date();
	return os.str();
}

/**
 * \brief Operateur de comparaison d'egalite
 * \param[in] p_vehicule qui est un véhicule valide qui n'est pas l'objet courant
 * \return un booléen indiquant si les attributs (plaque, niv et date) de deux véhicule sont identiques (true) ou non (false)
 */
bool Vehicule::operator==(const Vehicule& p_vehicule) const {
	return (m_niv == p_vehicule.m_niv
			&& m_immatriculation == p_vehicule.m_immatriculation
			&& m_dateEnregistrement == p_vehicule.m_dateEnregistrement);

}

void Vehicule::verifieInvariant() const {
	INVARIANT(util::validerNiv(reqNiv()));

}

}
