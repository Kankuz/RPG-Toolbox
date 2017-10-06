release:DESTDIR = bin/release
release:OBJECTS_DIR = build/release/.obj
release:MOC_DIR = build/release/.moc
release:RCC_DIR = build/release/.rcc
release:UI_DIR = build/release/.ui
release:PRECOMPILED_DIR = build/release

debug:DESTDIR = bin/debug
debug:OBJECTS_DIR = build/debug/.obj
debug:MOC_DIR = build/debug/.moc
debug:RCC_DIR = build/debug/.rcc
debug:UI_DIR = build/debug/.ui
debug:PRECOMPILED_DIR = build/debug

travis_ci {
  DEFINES += IS_TRAVIS
} else {
  QMAKE_CLEAN += ./build/release/.obj/*.gcno \
    ./build/release/.obj/*.gcda

  QMAKE_DISTCLEAN += ./build/release/.obj/*.gcno \
    ./build/release/.obj/*.gcda
}

unitTest {
  TEMPLATE = subdirs
  SUBDIRS += \
      ./src/campaign-creation/tests/campaignTest \
      ./src/campaign-creation/tests/adventureTest \
      ./src/campaign-creation/tests/eventGenericTest
} else {
  QT += core gui widgets
  TEMPLATE = app
  CONFIG += c++11
  QMAKE_CXXFLAGS += -std=c++11

  include(src/main-window/main-window.pri)
  include(src/campaign-creation/campaign-creation.pri)
  SOURCES += src/main.cpp
}

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov
