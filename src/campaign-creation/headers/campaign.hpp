#pragma once

#include "node.hpp"
#include "campaignType.hpp"
#include <string>


class Campaign : public Node {
private:
  std::string mSummary;
  CampaignType mType;

public:
  Campaign();
  std::string getSummary();
  CampaignType getType();
  void setSummary(std::string summary);
  void setType(CampaignType type);
};
