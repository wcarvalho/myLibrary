lib_LTLIBRARIES = \
	libwilkasUtilityLib.la

include_HEADERS =  \
	utility_library.h \
	FileProperties.h

libwilkasUtilityLib_la_SOURCES = \
	utility_library.cpp \
	FileProperties.cpp

##libwilkasUtilityLib_la_LIBADD = 

libwilkasUtilityLib_la_LDFLAGS = -version-info 1:0:0

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = wilkasUtilityLib.pc


clean-local:
	rm -f $(BUILT_SOURCES) *Dict*