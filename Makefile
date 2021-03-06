#############################################################################
# Makefile for building: BOLDC
# Generated by qmake (2.01a) (Qt 4.6.3) on: jeu. juin 5 14:27:41 2014
# Project:  BOLDC.pro
# Template: app
# Command: /usr/bin/qmake-qt4 -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile BOLDC.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_SQL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtSql -I/usr/include/qt4 -I. -I.
LINK          = g++
LFLAGS        = 
LIBS          = $(SUBLIBS)  -L/usr/lib -lQtSql -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		mainwindow.cpp \
		login.cpp \
		magasin.cpp \
		rayon.cpp \
		produit.cpp \
		comboboxrayon.cpp \
		organiser.cpp moc_mainwindow.cpp \
		moc_login.cpp \
		moc_magasin.cpp \
		moc_rayon.cpp \
		moc_produit.cpp \
		moc_comboboxrayon.cpp \
		moc_organiser.cpp \
		qrc_images.cpp
OBJECTS       = main.o \
		mainwindow.o \
		login.o \
		magasin.o \
		rayon.o \
		produit.o \
		comboboxrayon.o \
		organiser.o \
		moc_mainwindow.o \
		moc_login.o \
		moc_magasin.o \
		moc_rayon.o \
		moc_produit.o \
		moc_comboboxrayon.o \
		moc_organiser.o \
		qrc_images.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		BOLDC.pro
QMAKE_TARGET  = BOLDC
DESTDIR       = 
TARGET        = BOLDC

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mainwindow.h ui_login.h ui_magasin.h ui_rayon.h ui_produit.h ui_organiser.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: BOLDC.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtSql.prl \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile BOLDC.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtSql.prl:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile BOLDC.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/BOLDC1.0.0 || $(MKDIR) .tmp/BOLDC1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/BOLDC1.0.0/ && $(COPY_FILE) --parents mainwindow.h login.h magasin.h rayon.h produit.h comboboxrayon.h organiser.h .tmp/BOLDC1.0.0/ && $(COPY_FILE) --parents images.qrc .tmp/BOLDC1.0.0/ && $(COPY_FILE) --parents main.cpp mainwindow.cpp login.cpp magasin.cpp rayon.cpp produit.cpp comboboxrayon.cpp organiser.cpp .tmp/BOLDC1.0.0/ && $(COPY_FILE) --parents mainwindow.ui login.ui magasin.ui rayon.ui produit.ui organiser.ui .tmp/BOLDC1.0.0/ && (cd `dirname .tmp/BOLDC1.0.0` && $(TAR) BOLDC1.0.0.tar BOLDC1.0.0 && $(COMPRESS) BOLDC1.0.0.tar) && $(MOVE) `dirname .tmp/BOLDC1.0.0`/BOLDC1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/BOLDC1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp moc_login.cpp moc_magasin.cpp moc_rayon.cpp moc_produit.cpp moc_comboboxrayon.cpp moc_organiser.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_login.cpp moc_magasin.cpp moc_rayon.cpp moc_produit.cpp moc_comboboxrayon.cpp moc_organiser.cpp
moc_mainwindow.cpp: mainwindow.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_login.cpp: login.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) login.h -o moc_login.cpp

moc_magasin.cpp: magasin.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) magasin.h -o moc_magasin.cpp

moc_rayon.cpp: rayon.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) rayon.h -o moc_rayon.cpp

moc_produit.cpp: produit.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) produit.h -o moc_produit.cpp

moc_comboboxrayon.cpp: comboboxrayon.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) comboboxrayon.h -o moc_comboboxrayon.cpp

moc_organiser.cpp: organiser.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) organiser.h -o moc_organiser.cpp

compiler_rcc_make_all: qrc_images.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_images.cpp
qrc_images.cpp: images.qrc \
		images/logo.png
	/usr/bin/rcc -name images images.qrc -o qrc_images.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h ui_login.h ui_magasin.h ui_rayon.h ui_produit.h ui_organiser.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h ui_login.h ui_magasin.h ui_rayon.h ui_produit.h ui_organiser.h
ui_mainwindow.h: mainwindow.ui \
		comboboxrayon.h
	/usr/bin/uic-qt4 mainwindow.ui -o ui_mainwindow.h

ui_login.h: login.ui
	/usr/bin/uic-qt4 login.ui -o ui_login.h

ui_magasin.h: magasin.ui
	/usr/bin/uic-qt4 magasin.ui -o ui_magasin.h

ui_rayon.h: rayon.ui
	/usr/bin/uic-qt4 rayon.ui -o ui_rayon.h

ui_produit.h: produit.ui \
		comboboxrayon.h
	/usr/bin/uic-qt4 produit.ui -o ui_produit.h

ui_organiser.h: organiser.ui
	/usr/bin/uic-qt4 organiser.ui -o ui_organiser.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

main.o: main.cpp mainwindow.h \
		login.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		ui_mainwindow.h \
		comboboxrayon.h \
		magasin.h \
		rayon.h \
		produit.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

login.o: login.cpp login.h \
		ui_login.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o login.o login.cpp

magasin.o: magasin.cpp magasin.h \
		ui_magasin.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o magasin.o magasin.cpp

rayon.o: rayon.cpp rayon.h \
		ui_rayon.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o rayon.o rayon.cpp

produit.o: produit.cpp produit.h \
		ui_produit.h \
		comboboxrayon.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o produit.o produit.cpp

comboboxrayon.o: comboboxrayon.cpp comboboxrayon.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o comboboxrayon.o comboboxrayon.cpp

organiser.o: organiser.cpp organiser.h \
		ui_organiser.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o organiser.o organiser.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_login.o: moc_login.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_login.o moc_login.cpp

moc_magasin.o: moc_magasin.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_magasin.o moc_magasin.cpp

moc_rayon.o: moc_rayon.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_rayon.o moc_rayon.cpp

moc_produit.o: moc_produit.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_produit.o moc_produit.cpp

moc_comboboxrayon.o: moc_comboboxrayon.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_comboboxrayon.o moc_comboboxrayon.cpp

moc_organiser.o: moc_organiser.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_organiser.o moc_organiser.cpp

qrc_images.o: qrc_images.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_images.o qrc_images.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

