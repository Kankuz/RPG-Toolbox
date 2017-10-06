#pragma once

#include "node.hpp"

class Event : public Node {
private:
  std::string mReadAloudText;

protected:
  Event();

public:
  std::string getReadAloudText();
  void setReadAloudText(std::string readAloudText);
};
