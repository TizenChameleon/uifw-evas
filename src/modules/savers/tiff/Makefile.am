
MAINTAINERCLEANFILES = Makefile.in

AM_CPPFLAGS = \
-I. \
-I$(top_srcdir)/src/lib \
-I$(top_srcdir)/src/lib/include \
@FREETYPE_CFLAGS@ \
@PIXMAN_CFLAGS@ \
@EINA_CFLAGS@ \
@FRIBIDI_CFLAGS@ \
@evas_image_loader_tiff_cflags@

if BUILD_LOADER_TIFF
if !EVAS_STATIC_BUILD_TIFF

pkgdir = $(libdir)/evas/modules/savers/tiff/$(MODULE_ARCH)
pkg_LTLIBRARIES = module.la

module_la_SOURCES = evas_image_save_tiff.c

module_la_LIBADD = @EINA_LIBS@ @evas_image_loader_tiff_libs@ $(top_builddir)/src/lib/libevas.la
module_la_LDFLAGS = -no-undefined @lt_enable_auto_import@ -module -avoid-version
module_la_LIBTOOLFLAGS = --tag=disable-static

else

noinst_LTLIBRARIES = libevas_saver_tiff.la

libevas_saver_tiff_la_SOURCES = evas_image_save_tiff.c
libevas_saver_tiff_la_LIBADD = @evas_image_loader_tiff_libs@

endif
endif
