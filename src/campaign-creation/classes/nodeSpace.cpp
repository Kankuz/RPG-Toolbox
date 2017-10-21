#include "./../headers/nodeSpace.hpp"

NodeSpace::NodeSpace():
  mAdjacencyMatrix(1),
  mNodes(1, NULL) {
}

int NodeSpace::size() {
  return mNodes.size();
}

int NodeSpace::getPosition(Node *node) {
  auto it = std::find(mNodes.begin(), mNodes.end(), node);
  if(it != mNodes.end()) {
    return std::distance(mNodes.begin(), it);
  } else {
    return 0;
  }
}

bool NodeSpace::isConnected(Node *from, Node *to) {
  if(getConnection(from, to) == ConnectionType::NO_CONNECTION) {
    return false;
  } else {
    return true;
  }
}

void NodeSpace::addNode(Node *node) {
  mAdjacencyMatrix.addElement();
  mAdjacencyMatrix.addEdge(0, mAdjacencyMatrix.size() - 1);

  mNodes.push_back(node);
}

void NodeSpace::removeNode(Node *node) {
  int position = getPosition(node);
  mAdjacencyMatrix.removeElement(position);
  mNodes.erase(mNodes.begin() + position);
}

void NodeSpace::addConnection(Node *from, Node *to, ConnectionType type) {
  int positionFrom = getPosition(from);
  int positionTo = getPosition(to);

  mAdjacencyMatrix.addEdge(positionFrom, positionTo, static_cast<int>(type));
}

void NodeSpace::removeConnection(Node *from, Node *to) {
  int positionFrom = getPosition(from);
  int positionTo = getPosition(to);

  mAdjacencyMatrix.removeEdge(positionFrom, positionTo);
}

ConnectionType NodeSpace::getConnection(Node *from, Node *to) {
  int positionFrom = getPosition(from);
  int positionTo = getPosition(to);
  int connection = mAdjacencyMatrix.getConnection(positionFrom, positionTo);
  return static_cast<ConnectionType>(connection);
}
