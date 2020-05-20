/*
 /*
 * \file VehiculePromenade_Testeur.cpp
 * \test Test unitaire de la classe VehiculePromenade
 * \author Jonathan Murray
 * \version 0.1
 * \date 2019-11-25
 */

#include<gtest/gtest.h>
#include "VehiculePromenade.h"

using namespace saaq;

/*
 *
 * \brief Test du constructeur
 * Condition valide : objet  VehiculePromenade initialiser et 'assignation des attributs de VehiculePromenade sont valides
 * Condition invalide : attributs vide
 */

TEST(VehiculePromenade, TestInitialisationVehiculePromenade) {

	VehiculePromenade unVehiculePromenade("3VWFE21C04M000001", "IFT 006", 6);

	ASSERT_EQ(6, unVehiculePromenade.reqNbPlaces());
	ASSERT_EQ("3VWFE21C04M000001", unVehiculePromenade.reqNiv());
	ASSERT_EQ("IFT 006", unVehiculePromenade.reqImmatriculation());
}

// TEST pour les cas invalides
TEST(VehiculePromenade,ConstructeurInvalideNIV) {
	ASSERT_THROW(
			VehiculePromenade unVehiculePromenade ("3VWFE2DDDD4M000001","IFT 006", 6),
			PreconditionException);
}

TEST(VehiculePromenade, TestErreurPlaqueImmatriculation) {

	ASSERT_THROW(
			VehiculePromenade unVehiculePromenade ("3VWFE21C04M000001","IFTFF006", 6),
			PreconditionException);
}

TEST(VehiculePromenade, TestNBPlacesMinimum) {

	ASSERT_THROW(
			VehiculePromenade unVehiculePromenade ("3VWFE21C04M000001","IFT 006", -2),
			PreconditionException);
}

TEST(VehiculePromenade, VehiculePromenadeReqVehiculeFormate) {
	VehiculePromenade unVehiculePromenade("3VWFE21C04M000001", "IFT 006", 6);

	std::ostringstream os;
	os << "Numero de serie : " << unVehiculePromenade.reqNiv() << "\n"
			<< "Numero d'immatriculation :"
			<< unVehiculePromenade.reqImmatriculation() << "\n"
			<< "Date d'enregistrement :" << util::Date() << "\n"
			<< "nombre de place : " << unVehiculePromenade.reqNbPlaces() << "\n"
			<< "tarif : " << unVehiculePromenade.tarificationAnnuelle() << "$";
	os.str();

	ASSERT_EQ(os.str(), unVehiculePromenade.reqVehiculeFormate());
}

TEST(VehiculePromenade, AsgImmatriculation) {

	VehiculePromenade unVehiculePromenade("3VWFE21C04M000001", "IFT 006", 6);

	unVehiculePromenade.asgImmatriculation("HHH 000");

	ASSERT_EQ("HHH 000", unVehiculePromenade.reqImmatriculation());

}

//TEST(VehiculePromenade, AsgImmatriculationErreur) {
//
//	VehiculePromenade unVehiculePromenade("3VWFE21C04M000001", "IFT 006", 6);
//
//	unVehiculePromenade.asgImmatriculation("LOL");
//
//	ASSERT_THROW(
//	VehiculePromenade unVehiculePromenade ("3VWFE21C04M000001", unVehiculePromenade.asgImmatriculation("LOL"), 6),
//		PreconditionException);
//
//}

/**
 * \brief Création d'une fixture à utiliser pour les méthodes public de la classe de Test
 */
class UnVehiculePromenade: public ::testing::Test {
public:
	UnVehiculePromenade() :
			t_vehiculePromenade("3VWFE21C04M000001", "IFT 006", 6) {
	}
	;
	VehiculePromenade t_vehiculePromenade;
};

/**
 * \test Test de la méthode reqNIV()
 *
 *     Cas valide: vérifier le retour du NIV
 *     Cas invalide: aucun.
 */
TEST_F(UnVehiculePromenade, reqNIV) {
	ASSERT_EQ("3VWFE21C04M000001", t_vehiculePromenade.reqNiv());
}
/**
 * \test Test de la méthode reqImmatriculation()
 *
 *     Cas valide: vérifier le retour du numéro d'immatriculation du VehiculePromenade
 *     Cas invalide: aucun.
 */
TEST_F(UnVehiculePromenade, reqImmatriculation) {
	ASSERT_EQ("IFT 006", t_vehiculePromenade.reqImmatriculation());
}
/**
 * \test Test de la méthode reqNbPlaces()
 *
 *     Cas valide: vérifier le retour du poids du VehiculePromenade
 *     Cas invalide: aucun.
 */
TEST_F(UnVehiculePromenade, reqNbPlaces) {
	ASSERT_EQ(6, t_vehiculePromenade.reqNbPlaces());
}

/**
 * \test Test de la méthode tarificationAnnuelle()
 *
 *     Cas valide: vérifier la tarificaition annuelle en fonction des paramètres du VehiculePromenade
 *     Cas invalide: aucun.
 */
TEST_F(UnVehiculePromenade, tarificationAnnuelle) {

	ASSERT_EQ(224.04, t_vehiculePromenade.tarificationAnnuelle());
}

TEST_F(UnVehiculePromenade, TestduClone) {

	VehiculePromenade* clone = (VehiculePromenade*) t_vehiculePromenade.clone();

	ASSERT_EQ(t_vehiculePromenade.reqNiv(), clone->reqNiv());
	ASSERT_EQ(t_vehiculePromenade.reqImmatriculation(),
			clone->reqImmatriculation());
	ASSERT_EQ(t_vehiculePromenade.reqNbPlaces(), clone->reqNbPlaces());

}

/**
 * \test Test de la méthode std::string reqEmployeFormate();
 *
 *        Cas valides: vérifier le retour des information sur l'objets Employe formaté
 *        Cas invalides: aucun
 */

//#TODO A COMPLETER QUAND ERREUR SUR NIV SERA REGLER
//TEST_F(UnVehiculePromenade, reqVehiculeFormate){
//	ASSERT_EQ("Jean Soucy", VehiculePromenade.reqVehiculeFormate());
//}
/** @} Fin defgroup*/

