#pragma once

#include <QtTest/QtTest>
#include <typeinfo>
#include "./../../headers/nodeFactory.hpp"

class NodeFactoryTest : public QObject {
  Q_OBJECT

private slots:
  void createCampaign();
  void createAdventure();
  void createEventGeneric();
};
