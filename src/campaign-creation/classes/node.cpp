#include "../headers/node.hpp"

Node::Node(std::string name, std::string description):
  mName(name), mDescription(description) {
}

Node::~Node() {}

std::string Node::getDescription() {
  return mDescription;
}

std::string Node::getName() {
  return mName;
}

void Node::setName(std::string name) {
  mName = name;
}

void Node::setDescription(std::string description) {
  mDescription = description;
}
