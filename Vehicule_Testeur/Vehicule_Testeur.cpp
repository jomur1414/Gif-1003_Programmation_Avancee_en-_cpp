/*
 /*
 * \file Vehicule_Testeur.cpp
 * \test Test unitaire de la classe Vehicule
 * \author Jonathan Murray
 * \version 0.1
 * \date 2019-11-25
 */

#include<gtest/gtest.h>
#include "Vehicule.h"
#include "Date.h"
using namespace std;

using namespace saaq;
using namespace util;

class VehiculeTest: public Vehicule {
public:
	//Instancie un objet de la classe abstraite Vehicule

	VehiculeTest(const std::string p_niv, const std::string p_immatriculation) :
			Vehicule(p_niv, p_immatriculation) {
	}
	;

	virtual Vehicule* clone() const {

	}
	;

	virtual std::string reqNomFormate() const {
		return Vehicule::reqVehiculeFormate();
	}
	;

	virtual double tarificationAnnuelle() const {
		return 2206.19;
	}

	;
};



TEST(Vehicule, TestInitialisationVehicule) {

	VehiculeTest UnVehiculetest("3VWFE21C04M000001", "L032006");

	ASSERT_EQ("3VWFE21C04M000001", UnVehiculetest.reqNiv());
	ASSERT_EQ(UnVehiculetest.reqImmatriculation(), "L032006");
}

// TEST pour les cas invalides
TEST(Vehicule, ConstructeurInvalideNIV) {

	ASSERT_THROW(VehiculeTest unVehicule ("1HTMKADDD3H561298","L032006"),
			PreconditionException);
}

TEST(Vehicule, TestErreurPlaqueImmatriculation) {

	ASSERT_THROW(VehiculeTest unVehicule ("3VWFE21C04M000001","IFT006"),
			PreconditionException);
}

/* \brief Création d'une fixture à utiliser pour les méthodes public de la classe de Test
 */

/**
 // * \test Test de la méthode reqNIV()
 // *
 // *     Cas valide: vérifier le retour du NIV
 // *     Cas invalide: aucun.
 // */


class UnVehicule: public ::testing::Test {
public:
	UnVehicule() :
			t_vehicule("3VWFE21C04M000001", "L032006") {
	}
	;
	VehiculeTest t_vehicule;
};

TEST_F(UnVehicule, reqNIV) {

	ASSERT_EQ("3VWFE21C04M000001", t_vehicule.reqNiv());

}
/**
 / * \test Test de la méthode reqImmatriculation()
 / *     Cas valide: vérifier le retour du numéro d'immatriculation du Vehicule
 / *     Cas invalide: aucun.
 / */
TEST_F(UnVehicule, reqImmatriculation) {
	ASSERT_EQ("L032006", t_vehicule.reqImmatriculation());
}


TEST_F(UnVehicule, reqDateEnregistrement) {
	ASSERT_EQ("L032006", t_vehicule.reqImmatriculation());
}


TEST_F(UnVehicule, tarificationAnnuelle) {

	ASSERT_EQ(util::Date(), t_vehicule.reqDateEnregistrement());
}

TEST_F(UnVehicule, asgImmatriculation) {

	t_vehicule.asgImmatriculation("L032044");

	ASSERT_EQ("L032044", t_vehicule.reqImmatriculation());
}

TEST_F(UnVehicule, reqFormatVehicule) {

	std::ostringstream os;
		os << t_vehicule.reqNiv() << "\n"
				<< "Numero d'immatriculation :" << t_vehicule.reqImmatriculation()
				<< "\n" << "Date d'enregistrement :" << util::Date() ;


		os.str();

		ASSERT_EQ(os.str(), t_vehicule.reqVehiculeFormate());
}



/**
 * \test Test de la méthode std::string reqEmployeFormate();
 Cas valides: vérifier le retour des information sur l'objets Employe formaté
 *        Cas invalides: aucun
 *        */

//////TEST_F(UnVehicule, reqVehiculeFormate){
////
//////	ASSERT_EQ("Jean Soucy", Vehicule.reqVehiculeFormate());
//////}
/** @} Fin defgroup*/

