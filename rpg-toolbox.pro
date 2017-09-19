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

QT += core gui widgets
TEMPLATE = app
CONFIG += c++11

include(src/main-window/main-window.pri)

SOURCES += src/main.cpp
