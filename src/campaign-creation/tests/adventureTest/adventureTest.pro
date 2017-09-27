include(../../../unitTesting.pri)

TARGET = adventureTest

# Input
HEADERS += adventureTest.hpp
SOURCES += adventureTest.cpp \
  ../../classes/adventure.cpp \
  ../../classes/node.cpp
