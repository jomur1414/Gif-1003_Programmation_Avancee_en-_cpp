#include "proprietairegui.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProprietaireGui w;
    w.show();
    return a.exec();
}
