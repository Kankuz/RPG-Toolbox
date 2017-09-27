include(../../../unitTesting.pri)

TARGET = campaignTest

# Input
HEADERS += campaignTest.hpp
SOURCES += campaignTest.cpp \
  ../../classes/campaign.cpp \
  ../../classes/node.cpp
