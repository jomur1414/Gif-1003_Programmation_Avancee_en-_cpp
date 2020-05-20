/**
 * \file Camion.h
 * \brief Classe Camion
 * \author Jonathan Murray
 * \version 0.1
 * \date 2019-11-25
 */

#ifndef CAMION_H_
#define CAMION_H_
#include "Vehicule.h"

namespace saaq {

/**
 * \class Camion
 * \brief Cette classe permet de créer un objet Camion en héritant de Véhicule et de modifier le plaque d'immatriculation \n
 * 		  Elle peut également servir à modifier une plaque d'immatriculation d'un Camion créer préalablement
 */

class Camion: public saaq::Vehicule {

public:

	virtual ~Camion();

	Camion(const std::string p_niv, const std::string p_immatriculation,
			const int p_poids, const int p_nbEssieux);

	void asgImmatriculation(const std::string& p_immatriculation);

	virtual double tarificationAnnuelle() const;
	std::string reqVehiculeFormate() const;

	int reqNbEssieux() const;
	int reqPoids() const;

	virtual Vehicule* clone() const;

private:

	int m_poids;
	int m_nbEssieux;
	void verifieInvariant() const;

};

} /* namespace saaq */

#endif /* CAMION_H_ */
