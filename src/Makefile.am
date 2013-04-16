bin_PROGRAMS = ichabod

ichabod_SOURCES = \
	browserdialog.cpp \
	cookiejar.cpp \
	downloader.cpp \
	factory.cpp\
	helpers.cpp \
	hessian.cpp \
	io.cpp \
	logger.cpp \
	main.cpp \
	network.cpp \
	tarrytown.cpp \
	testpage.cpp 


nodist_ichabod_SOURCES = \
	moc_browserdialog.cpp \
	moc_chartbl.cpp \
	moc_cookiejar.cpp \
	moc_downloader.cpp \
	moc_factory.cpp \
	moc_getkeyevent.cpp \
	moc_hessian.cpp \
	moc_io.cpp \
	moc_logger.cpp \
	moc_macros.cpp \
	moc_network.cpp \
	moc_salorcookiejar.cpp \
	moc_tarrytown.cpp \
	moc_testpage.cpp


EXTRA_DIST = $(nodist_ichabod_SOURCES:moc_%.cpp=%.h)

# This rule lets GNU make create any moc_*.cpp from the equivalent *.h
moc_%.cpp: %.h
	moc-qt4 $< -o $@

CLEANFILES = $(filter moc_%.cpp,$(nodist_ichabod_SOURCES))