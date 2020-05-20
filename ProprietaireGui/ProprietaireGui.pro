TEMPLATE = app
TARGET = ProprietaireGui
QT += core \
    gui
HEADERS += supprimervehiculegui.h \
    ajoutervehiculepromenadegui.h \
    ajoutercamiongui.h \
    ajouterproprietairegui.h \
    proprietairegui.h
SOURCES += supprimervehiculegui.cpp \
    ajoutervehiculepromenadegui.cpp \
    ajoutercamiongui.cpp \
    ajouterproprietairegui.cpp \
    main.cpp \
    proprietairegui.cpp
FORMS += supprimervehiculegui.ui \
    ajoutervehiculepromenadegui.ui \
    ajoutercamiongui.ui \
    ajouterproprietairegui.ui \
    proprietairegui.ui
RESOURCES += 
LIBS += "../source/Debug/libsource.a"
INCLUDEPATH += "../source/."
