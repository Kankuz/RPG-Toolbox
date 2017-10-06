#include "./adjacencyMatrixTest.hpp"

void AdjacencyMatrixTest::addElement() {

  AdjacencyMatrix test;
  int expectedSize = 1;

  test.addElement();

  QVERIFY(test.size() == expectedSize);
}

void AdjacencyMatrixTest::removeElement() {

  AdjacencyMatrix test(2);
  int expectedSize = 1;

  test.removeElement(1);

  QVERIFY(test.size() == expectedSize);
}

void AdjacencyMatrixTest::addEdge() {

  AdjacencyMatrix test(2);

  test.addEdge(0,1);

  QVERIFY(test.isConnected(0,1));
}

void AdjacencyMatrixTest::removeEdge() {

  AdjacencyMatrix test(2);

  test.addEdge(0,1);
  test.removeEdge(0,1);

  QVERIFY(!test.isConnected(0,1));
}

QTEST_MAIN(AdjacencyMatrixTest)
