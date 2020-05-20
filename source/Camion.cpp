/**
 * \file Camion.cpp
 * \brief Implémentation de la classe Camion
 * \author Jonathan Murray
 * \version 0.1
 * \date 2019-11-25
 */

#include "Camion.h"
#include <sstream>
#include "validationFormat.h"
using namespace std;
using namespace util;

namespace saaq {



Camion::~Camion() {
	// TODO Auto-generated destructor stub
}

/**
 * \brief Constructeur avec paramètre.
 *        Création d'un objet Camion à partir de valeurs passées en paramètres.
 * \param[in] p_niv est un string qui représente le NIV du camion
 * \param[in] p_immatriculation est un string qui l'immatriculation du camion
 * \param[in] p_poids est un int qui represente le poids du camion
 * \param[in] p_nbEssieux est un int qui représente le nombre d'essieux
 * \pre p_niv est non vide
 * \pre p_immatriculation est non vide
 * \pre p_nbESsieux >= 2
 * \pre p_poids > 3000
 *
 * \post m_immatriculation prend la valeur de p_immatriculation
 * \post m_niv p rend la valeur de p_niv
 * \post m_nbEssieux qui prend la valeur de p_nbEssieux
 * \post m_poids qui prend la valeur de p_Poids
 */

Camion::Camion(const std::string p_niv, const std::string p_immatriculation,
		const int p_poids, const int p_nbEssieux) :
		saaq::Vehicule(p_niv, p_immatriculation), m_poids(p_poids), m_nbEssieux(
				p_nbEssieux) {

	PRECONDITION(!p_niv.empty());
	PRECONDITION(!p_immatriculation.empty());
	PRECONDITION(
			validationImmatriculationCamion(
					saaq::Vehicule::reqImmatriculation()));
	PRECONDITION(Camion::reqNbEssieux() >= 2);
	PRECONDITION(reqPoids() > 3000);

	POSTCONDITION(reqImmatriculation() == p_immatriculation);
	POSTCONDITION(reqNiv() == p_niv);
	POSTCONDITION(reqNbEssieux() == p_nbEssieux);
	POSTCONDITION(reqPoids() == p_poids);

	INVARIANTS();

}

/**
 * \brief Permet de modifier la plaque d'immatriculation du camion
 */

void Camion::asgImmatriculation(const std::string& p_immatriculation) {
	m_immatriculation = p_immatriculation;

	PRECONDITION(util::validationImmatriculationCamion(p_immatriculation));

	POSTCONDITION(m_immatriculation == p_immatriculation);

	INVARIANTS();

}

Vehicule* Camion::clone() const {

	return new Camion(*this);
}

/**
 * \brief Donne la tarificationAnnuelle du camion en fonction des paramètres
 * \return le coût pour la tarificationAnnuelle
 */

double Camion::tarificationAnnuelle() const {

	double tarif;

	if (3001 < m_poids && m_poids < 4000) {
		tarif = 570.28;
	} else if (m_poids > 4001 && m_nbEssieux == 2) {
		tarif = 905.28;
	} else if (m_poids > 4001 && m_nbEssieux == 3) {
		tarif = 1566.19;
	} else if (m_poids > 4001 && m_nbEssieux == 4) {
		tarif = 2206.19;
	} else if (m_poids > 4001 && m_nbEssieux == 5) {
		tarif = 2821.76;
	} else if (m_poids > 4001 && m_nbEssieux >= 6) {
		tarif = 3729.76;
	}
	return tarif;
}

/**
 * \brief Affichage les informations du camion
 * \return le niv, la plaque, le poids et le nombre d'essieux
 */

std::string Camion::reqVehiculeFormate() const {
	std::ostringstream os;
	os << "Numero de serie : " << saaq::Vehicule::reqVehiculeFormate() << "\n"
			<< "nombre d'essieux: " << m_nbEssieux << "\n" << "poids : "
			<< m_poids << "kg" << "\n" << "tarif : " << tarificationAnnuelle()
			<< "$";

	return os.str();
}

/**
 * \brief Accesseur de nombre d'essieux du camion
 * \return le nombre d'essieux
 */

int Camion::reqNbEssieux() const {
	return m_nbEssieux;
}

/**
 * \brief Accesseur du poids du camion
 * \return le poids du camion
 */

int Camion::reqPoids() const {
	return m_poids;
}
/**
 * \brief Vérifier les invariants de classe
 */
void Camion::verifieInvariant() const {
	INVARIANT(util::validationImmatriculationCamion(this->reqImmatriculation()));
	INVARIANT(m_poids > 3000);
	INVARIANT(m_nbEssieux >= 2);

}

} /* namespace saaq */
