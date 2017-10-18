include(../../../unitTesting.pri)

TARGET = nodeSpaceTest

# Input
HEADERS += ./nodeSpaceTest.hpp
SOURCES += ./nodeSpaceTest.cpp \
  ./../../classes/adjacencyMatrix.cpp \
  ./../../classes/event.cpp \
  ./../../classes/campaign.cpp \
  ./../../classes/adventure.cpp \
  ./../../classes/node.cpp \
  ./../../classes/nodeSpace.cpp
