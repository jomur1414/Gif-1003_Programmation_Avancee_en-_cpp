/*
 * VehiculePromenade.h
 *
 *  Created on: 2019-11-09
 *      Author: etudiant
 */

#ifndef VEHICULEPROMENADE_H_
#define VEHICULEPROMENADE_H_
#include "Vehicule.h"

#include "Proprietaire.h"
#include "ContratException.h"

namespace saaq {

/**
 * \class VehiculePromenade
 *\brief Cette classe permet de créer un objet VéhiculePromenade en héritant de Véhicule et de modifier le plaque d'immatriculation \n
 * 		  Elle peut également servir à modifier une plaque d'immatriculation d'un véhicule de promenade créer préalablement
 */


class VehiculePromenade : public saaq::Vehicule {
public:

	virtual ~VehiculePromenade();

	VehiculePromenade(const std::string p_niv, const std::string p_immatriculation, const int p_nbPlaces);

	void asgImmatriculation(const std::string& p_immatriculation);

	virtual double tarificationAnnuelle() const;
	int reqNbPlaces() const;

	std::string reqVehiculeFormate() const;

	virtual Vehicule* clone() const;

private :
	int m_nbPlaces;
	void verifieInvariant() const;


};
}

#endif /* VEHICULEPROMENADE_H_ */
