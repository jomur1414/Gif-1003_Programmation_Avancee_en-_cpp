// * VehiculeException.cpp
// *
// *  Created on: 2019-12-06
// *      Author: etudiant



#include "VehiculeException.h"
#include <sstream>
using namespace std;

VehiculeException::VehiculeException(const std::string& p_raison):
std::runtime_error(p_raison){};



VehiculeDejaPresentException::VehiculeDejaPresentException(const std::string& p_raison):
				VehiculeException(p_raison){};



VehiculeAbsentException::VehiculeAbsentException  (const std::string& p_raison):
		VehiculeException(p_raison){};

