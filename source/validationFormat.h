/**
 * \file validationFormat.h
 * \brief Fichier qui contient l'interface pour la validation des plaques d'immatriculations et des NIV
 * \author Jonathan Murray
 * \version 1.0
 */
#ifndef VALIDATIONFORMAT_H_
#define VALIDATIONFORMAT_H_

//dimension des images
//#define LARGEUR 13
// int HAUTEUR = 13;
namespace util {
const int LIGNES = 4;
const int COLONNES = 17;

bool validerImmatriculation(const std::string& p_immatriculation);

bool validerNiv(const std::string& p_niv);
bool validationImmatriculationPromenade(const std::string& p_immatriculation);
bool validationImmatriculationCamion(const std::string& p_immatriculation);

}
#endif /* FONCTIONSUTILITAIRESSOLUTION_H_ */
