#pragma once

#include "node.hpp"

class Adventure : public Node {
private:
  std::string mNotes;

public:
  Adventure();
  std::string getNotes();
  void setNotes(std::string notes);
};
