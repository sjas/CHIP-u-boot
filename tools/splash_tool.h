/*
 * Copyright (C) 2016 Next Thing Co.
 * Jose Angel Torres <software@nextthing.co>
 * 
 * SPDX-License-Identifier:	GPL-2.0+
 */


#ifndef __SPLASH_TOOL_H__
#define __SPLASH_TOOL_H__

enum {
	MODE_GEN_INFO,
	MODE_GEN_DATA
};

typedef struct bitmap_s {		/* bitmap description */
	uint16_t width;
	uint16_t height;
	uint8_t	palette[256*3];
	uint8_t	*data;
} bitmap_t;

#define DEFAULT_CMAP_SIZE	16	/* size of default color map	*/

void get_bitmap_info(bitmap_t *b, uint16_t *n_colors, uint16_t *data_offset, FILE *fp);

void print_header(int mode);
void print_footer(int mode);
void print_bitmap_data(bitmap_t *b, uint16_t n_colors, uint16_t data_offset, FILE *fp, char * filename);
void print_bitmap_info(bitmap_t *b, uint16_t n_colors, char * filename);

#endif /*__SPLASH_TOOL_H__ */