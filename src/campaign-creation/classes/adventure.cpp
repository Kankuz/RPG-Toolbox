#include "../headers/adventure.hpp"

Adventure::Adventure():
  Node("", ""), mNotes("") {
}

std::string Adventure::getNotes() {
  return mNotes;
}

void Adventure::setNotes(std::string notes) {
  mNotes = notes;
}
