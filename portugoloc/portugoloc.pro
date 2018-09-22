#
#
# Author:
#  Carlos Timoshenko
#  carlostimoshenkorodrigueslopes@gmail.com
#
#  https://github.com/softctrl
#
# This project is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 3 of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
#
TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    parameter.cpp \
    q000_state.cpp \
    q001_state.cpp \
    q002_state.cpp \
    q003_state.cpp \
    q004_state.cpp \
    q005_state.cpp \
    q006_state.cpp \
    q007_state.cpp \
    q008_state.cpp \
    q009_state.cpp \
    q010_state.cpp \
    q011_state.cpp \
    q012_state.cpp \
    q013_state.cpp \
    types.cpp \
    q019_state.cpp \
    q020_state.cpp \
    q014_state.cpp \
    q015_state.cpp \
    q018_state.cpp \
    q016_state.cpp \
    q017_state.cpp \
    q021_state.cpp \
    portugolo_machine.cpp \
    q026_state.cpp \
    q027_state.cpp \
    q028_state.cpp \
    q029_state.cpp \
    q030_state.cpp \
    q032_state.cpp \
    q031_state.cpp \
    q022_state.cpp \
    q023_state.cpp \
    qeof_state.cpp \
    q033_state.cpp \
    q024_state.cpp \
    q025_state.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-lexor-Desktop_Qt_5_11_1_GCC_64bit-Debug/release/ -llexor
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-lexor-Desktop_Qt_5_11_1_GCC_64bit-Debug/debug/ -llexor
else:unix: LIBS += -L$$PWD/../build-lexor-Desktop_Qt_5_11_1_GCC_64bit-Debug/ -llexor

INCLUDEPATH += $$PWD/../lexor
DEPENDPATH += $$PWD/../build-lexor-Desktop_Qt_5_11_1_GCC_64bit-Debug

HEADERS += \
    parameter.h \
    q000_state.h \
    q001_state.h \
    q002_state.h \
    q003_state.h \
    q004_state.h \
    q005_state.h \
    q006_state.h \
    q007_state.h \
    q008_state.h \
    q009_state.h \
    q010_state.h \
    q011_state.h \
    q012_state.h \
    q013_state.h \
    types.h \
    q019_state.h \
    q020_state.h \
    q014_state.h \
    q015_state.h \
    q018_state.h \
    q016_state.h \
    q017_state.h \
    q021_state.h \
    portugolo_machine.h \
    q026_state.h \
    q027_state.h \
    q028_state.h \
    q029_state.h \
    q030_state.h \
    q032_state.h \
    q031_state.h \
    q022_state.h \
    q023_state.h \
    qeof_state.h \
    q033_state.h \
    q024_state.h \
    q025_state.h

DISTFILES += \
    run.sh
