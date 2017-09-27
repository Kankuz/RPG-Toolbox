#pragma once

#include "node.hpp"
#include <string>

class Adventure : public Node {
private:
  std::string mNotes;

public:
  Adventure();
  std::string getNotes();
  void setNotes(std::string notes);
};
