#include "./../headers/adjacencyMatrix.hpp"

AdjacencyMatrix::AdjacencyMatrix(int size):
  mMatrix(size, std::vector<int>(size)) {
}

int AdjacencyMatrix::size() {
  return mMatrix.size();
}

bool AdjacencyMatrix::isConnected(int from, int to) {
  if(this->getConnection(from, to) == 0) {
    return false;
  } else {
    return true;
  }
}

void AdjacencyMatrix::addElement() {
  mMatrix.resize(this->size() + 1);
  int size = this->size();
  for(int i = 0 ; i < size ; i++) {
    mMatrix[i].resize(size,0);
  }
}

void AdjacencyMatrix::removeElement(int position) {
  mMatrix.erase(mMatrix.begin() + position);
  int size = this->size();
  for(int i = 0 ; i < size ; i++) {
    mMatrix[i].erase(mMatrix[i].begin() + position);
  }
}

void AdjacencyMatrix::addEdge(int from, int to, int edgeValue) {
  mMatrix[from][to] = edgeValue;
  mMatrix[to][from] = -edgeValue;
}

void AdjacencyMatrix::removeEdge(int from, int to) {
  mMatrix[from][to] = mMatrix[to][from] = 0;
}

int AdjacencyMatrix::getConnection(int from, int to) {
  return mMatrix[from][to];
}

std::ostream &operator<< (std::ostream &os, AdjacencyMatrix &matrix) {
  for(int i = 0; i < matrix.size(); i++) {
    for(int j = 0; j < matrix.size(); j++) {
      os << matrix.getConnection(i, j) << " ";
    }
    os << std::endl;
  }
  return os;
}
