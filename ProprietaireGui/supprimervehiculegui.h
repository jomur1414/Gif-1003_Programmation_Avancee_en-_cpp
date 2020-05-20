#ifndef SUPPRIMERVEHICULEGUI_H
#define SUPPRIMERVEHICULEGUI_H

#include <QtGui/QDialog>
#include "ui_supprimervehiculegui.h"

class SupprimerVehiculeGui : public QDialog
{
    Q_OBJECT

public:
    SupprimerVehiculeGui(QWidget *parent = 0);
    ~SupprimerVehiculeGui();
    QString reqNiv() const;

    private slots:
    	void confirmerSuppression();

private:
    Ui::SupprimerVehiculeGuiClass ui;
};

#endif // SUPPRIMERVEHICULEGUI_H
