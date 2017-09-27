release:DESTDIR = ../../../../bin/unitTests
release:OBJECTS_DIR = ../../../../build/release/.obj
release:MOC_DIR = ../../../../build/release/.moc
release:RCC_DIR = ../../../../build/release/.rcc
release:UI_DIR = ../../../../build/release/.ui
release:PRECOMPILED_DIR = ../../../../build/release

debug:DESTDIR = ../../../../bin/unitTests
debug:OBJECTS_DIR = ../../../../build/release/.obj
debug:MOC_DIR = ../../../../build/release/.moc
debug:RCC_DIR = ../../../../build/release/.rcc
debug:UI_DIR = ../../../../build/release/.ui
debug:PRECOMPILED_DIR = ../../../../build/release

QT += testlib

INCLUDEPATH += ../headers
CONFIG += c++11 testcase

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov
