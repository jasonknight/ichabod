bin_PROGRAMS = ichabod

ichabod_SOURCES = \
	main.cpp \
	hessian.cpp \
	testpage.cpp \
	cookiejar.cpp \
	network.cpp \
	factory.cpp\
	io.cpp \
	logger.cpp \
	downloader.cpp \
	browserdialog.cpp \
	tarrytown.cpp \
	helpers.cpp


nodist_ichabod_SOURCES = \
	moc_hessian.cpp \
	moc_testpage.cpp \
	moc_cookiejar.cpp \
	moc_network.cpp \
	moc_factory.cpp \
	moc_io.cpp \
	moc_logger.cpp \
	moc_downloader.cpp \
	moc_browserdialog.cpp \
	moc_tarrytown.cpp
	


EXTRA_DIST = $(nodist_ichabod_SOURCES:moc_%.cpp=%.h)

# This rule lets GNU make create any moc_*.cpp from the equivalent *.h
moc_%.cpp: %.h
	moc-qt4 $< -o $@

CLEANFILES = $(filter moc_%.cpp,$(nodist_ichabod_SOURCES))