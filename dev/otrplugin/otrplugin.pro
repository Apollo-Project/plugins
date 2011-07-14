include(../../psiplugin.pri)

CONFIG += release
LIBS += -lotr -ltidy -L/usr/local/lib
RESOURCES = psi-otr.qrc

HEADERS += src/PsiOtrPlugin.hpp
HEADERS += src/OtrMessaging.hpp
HEADERS += src/OtrInternal.hpp
HEADERS += src/PsiOtrConfig.hpp
HEADERS += src/psiotrclosure.h
HEADERS += src/HtmlTidy.hpp

SOURCES += src/PsiOtrPlugin.cpp
SOURCES += src/OtrMessaging.cpp
SOURCES += src/OtrInternal.cpp
SOURCES += src/PsiOtrConfig.cpp
SOURCES += src/psiotrclosure.cpp
SOURCES += src/HtmlTidy.cpp
