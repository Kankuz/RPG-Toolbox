#include "../headers/campaign.hpp"

Campaign::Campaign():
  Node("", ""), mSummary(""),
  mType(CampaignType::GENERIC) {
}

std::string Campaign::getSummary() {
  return mSummary;
}

CampaignType Campaign::getType() {
  return mType;
}

void Campaign::setSummary(std::string summary) {
  mSummary = summary;
}

void Campaign::setType(CampaignType type) {
  mType = type;
}
