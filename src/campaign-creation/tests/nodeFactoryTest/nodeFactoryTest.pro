include(../../../unitTesting.pri)

TARGET = NodeFactoryTest

# Input
HEADERS += nodeFactoryTest.hpp
SOURCES += nodeFactoryTest.cpp \
  ./../../classes/adventure.cpp \
  ./../../classes/campaign.cpp \
  ./../../classes/eventGeneric.cpp \
  ./../../classes/nodeFactory.cpp \
  ./../../classes/node.cpp \
  ./../../classes/event.cpp
