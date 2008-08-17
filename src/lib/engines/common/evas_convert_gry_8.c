/*
 * vim:ts=8:sw=3:sts=8:noexpandtab:cino=>5n-3f0^-2{2
 */

#include "evas_common.h"
#include "evas_convert_gry_8.h"

#ifdef BUILD_CONVERT_8_GRY_1
void evas_common_convert_rgba_to_8bpp_gry_256_dith     (DATA32 *src, DATA8 *dst, int src_jump, int dst_jump, int w, int h, int dith_x, int dith_y, DATA8 *pal){}
#endif

#ifdef BUILD_CONVERT_8_GRY_4
void evas_common_convert_rgba_to_8bpp_gry_64_dith      (DATA32 *src, DATA8 *dst, int src_jump, int dst_jump, int w, int h, int dith_x, int dith_y, DATA8 *pal){}
#endif

#ifdef BUILD_CONVERT_8_GRY_16
void evas_common_convert_rgba_to_8bpp_gry_16_dith      (DATA32 *src, DATA8 *dst, int src_jump, int dst_jump, int w, int h, int dith_x, int dith_y, DATA8 *pal){}
#endif

#ifdef BUILD_CONVERT_8_GRY_64
void evas_common_convert_rgba_to_8bpp_gry_4_dith       (DATA32 *src, DATA8 *dst, int src_jump, int dst_jump, int w, int h, int dith_x, int dith_y, DATA8 *pal){}
#endif

#ifdef BUILD_CONVERT_8_GRY_256
void evas_common_convert_rgba_to_8bpp_gry_1_dith       (DATA32 *src, DATA8 *dst, int src_jump, int dst_jump, int w, int h, int dith_x, int dith_y, DATA8 *pal){}
#endif
