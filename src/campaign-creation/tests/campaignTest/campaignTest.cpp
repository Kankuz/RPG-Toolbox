#include "campaignTest.hpp"

void CampaignTest::getAndSetName() {

  Campaign test;

  test.setName("Campaign");
  QVERIFY(test.getName() == "Campaign");
}

void CampaignTest::getAndSetDescription() {

  Campaign test;

  test.setDescription("Campaign");
  QVERIFY(test.getDescription() == "Campaign");
}

void CampaignTest::getAndSetType() {

  Campaign test;

  test.setType(CampaignType::GENERIC);
  QVERIFY(test.getType() == CampaignType::GENERIC);
}

void CampaignTest::getAndSetSummary() {

  Campaign test;

  test.setSummary("summary");
  QVERIFY(test.getSummary() == "summary");
}

QTEST_MAIN(CampaignTest)
