#include "../headers/event.hpp"

Event::Event():
  Node("",""), mReadAloudText("") {
}

std::string Event::getReadAloudText() {
  return mReadAloudText;
}

void Event::setReadAloudText(std::string readAloudText) {
  mReadAloudText = readAloudText;
}
