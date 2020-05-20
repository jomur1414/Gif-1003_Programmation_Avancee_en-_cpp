/*
 * \file CamionTesteur.cpp
 * \test Test unitaire de la classe Camion
 * \author Jonathan Murray
 * \version 0.1
 * \date 2019-11-25
 */

#include<gtest/gtest.h>
#include "Camion.h"
#include <iostream>
#include <sstream>
#include "Vehicule.h"

using namespace std;

using namespace saaq;

/*
 *
 * \brief Test du constructeur
 * Condition valide : objet  Camion initialiser et l'assignation des attributs de camion sont valides
 * Condition invalide : attributs vide
 */

TEST(Camion, TestInitialisationCamion) {

	Camion unCamion("1HTMKADN43H561298", "L032006", 4250, 4);

	ASSERT_EQ(4250, unCamion.reqPoids());
	ASSERT_EQ(4, unCamion.reqNbEssieux());
	ASSERT_EQ("1HTMKADN43H561298", unCamion.reqNiv());
	ASSERT_EQ("L032006", unCamion.reqImmatriculation());
}

// TEST pour les cas invalides
TEST(Camion,ConstructeurInvalideNIV) {
	ASSERT_THROW(Camion unCamion ("1HTMKADDD3H561298","L032006", 4250, 4),
			PreconditionException);
}

TEST(Camion, TestErreurPlaqueImmatriculation) {

	ASSERT_THROW(Camion unCamion ("1HTMKADN43H561298","H032006", 4250, 4),
			PreconditionException);
}

TEST(Camion, TestPoidMinimumCamionNonValide) {

	ASSERT_THROW(Camion unCamion ("1HTMKADN43H561298","L032006", 250, 4),
			PreconditionException);
}

TEST(Camion, TestNbEssieuxMinimumNonValide) {

	ASSERT_THROW(Camion unCamion ("1HTMKADN43H561298","L032006", 4250, 1),
			PreconditionException);
}

TEST(Camion, CamionReqVehiculeFormate) {
	Camion unCamion("1HTMKADN43H561298", "L032006", 4250, 4);

	std::ostringstream os;
	os << "Numero de serie : " << unCamion.reqNiv() << "\n"
			<< "Numero d'immatriculation :" << unCamion.reqImmatriculation()
			<< "\n" << "Date d'enregistrement :" << util::Date() << "\n"
			<< "nombre d'essieux: " << unCamion.reqNbEssieux() << "\n"
			<< "poids : " << unCamion.reqPoids() << "kg" << "\n" << "tarif : "
			<< unCamion.tarificationAnnuelle() << "$";

	os.str();

	ASSERT_EQ(os.str(), unCamion.reqVehiculeFormate());
}

TEST(Camion, AsgImmatriculation) {

	Camion unCamion("1HTMKADN43H561298", "L032006", 4250, 4);

	unCamion.asgImmatriculation("L000111");

	ASSERT_EQ("L000111", unCamion.reqImmatriculation());

}



/**
 * \brief Création d'une fixture à utiliser pour les méthodes public de la classe de Test
 */
class UnCamion: public ::testing::Test {
public:
	UnCamion() :
			t_camion("1HTMKADN43H561298", "L032006", 4250, 4) {
	}
	;
	Camion t_camion;
};

/**
 * \test Test de la méthode reqNIV()
 *
 *     Cas valide: vérifier le retour du NIV
 *     Cas invalide: aucun.
 */
TEST_F(UnCamion, reqNIV) {
	ASSERT_EQ("1HTMKADN43H561298", t_camion.reqNiv());
}
/**
 * \test Test de la méthode reqImmatriculation()
 *
 *     Cas valide: vérifier le retour du numéro d'immatriculation du camion
 *     Cas invalide: aucun.
 */
TEST_F(UnCamion, reqImmatriculation) {
	ASSERT_EQ("L032006", t_camion.reqImmatriculation());
}
/**
 * \test Test de la méthode reqPoids()
 *
 *     Cas valide: vérifier le retour du poids du camion
 *     Cas invalide: aucun.
 */
TEST_F(UnCamion, reqPoids) {
	ASSERT_EQ(4250, t_camion.reqPoids());
}
/**
 * \test Test de la méthode reqNbEssieux
 *
 *     Cas valide: vérifier le retour du nombre d'essieux du camion
 *     Cas invalide: aucun.
 */
TEST_F(UnCamion, reqNbEssieux) {
	ASSERT_EQ(4, t_camion.reqNbEssieux());
}
/**
 * \test Test de la méthode tarificationAnnuelle()
 *
 *     Cas valide: vérifier la tarificaition annuelle en fonction des paramètres du camion
 *     Cas invalide: aucun.
 */
TEST_F(UnCamion, tarificationAnnuelle) {

	ASSERT_EQ(2206.19, t_camion.tarificationAnnuelle());
}

TEST_F(UnCamion, tarificationAnnuellePoids3000_4000) {

	Camion t_camion2("1HTMKADN43H561298", "L032006", 3500, 4);


	ASSERT_EQ(570.28, t_camion2.tarificationAnnuelle());
}

TEST_F(UnCamion, tarificationAnnuellePoids4000etPlusNbEssieuxEst2) {

	Camion t_camion3("1HTMKADN43H561298", "L032006", 4200, 2);


	ASSERT_EQ(905.28, t_camion3.tarificationAnnuelle());
}

TEST_F(UnCamion, tarificationAnnuellePoids4000etPlusNbEssieuxEst3) {

	Camion t_camion4("1HTMKADN43H561298", "L032006", 4200, 3);


	ASSERT_EQ(1566.19, t_camion4.tarificationAnnuelle());
}

TEST_F(UnCamion, tarificationAnnuellePoids4000etPlusNbEssieuxEst4) {

	Camion t_camion4("1HTMKADN43H561298", "L032006", 4200, 4);


	ASSERT_EQ(2206.19, t_camion4.tarificationAnnuelle());
}


TEST_F(UnCamion, tarificationAnnuellePoids4000etPlusNbEssieuxEst5) {

	Camion t_camion5("1HTMKADN43H561298", "L032006", 4200, 5);


	ASSERT_EQ(2821.76, t_camion5.tarificationAnnuelle());
}

TEST_F(UnCamion, tarificationAnnuellePoids4000etPlusNbEssieuxEst6) {

	Camion t_camion6("1HTMKADN43H561298", "L032006", 4200, 6);


	ASSERT_EQ(3729.76, t_camion6.tarificationAnnuelle());
}

//


/**
 * Tentative de faire de le TEST du clone
 *
 *
 */

TEST_F(UnCamion, TestduClone) {

	Camion* clone =  (Camion*) t_camion.clone();



	ASSERT_EQ(t_camion.reqNiv(), clone->reqNiv());
	ASSERT_EQ(t_camion.reqImmatriculation(), clone->reqImmatriculation());
	ASSERT_EQ(t_camion.reqNbEssieux(), clone->reqNbEssieux());
	ASSERT_EQ(t_camion.reqPoids(), clone->reqPoids());
}








/** @} Fin defgroup*/

