include(../../../unitTesting.pri)

TARGET = EventGenericTest

# Input
HEADERS += eventGenericTest.hpp
SOURCES += eventGenericTest.cpp \
  ../../classes/eventGeneric.cpp \
  ../../classes/node.cpp \
  ./../../classes/event.cpp
