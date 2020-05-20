#include "supprimervehiculegui.h"
#include <QtGui/QMessageBox>
#include <QtGui/QDialog>

SupprimerVehiculeGui::SupprimerVehiculeGui(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
}

SupprimerVehiculeGui::~SupprimerVehiculeGui()
{

}



QString SupprimerVehiculeGui::reqNiv() const{
	return ui.leNiv->text();
}


void SupprimerVehiculeGui::confirmerSuppression(){
	if (ui.leNiv->text().isEmpty()){
		QString message("Veuillez saisir soit le NIV");
		QMessageBox::information(this, "ERREUR", message);
		return;
	} else {
		accept();
	}
}
