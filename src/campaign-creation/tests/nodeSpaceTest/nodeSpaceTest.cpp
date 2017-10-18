#include "./nodeSpaceTest.hpp"

void NodeSpaceTest::addNode() {

  NodeSpace test;
  int expectedSize = 2; // Head node + Created Node

  Node *p_node;
  Adventure adventure;
  p_node = &adventure;

  test.addNode(p_node);

  QVERIFY(test.size() == expectedSize);
}

void NodeSpaceTest::removeNode() {

  NodeSpace test;
  int expectedSize = 0;

  test.removeNode(NULL);

  QVERIFY(test.size() == expectedSize);
}

void NodeSpaceTest::addConnection() {

  NodeSpace test;

  Node *p_node;
  Adventure adventure;
  p_node = &adventure;

  Node *p_node2;
  Adventure adventure2;
  p_node2 = &adventure2;

  test.addNode(p_node);
  test.addNode(p_node2);

  test.addConnection(p_node, p_node2);

  QVERIFY(test.isConnected(p_node, p_node2));
}

void NodeSpaceTest::removeConnection() {

  NodeSpace test;

  Node *p_node;
  Adventure adventure;
  p_node = &adventure;

  Node *p_node2;
  Adventure adventure2;
  p_node2 = &adventure2;

  test.addNode(p_node);
  test.addNode(p_node2);

  test.addConnection(p_node, p_node2);
  test.removeConnection(p_node, p_node2);

  QVERIFY(!test.isConnected(p_node, p_node2));
}

QTEST_MAIN(NodeSpaceTest)
