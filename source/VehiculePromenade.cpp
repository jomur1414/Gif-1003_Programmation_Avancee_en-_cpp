/**
 * \file VehiculePromenade.cpp
 * \brief Implémentation de la classe VehiculePromenade
 * \author Jonathan Murray
 * \version 0.1
 * \date 2019-11-25
 */
#include "VehiculePromenade.h"
#include "Vehicule.h"
#include <gtest/gtest.h>
#include <sstream>
#include "validationFormat.h"
using namespace util;

namespace saaq {



/**
 * \brief Constructeur avec paramètre.
 *        Création d'un objet VehiculePromenade à partir de valeurs passées en paramètres.
 * \param[in] p_niv est un string qui représente le NIV du VehiculePromenade
 * \param[in] p_immatriculation est un string qui l'immatriculation du VehiculePromenade
 * \param[in] p_nbPlaces est un int qui represente le nombre de places du VehiculePromenade
 * \pre p_niv est non vide
 * \pre p_immatriculation est non vide
 * \pre p_nbPlaces > 0
 * \post m_immatriculation prend la valeur de p_immatriculation
 * \post m_niv p rend la valeur de p_niv
 * \post m_nbPlaces qui prend la valeur de p_nbPlaces
 */

VehiculePromenade::VehiculePromenade(const std::string p_niv,
		const std::string p_immatriculation, const int p_nbPlaces) :
		saaq::Vehicule(p_niv, p_immatriculation), m_nbPlaces(p_nbPlaces) {

	PRECONDITION(!p_niv.empty());
	PRECONDITION(!p_immatriculation.empty());
	PRECONDITION(
			util::validationImmatriculationPromenade(
					saaq::Vehicule::reqImmatriculation()));
	PRECONDITION(reqNbPlaces() > 0);

	POSTCONDITION(reqImmatriculation() == p_immatriculation);
	POSTCONDITION(reqNiv() == p_niv);
	POSTCONDITION(reqNbPlaces() == p_nbPlaces);

	INVARIANTS();
}

Vehicule* VehiculePromenade::clone() const {

	return new VehiculePromenade(*this);
}

VehiculePromenade::~VehiculePromenade() {
	// TODO Auto-generated destructor stub
}

/**
 * \brief Donne la tarificationAnnuelle du VehiculePromenade
 * \return le coût pour la tarificationAnnuelle
 */

double VehiculePromenade::tarificationAnnuelle() const {
	double tarif = 224.04;
	return tarif;
}

/**
 * \brief Accesseur du poids du vehiculePormenade
 * \return le  nombre de place
 */

int VehiculePromenade::reqNbPlaces() const {
	return m_nbPlaces;

}
/**
 * \brief Permet de modifier la plaque d'immatriculation du VehiculePromenade
 */

void VehiculePromenade::asgImmatriculation(
		const std::string& p_immatriculation)
{
	m_immatriculation = p_immatriculation;

	PRECONDITION(util::validationImmatriculationPromenade(p_immatriculation));

	POSTCONDITION(m_immatriculation == p_immatriculation);

	INVARIANTS();

}

/**
 * \brief Affichage les informations du vehicule Promenade
 * \return le niv, la plaque et le nombre de place
 */

std::string VehiculePromenade::reqVehiculeFormate() const {

	std::ostringstream os;
	os << "Numero de serie : " << saaq::Vehicule::reqVehiculeFormate() << "\n"
			<< "nombre de place : " << m_nbPlaces << "\n" << "tarif : "
			<< tarificationAnnuelle() << "$";

	return os.str();
}

/**
 * \brief Vérifier les invariants de classe
 */

void VehiculePromenade::verifieInvariant() const {
	INVARIANT(
			util::validationImmatriculationPromenade(
					this->reqImmatriculation()));
	INVARIANT(m_nbPlaces >= 0);

}
}
