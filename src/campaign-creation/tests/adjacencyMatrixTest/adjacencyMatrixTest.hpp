#pragma once

#include <QtTest/QtTest>
#include "./../../headers/adjacencyMatrix.hpp"

class AdjacencyMatrixTest : public QObject {
  Q_OBJECT

private slots:
  void removeElement();
  void addElement();

  void addEdge();
  void removeEdge();
};
