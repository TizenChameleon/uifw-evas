
MAINTAINERCLEANFILES = Makefile.in

AM_CPPFLAGS = \
-I. \
-I$(top_srcdir)/src/lib \
-I$(top_srcdir)/src/lib/include \
-I$(top_srcdir)/src/lib/cserve2 \
-I$(top_srcdir)/src/bin \
@EINA_CFLAGS@ \
@evas_image_loader_png_cflags@ \
@EVIL_CFLAGS@

if BUILD_LOADER_PNG
#if !EVAS_STATIC_BUILD_PNG

pkgdir = $(libdir)/evas/cserve2/loaders/png/$(MODULE_ARCH)
pkg_LTLIBRARIES = module.la

module_la_SOURCES = evas_image_load_png.c

module_la_LIBADD = @EINA_LIBS@ @evas_image_loader_png_libs@ @EVIL_LIBS@
module_la_LDFLAGS = -no-undefined @lt_enable_auto_import@ -module -avoid-version
module_la_LIBTOOLFLAGS = --tag=disable-static

#else

#noinst_LTLIBRARIES = libevas_loader_png.la
#libevas_loader_png_la_SOURCES = evas_image_load_png.c
#libevas_loader_png_la_LIBADD = @evas_image_loader_png_libs@

#endif
endif
