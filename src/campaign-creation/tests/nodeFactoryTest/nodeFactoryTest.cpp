#include "./nodeFactoryTest.hpp"

void NodeFactoryTest::createCampaign() {

  Node *test;
  test = NodeFactory::createCampaign();

  QVERIFY(!(dynamic_cast<Campaign*>(test) == NULL));
}

void NodeFactoryTest::createAdventure() {

  Node *test;
  test = NodeFactory::createAdventure();

  QVERIFY(!(dynamic_cast<Adventure*>(test) == NULL));
}

void NodeFactoryTest::createEventGeneric() {

  Node *test;
  test = NodeFactory::createEventGeneric();

  QVERIFY(!(dynamic_cast<EventGeneric*>(test) == NULL));
}

QTEST_MAIN(NodeFactoryTest)
