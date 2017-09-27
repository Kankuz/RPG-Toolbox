#pragma once

#include <QtTest/QtTest>
#include "../../headers/campaign.hpp"
#include "../../headers/campaignType.hpp"

class CampaignTest : public QObject {
  Q_OBJECT
private slots:
  void getAndSetName();
  void getAndSetDescription();

  void getAndSetType();
  void getAndSetSummary();
};
