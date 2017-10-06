#pragma once

#include <QtTest/QtTest>
#include "../../headers/eventGeneric.hpp"

class EventGenericTest : public QObject {
  Q_OBJECT
private slots:
  void getAndSetName();
  void getAndSetDescription();

  void getAndSetReadAloudText();
};
