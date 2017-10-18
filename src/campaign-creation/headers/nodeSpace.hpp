#pragma once

#include <vector>
#include <algorithm>
#include "./../../headers/event.hpp"
#include "./../../headers/campaign.hpp"
#include "./../../headers/adventure.hpp"
#include "./connectionType.hpp"
#include "./adjacencyMatrix.hpp"

class NodeSpace {
private:
  AdjacencyMatrix mAdjacencyMatrix;
  std::vector<Node*> mNodes;
  int getPosition(Node *node);

public:
  NodeSpace();
  int size();
  bool isConnected(Node *from, Node *to);
  void addNode(Node *node);
  void removeNode(Node *node);
  void addConnection(Node *from, Node *to, ConnectionType type = ConnectionType::FATHER_SON);
  void removeConnection(Node *from, Node *to);
  ConnectionType getConnection(Node *from, Node *to);
};
