#include "adventureTest.hpp"

void AdventureTest::getAndSetName() {

  Adventure test;

  test.setName("Adventure");
  QVERIFY(test.getName() == "Adventure");
}

void AdventureTest::getAndSetDescription() {

  Adventure test;

  test.setDescription("Adventure");
  QVERIFY(test.getDescription() == "Adventure");
}

void AdventureTest::getAndSetNotes() {

  Adventure test;

  test.setNotes("Adventure");
  QVERIFY(test.getNotes() == "Adventure");
}

QTEST_MAIN(AdventureTest)
