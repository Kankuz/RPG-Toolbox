#pragma once

#include <QtTest/QtTest>
#include "../../headers/adventure.hpp"

class AdventureTest : public QObject {
  Q_OBJECT
private slots:
  void getAndSetName();
  void getAndSetDescription();

  void getAndSetNotes();
};
