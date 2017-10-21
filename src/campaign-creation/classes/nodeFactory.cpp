#include "./../headers/nodeFactory.hpp"

Node* NodeFactory::createCampaign() {
  Campaign* campaign = new Campaign();
  return dynamic_cast<Node*>(campaign);
}

Node* NodeFactory::createAdventure() {
  Adventure* adventure = new Adventure();
  return dynamic_cast<Node*>(adventure);
}

Node* NodeFactory::createEventGeneric() {
  EventGeneric* eventGeneric = new EventGeneric();
  return dynamic_cast<Node*>(eventGeneric);
}
