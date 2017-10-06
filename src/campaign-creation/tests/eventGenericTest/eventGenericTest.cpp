#include "./eventGenericTest.hpp"

void EventGenericTest::getAndSetName() {

  EventGeneric test;

  test.setName("EventGeneric");
  QVERIFY(test.getName() == "EventGeneric");
}

void EventGenericTest::getAndSetDescription() {

  EventGeneric test;

  test.setDescription("Event");
  QVERIFY(test.getDescription() == "Event");
}

void EventGenericTest::getAndSetReadAloudText() {

  EventGeneric test;

  test.setReadAloudText("EventGeneric");
  QVERIFY(test.getReadAloudText() == "EventGeneric");
}

QTEST_MAIN(EventGenericTest)
