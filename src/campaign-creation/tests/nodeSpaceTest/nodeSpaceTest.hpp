#pragma once

#include <QtTest/QtTest>
#include "./../../headers/nodeSpace.hpp"
#include "./../../headers/event.hpp"
#include "./../../headers/campaign.hpp"
#include "./../../headers/adventure.hpp"

class NodeSpaceTest : public QObject {
  Q_OBJECT

private slots:
  void addNode();
  void removeNode();

  void addConnection();
  void removeConnection();
};
