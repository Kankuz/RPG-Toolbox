#pragma once

#include "./campaign.hpp"
#include "./adventure.hpp"
#include "./eventGeneric.hpp"

class NodeFactory {
private:
  NodeFactory();

public:
  static Node* createCampaign();
  static Node* createAdventure();
  static Node* createEventGeneric();
};
