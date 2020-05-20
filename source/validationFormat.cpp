/**
 * \file validationFormat.cpp
 * \brief Implantation des méthodes de validations pour la plaque d'immatriculation et du NIV
 * \author Jonathan Murray
 * \version 1.0
 */

#include <iostream>
#include "validationFormat.h"
#include <string>
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cctype>
#include <locale>

using namespace std;

namespace util {

/**
 * \brief Le validateur de plaaque des vehicule d'immatriculation \n
 * 		Retourne true si le NIV est valide, retourne false dans le cas contraire
 * \param[in] p_niv est un string qui représente la plaque d'immatriculation du véhicule
 * \return un bool qui représente la validite du NIV
 */

bool validationImmatriculationPromenade(const std::string& p_immatriculation) {

	string str = p_immatriculation;
	bool resultat;
	resultat = true;
	int isAlpha = 0;
	int longueur_plaque = str.length();
	char strTab[longueur_plaque];

	for (int i = 0; i < longueur_plaque; i++) {
		strTab[i] = p_immatriculation[i];
	}

	if (str.find('o') != string::npos || str.find('O') != string::npos) {
	//	cout << "contient la lettre  'O', plaque non valide" << endl;
		resultat = false;
	} else if (longueur_plaque == 4 && isalpha(str[0]) && isalpha(str[1])
			&& isalpha(str[2]) && isalpha(str[3])) {
		resultat = true;
	//	cout << "Numéro de plaque personnalisée valide" << endl;
	}

	else if (longueur_plaque == 6 && ((isdigit(str[4])) or isalpha(str[4]))) {
		//cout << "Numero de plaque non valide" << endl;
		resultat = false;
	}

	else if (longueur_plaque <= 7 && longueur_plaque >= 5 && isblank(str[4])) {
		resultat = true;
		//cout << "Numero non valide" << endl;
	} else if (longueur_plaque == 7 && str[0] == 'L' && isdigit(str[1])
			&& isdigit(str[2]) && isdigit(str[3]) && isdigit(str[4])
			&& isdigit(str[5]) && isdigit(str[6])) {
		resultat = true;
		//cout << "Numéro de plaque de camion valide" << endl;
	} else if (longueur_plaque == 7 && isalpha(str[0]) && isalpha(str[1])
			&& isalpha(str[2]) && isdigit(str[4]) && isdigit(str[5])
			&& isdigit(str[6])) {
		resultat = true;
	//	cout << "Numéro de plaque avec une espace au centre est valide" << endl;
	} else if (longueur_plaque <= 7 && longueur_plaque >= 5 && isAlpha == 0) {
		resultat = true;
	//	cout << "Numero de plaque valide pour véhicule 5-7 lettres" << endl;
	}

	else {
		resultat = false;
		cout << "Numéro de plaque non valide " << endl;

	}

	return resultat;

}
bool validationImmatriculationCamion(const std::string& p_immatriculation) {

	string str = p_immatriculation;
	bool resultat;
	resultat = true;
	int longueur_plaque = str.length();
	char strTab[longueur_plaque];

	for (int i = 0; i < longueur_plaque; i++) {
		strTab[i] = p_immatriculation[i];
	}

	if (str.find('o') != string::npos || str.find('O') != string::npos) {
		cout << "contient la lettre  'O', plaque non valide" << endl;
		return false;
	}

	if ((strTab[0]) != 'L') {
		cout << "Doit débuter par L" << endl;
		return false;
	}

	if (longueur_plaque <= 7 && isspace(str[3])) {
		return true;
	//	cout << "Numero avec espace valide" << endl;
	}
	if (longueur_plaque == 7 && isdigit(str[1]) && isdigit(str[2])
			&& isdigit(str[3]) && isdigit(str[4]) && isdigit(str[5])
			&& isdigit(str[6])) {
		return true;
	//	cout << "Numéro de plaque de camion valide" << endl;
	}

	else {
		resultat = false;
	//	cout << "Numéro de plaque non valide " << endl;

	}

	return resultat;
}

/**
 * \brief Le validateur des NIV entre par l'usager dans la console \n
 * 		Retourne true si le NIV est valide, retourne false dans le cas contraire
 * \param[in] p_niv est un string qui représente la plaque d'immatriculation du véhicule
 * \return un bool qui représente la validite du NIV
 */
bool validerNiv(const std::string& p_niv) {

	string s = p_niv;
	string verif_s = p_niv;

	int n = s.length();
	int tableVIN[COLONNES];
	int tableProduct[COLONNES];
	int sommeTable;
	sommeTable = 0;
	int verif_p_niv;
	int tableVerif[COLONNES];
	bool resulat_NIV;
	resulat_NIV = true;

	for (int i = 0; i < n; i++) { // permet la conversion de char en int pcq atoi fonctionne pas
		tableVerif[i] = s[i] - '0';
	}

	if (n != 17) {
		cout << "LE NIV doit comporter 17 caractères";
		resulat_NIV = false;
	}
	if (s.find('I') != string::npos || s.find('i') != string::npos) {
		cout << "contient la lettre  'i', NIV non valide" << endl;
		resulat_NIV = false;
	}
	if (s.find('O') != string::npos || s.find('o') != string::npos) {
		cout << "contient la lettre  'o', NIV non valide" << endl;
		resulat_NIV = false;
	}

	if (s.find('Q') != string::npos || s.find('q') != string::npos) {
		cout << "contient la lettre  'q', NIV non valide" << endl;
		resulat_NIV = false;
	}

	s[8] = '0';

	for (int i = 0; i < n; i++) {  // permet la conversion de char en int du
		tableVIN[i] = s[i] - '0';
	}

	for (int i = 0; i < n; i++) {

		if (s[i] == 'A') {
			tableVIN[i] = 1;
		} else if (s[i] == 'B') {
			tableVIN[i] = 2;
		} else if (s[i] == 'C') {
			tableVIN[i] = 3;
		} else if (s[i] == 'D') {
			tableVIN[i] = 4;
		} else if (s[i] == 'E') {
			tableVIN[i] = 5;
		} else if (s[i] == 'F') {
			tableVIN[i] = 6;
		} else if (s[i] == 'G') {
			tableVIN[i] = 7;
		} else if (s[i] == 'H') {
			tableVIN[i] = 8;
		} else if (s[i] == 'J') {
			tableVIN[i] = 1;
		} else if (s[i] == 'K') {
			tableVIN[i] = 2;
		} else if (s[i] == 'L') {
			tableVIN[i] = 3;
		} else if (s[i] == 'M') {
			tableVIN[i] = 4;
		} else if (s[i] == 'N') {
			tableVIN[i] = 5;
		} else if (s[i] == 'P') {
			tableVIN[i] = 7;
		} else if (s[i] == 'R') {
			tableVIN[i] = 9;
		} else if (s[i] == 'S') {
			tableVIN[i] = 2;
		} else if (s[i] == 'T') {
			tableVIN[i] = 3;
		} else if (s[i] == 'U') {
			tableVIN[i] = 4;
		} else if (s[i] == 'V') {
			tableVIN[i] = 5;
		} else if (s[i] == 'W') {
			tableVIN[i] = 6;
		} else if (s[i] == 'X') {
			tableVIN[i] = 7;
		} else if (s[i] == 'Y') {
			tableVIN[i] = 8;
		} else if (s[i] == 'Z') {
			tableVIN[i] = 9;
		} else {
			tableVIN[i] = p_niv[i] - '0';
		}
	}

	int tableWeight[17];

	tableWeight[0] = 8;
	tableWeight[1] = 7;
	tableWeight[2] = 6;
	tableWeight[3] = 5;
	tableWeight[4] = 4;
	tableWeight[5] = 3;
	tableWeight[6] = 2;
	tableWeight[7] = 10;
	tableWeight[8] = 0;
	tableWeight[9] = 9;
	tableWeight[10] = 8;
	tableWeight[11] = 7;
	tableWeight[12] = 6;
	tableWeight[13] = 5;
	tableWeight[14] = 4;
	tableWeight[15] = 3;
	tableWeight[16] = 2;

	for (int i = 0; i < n; i++) {
		tableProduct[i] = tableVIN[i] * tableWeight[i];
//	cout<< tableProduct[i]<<endl;
	}

	for (int i = 0; i < n; i++) {

		sommeTable = tableProduct[i] + sommeTable;
//	cout << sommeTable<<endl;
	}

	int chekDigit;
	chekDigit = sommeTable % 11;

	if (chekDigit == 10 && verif_s[8] == 'X') {
		//	cout << "Numero de NIV valide" << endl;
		resulat_NIV = true;
	} else if (chekDigit == 0 && verif_s[8] == '0') {
		//	cout << "Numero de NIV valide" << endl;
		resulat_NIV = true;
	} else if (chekDigit == 1 && verif_s[8] == '1') {
		//	cout << "Numero de NIV valide" << endl;
		resulat_NIV = true;
	} else if (chekDigit == 2 && verif_s[8] == '2') {
		//	cout << "Numero de NIV valide" << endl;
		resulat_NIV = true;
	} else if (chekDigit == 3 && verif_s[8] == '3') {
		//	cout << "Numero de NIV valide" << endl;
		resulat_NIV = true;
	} else if (chekDigit == 4 && verif_s[8] == '4') {
		//	cout << "Numero de NIV valide" << endl;
		resulat_NIV = true;
	} else if (chekDigit == 5 && verif_s[8] == '5') {
		//	cout << "Numero de NIV valide" << endl;
		resulat_NIV = true;
	} else if (chekDigit == 6 && verif_s[8] == '6') {
		//	cout << "Numero de NIV valide" << endl;
		resulat_NIV = true;
	} else if (chekDigit == 7 && verif_s[8] == '7') {
		//	cout << "Numero de NIV valide" << endl;
		resulat_NIV = true;
	} else if (chekDigit == 8 && verif_s[8] == '8') {
		//	cout << "Numero de NIV valide" << endl;
		resulat_NIV = true;
	} else if (chekDigit == 9 && verif_s[8] == '9') {
		//	cout << "Numero de NIV valide" << endl;
		resulat_NIV = true;
	} else {

		cout << "Numero de NIV non valide" << endl;
		resulat_NIV = false;
	}

	//cout << chekDigit << endl;

	return resulat_NIV;

}
}

