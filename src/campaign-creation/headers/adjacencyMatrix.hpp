#pragma once

#include <vector>
#include <ostream>

class AdjacencyMatrix {
private:
  std::vector<std::vector<int>> mMatrix;

public:
  AdjacencyMatrix (int size = 0);
  int size();
  bool isConnected(int from, int to);
  void addElement();
  void removeElement(int position);
  void addEdge(int from, int to, int edgeValue = 1);
  void removeEdge(int from, int to);
  int getConnection(int from, int to);
};

std::ostream &operator<< (std::ostream &os, AdjacencyMatrix &matrix);
