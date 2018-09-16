#ifndef __HX8279D_PARAM_H__
#define __HX8279D_PARAM_H__

#include <linux/types.h>
#include <linux/kernel.h>

#define EXTEND_BRIGHTNESS	306
#define UI_MAX_BRIGHTNESS	255
#define UI_MIN_BRIGHTNESS	0
#define UI_DEFAULT_BRIGHTNESS	128
#define NORMAL_TEMPERATURE	25	/* 25 degrees Celsius */

#define HX8279D_ID_REG				0xB1
#define HX8279D_ID_LEN				3 /* 1 */

#define BOE_PANEL_ID 0x82790d
#define CRT_PANEL_ID 0x82790e
#define BOE2_PANEL_ID 0x827910 //BOE 8.5

struct mipi_cmd {
	u8 cmd[2];
};

static const struct mipi_cmd SEQ_CMD_TABLE[] = {
	{{0xB0, 0x00}},
	{{0xB6, 0x03}},
	{{0xBA, 0x8B}},
	{{0xBF, 0x15}},
	{{0xC0, 0x0F}},
	{{0xC2, 0x0C}},
	{{0xC3, 0x02}},
	{{0xC4, 0x0C}},
	{{0xC5, 0x02}},
	{{0xB0, 0x01}},
	{{0xE0, 0x0F}},
	{{0xE1, 0x0F}},
	{{0xDC, 0x10}},
	{{0xDD, 0x10}},
	{{0xCC, 0x0F}},
	{{0xCD, 0x0F}},
	{{0xC8, 0x10}},
	{{0xC9, 0x10}},
	{{0xB0, 0x03}},
	{{0xC5, 0x2C}},
	{{0xDE, 0x2C}},
	{{0xCA, 0x42}},
	{{0xD6, 0x88}},
	{{0xD7, 0x08}},
	{{0xD2, 0x06}},
	{{0xD3, 0x06}},
	{{0xB0, 0x05}},
	{{0xB3, 0x52}},
	{{0xB0, 0x06}},
	{{0xB8, 0xA5}},
	{{0xC0, 0xA5}},
	{{0xC7, 0x0F}},
	{{0xD5, 0x32}},
	{{0xB0, 0x02}},
	{{0xC0, 0x00}},
	{{0xC1, 0x14}},
	{{0xC2, 0x16}},
	{{0xC3, 0x24}},
	{{0xC4, 0x25}},
	{{0xC5, 0x31}},
	{{0xC6, 0x2A}},
	{{0xC7, 0x2D}},
	{{0xC8, 0x33}},
	{{0xC9, 0x37}},
	{{0xCA, 0x3F}},
	{{0xCB, 0x3F}},
	{{0xCC, 0x3F}},
	{{0xCD, 0x2D}},
	{{0xCE, 0x2E}},
	{{0xCF, 0x29}},
	{{0xD0, 0x04}},
	{{0xD2, 0x00}},
	{{0xD3, 0x14}},
	{{0xD4, 0x14}},
	{{0xD5, 0x26}},
	{{0xD6, 0x2D}},
	{{0xD7, 0x31}},
	{{0xD8, 0x38}},
	{{0xD9, 0x3D}},
	{{0xDA, 0x3F}},
	{{0xDB, 0x3F}},
	{{0xDC, 0x3F}},
	{{0xDD, 0x3F}},
	{{0xDE, 0x3F}},
	{{0xDF, 0x38}},
	{{0xE0, 0x35}},
	{{0xE1, 0x2D}},
	{{0xE2, 0x0A}},
	{{0xB0, 0x06}},
	{{0xB8, 0xA5}},
	{{0xBC, 0x33}},
	{{0xB0, 0x07}},
	{{0xB2, 0x04}},
	{{0xB3, 0x0C}},
	{{0xB4, 0x1C}},
	{{0xB5, 0x2C}},
	{{0xB6, 0x3C}},
	{{0xB7, 0x5C}},
	{{0xB8, 0x7C}},
	{{0xB9, 0xBC}},
	{{0xBA, 0xF5}},
	{{0xBB, 0x74}},
	{{0xBC, 0xEF}},
	{{0xBD, 0xF1}},
	{{0xBE, 0x6B}},
	{{0xBF, 0xE3}},
	{{0xCB, 0x05}},
	{{0xCC, 0x6B}},
	{{0xC0, 0x20}},
	{{0xC1, 0x6A}},
	{{0xC2, 0x8A}},
	{{0xC3, 0xA6}},
	{{0xC4, 0xB5}},
	{{0xC5, 0xC6}},
	{{0xC6, 0xDA}},
	{{0xC7, 0xE4}},
	{{0xC8, 0xE8}},
	{{0xB0, 0x08}},
	{{0xB2, 0x04}},
	{{0xB3, 0x0C}},
	{{0xB4, 0x1C}},
	{{0xB5, 0x2C}},
	{{0xB6, 0x3C}},
	{{0xB7, 0x5C}},
	{{0xB8, 0x7C}},
	{{0xB9, 0xBC}},
	{{0xBA, 0xFF}},
	{{0xBB, 0x81}},
	{{0xBC, 0x01}},
	{{0xBD, 0x03}},
	{{0xBE, 0x82}},
	{{0xBF, 0x02}},
	{{0xCB, 0x06}},
	{{0xCC, 0xAF}},
	{{0xC0, 0x41}},
	{{0xC1, 0x87}},
	{{0xC2, 0xA5}},
	{{0xC3, 0xC2}},
	{{0xC4, 0xD2}},
	{{0xC5, 0xE4}},
	{{0xC6, 0xF7}},
	{{0xC7, 0xFC}},
	{{0xC8, 0xFC}},
	{{0xB0, 0x09}},
	{{0xB2, 0x04}},
	{{0xB3, 0x0C}},
	{{0xB4, 0x1C}},
	{{0xB5, 0x2C}},
	{{0xB6, 0x3C}},
	{{0xB7, 0x5C}},
	{{0xB8, 0x7C}},
	{{0xB9, 0xB7}},
	{{0xBA, 0xFD}},
	{{0xBB, 0x83}},
	{{0xBC, 0x05}},
	{{0xBD, 0x07}},
	{{0xBE, 0x86}},
	{{0xBF, 0xFE}},
	{{0xCB, 0x06}},
	{{0xCC, 0xAB}},
	{{0xC0, 0x40}},
	{{0xC1, 0x87}},
	{{0xC2, 0xA2}},
	{{0xC3, 0xBC}},
	{{0xC4, 0xCC}},
	{{0xC5, 0xDD}},
	{{0xC6, 0xF2}},
	{{0xC7, 0xF8}},
	{{0xC8, 0xFA}},
	{{0xB0, 0x0A}},
	{{0xB2, 0x04}},
	{{0xB3, 0x0C}},
	{{0xB4, 0x1C}},
	{{0xB5, 0x2C}},
	{{0xB6, 0x3C}},
	{{0xB7, 0x5C}},
	{{0xB8, 0x7C}},
	{{0xB9, 0xBC}},
	{{0xBA, 0xF5}},
	{{0xBB, 0x74}},
	{{0xBC, 0xEF}},
	{{0xBD, 0xF1}},
	{{0xBE, 0x6B}},
	{{0xBF, 0xE3}},
	{{0xCB, 0x05}},
	{{0xCC, 0x6B}},
	{{0xC0, 0x20}},
	{{0xC1, 0x6A}},
	{{0xC2, 0x8A}},
	{{0xC3, 0xA6}},
	{{0xC4, 0xB5}},
	{{0xC5, 0xC6}},
	{{0xC6, 0xCA}},
	{{0xC7, 0xE4}},
	{{0xC8, 0xE8}},
	{{0xB0, 0x0B}},
	{{0xB2, 0x04}},
	{{0xB3, 0x0C}},
	{{0xB4, 0x1C}},
	{{0xB5, 0x2C}},
	{{0xB6, 0x3C}},
	{{0xB7, 0x5C}},
	{{0xB8, 0x7C}},
	{{0xB9, 0xBC}},
	{{0xBA, 0xFF}},
	{{0xBB, 0x81}},
	{{0xBC, 0x01}},
	{{0xBD, 0x03}},
	{{0xBE, 0x82}},
	{{0xBF, 0xFE}},
	{{0xCB, 0x06}},
	{{0xCC, 0xAB}},
	{{0xC0, 0x41}},
	{{0xC1, 0x87}},
	{{0xC2, 0xA5}},
	{{0xC3, 0xC2}},
	{{0xC4, 0xD2}},
	{{0xC5, 0xE4}},
	{{0xC6, 0xF7}},
	{{0xC7, 0xFC}},
	{{0xC8, 0xFC}},
	{{0xB0, 0x0C}},
	{{0xB2, 0x04}},
	{{0xB3, 0x0C}},
	{{0xB4, 0x1C}},
	{{0xB5, 0x2C}},
	{{0xB6, 0x3C}},
	{{0xB7, 0x5C}},
	{{0xB8, 0x7C}},
	{{0xB9, 0xB7}},
	{{0xBA, 0xFD}},
	{{0xBB, 0x83}},
	{{0xBC, 0x05}},
	{{0xBD, 0x07}},
	{{0xBE, 0x86}},
	{{0xBF, 0x00}},
	{{0xCB, 0x06}},
	{{0xCC, 0xAF}},
	{{0xC0, 0x40}},
	{{0xC1, 0x87}},
	{{0xC2, 0xA2}},
	{{0xC3, 0xBC}},
	{{0xC4, 0xCC}},
	{{0xC5, 0xDD}},
	{{0xC6, 0xF2}},
	{{0xC7, 0xF8}},
	{{0xC8, 0xFA}},
	{{0xB0, 0x04}},
	{{0xC1, 0x02}},
};

struct mipi_cmd SEQ_CMD_TABLE_CPT[] = {
	{{0xB0, 0x00}},
	{{0xF9, 0x5C}},
	{{0xCC, 0x00}},
	{{0xB6, 0x00}},
	{{0xBF, 0x1F}},
	{{0xC0, 0x0B}},
	{{0xC2, 0x00}},
	{{0xC3, 0x02}},
	{{0xC4, 0x00}},
	{{0xC5, 0x02}},
	{{0xB0, 0x01}},
	{{0xC0, 0x26}},
	{{0xC1, 0x00}},
	{{0xC2, 0x12}},
	{{0xC3, 0x24}},
	{{0xC4, 0x22}},
	{{0xC5, 0x0C}},
	{{0xC6, 0x20}},
	{{0xC7, 0x0A}},
	{{0xC8, 0x1E}},
	{{0xC9, 0x08}},
	{{0xCA, 0x1C}},
	{{0xCB, 0x06}},
	{{0xCC, 0x02}},
	{{0xCD, 0x18}},
	{{0xCE, 0x0E}},
	{{0xCF, 0x10}},
	{{0xD0, 0x00}},
	{{0xD1, 0x00}},
	{{0xD2, 0x00}},
	{{0xD3, 0x00}},
	{{0xD4, 0x26}},
	{{0xD5, 0x00}},
	{{0xD6, 0x11}},
	{{0xD7, 0x23}},
	{{0xD8, 0x21}},
	{{0xD9, 0x0B}},
	{{0xDA, 0x1F}},
	{{0xDB, 0x09}},
	{{0xDC, 0x1D}},
	{{0xDD, 0x07}},
	{{0xDE, 0x1B}},
	{{0xDF, 0x05}},
	{{0xE0, 0x01}},
	{{0xE1, 0x17}},
	{{0xE2, 0x0D}},
	{{0xE3, 0x0F}},
	{{0xE4, 0x00}},
	{{0xE5, 0x00}},
	{{0xE6, 0x00}},
	{{0xE7, 0x00}},
	{{0xB0, 0x02}},
	{{0xC0, 0x00}},
	{{0xC1, 0x09}},
	{{0xC2, 0x11}},
	{{0xC3, 0x1F}},
	{{0xC4, 0x1D}},
	{{0xC5, 0x1E}},
	{{0xC6, 0x1F}},
	{{0xC7, 0x21}},
	{{0xC8, 0x23}},
	{{0xC9, 0x24}},
	{{0xCA, 0x26}},
	{{0xCB, 0x28}},
	{{0xCC, 0x2C}},
	{{0xCD, 0x27}},
	{{0xCE, 0x28}},
	{{0xCF, 0x2B}},
	{{0xD0, 0x07}},
	{{0xD2, 0x00}},
	{{0xD3, 0x09}},
	{{0xD4, 0x11}},
	{{0xD5, 0x1F}},
	{{0xD6, 0x1D}},
	{{0xD7, 0x1E}},
	{{0xD8, 0x1F}},
	{{0xD9, 0x21}},
	{{0xDA, 0x23}},
	{{0xDB, 0x24}},
	{{0xDC, 0x26}},
	{{0xDD, 0x28}},
	{{0xDE, 0x2C}},
	{{0xDF, 0x27}},
	{{0xE0, 0x28}},
	{{0xE1, 0x2B}},
	{{0xE2, 0x07}},
	{{0xB0, 0x03}},
	{{0xB9, 0x40}},
	{{0xBE, 0x04}},
	{{0xCC, 0x88}},
	{{0xC8, 0x0F}},
	{{0xC9, 0x07}},
	{{0xCF, 0x60}},
	{{0xD2, 0x08}},
	{{0xD3, 0x08}},
	{{0xDB, 0x00}},
	{{0xC3, 0x01}},
	{{0xC5, 0x26}},
	{{0xDE, 0x26}},
	{{0xE7, 0x01}},
	{{0xCD, 0x01}},
	{{0xCE, 0x33}},
	{{0xD4, 0x00}},
	{{0xD5, 0x01}},
	{{0xD6, 0x04}},
	{{0xD9, 0x06}},
	{{0xD7, 0x03}},
	{{0xCA, 0x40}},
	{{0xB0, 0x05}},
	{{0xB3, 0x52}},
	{{0xB0, 0x06}},
	{{0xB8, 0xA5}},
	{{0xBC, 0x00}},
	{{0xC0, 0xA5}},
	{{0xC7, 0x0F}},
	{{0xD5, 0x32}},
	{{0xB0, 0x07}},
	{{0xB1, 0x00}},
	{{0xB2, 0x04}},
	{{0xB3, 0x0C}},
	{{0xB4, 0x1C}},
	{{0xB5, 0x2C}},
	{{0xB6, 0x3C}},
	{{0xB7, 0x5C}},
	{{0xB8, 0x7C}},
	{{0xB9, 0xBC}},
	{{0xBA, 0xFC}},
	{{0xBB, 0x7C}},
	{{0xBC, 0xFC}},
	{{0xBD, 0x00}},
	{{0xBE, 0x80}},
	{{0xBF, 0x00}},
	{{0xC0, 0x40}},
	{{0xC1, 0x80}},
	{{0xC2, 0xA0}},
	{{0xC3, 0xC0}},
	{{0xC4, 0xD0}},
	{{0xC5, 0xE0}},
	{{0xC6, 0xF0}},
	{{0xC7, 0xF8}},
	{{0xC8, 0xFC}},
	{{0xC9, 0x00}},
	{{0xCA, 0x00}},
	{{0xCB, 0x05}},
	{{0xCC, 0xAF}},
	{{0xCD, 0xFF}},
	{{0xCE, 0xFF}},
	{{0xB0, 0x08}},
	{{0xB1, 0x00}},
	{{0xB2, 0x04}},
	{{0xB3, 0x0C}},
	{{0xB4, 0x1C}},
	{{0xB5, 0x2C}},
	{{0xB6, 0x3C}},
	{{0xB7, 0x5C}},
	{{0xB8, 0x7C}},
	{{0xB9, 0xBC}},
	{{0xBA, 0xFC}},
	{{0xBB, 0x7C}},
	{{0xBC, 0xFC}},
	{{0xBD, 0x00}},
	{{0xBE, 0x80}},
	{{0xBF, 0x00}},
	{{0xC0, 0x40}},
	{{0xC1, 0x80}},
	{{0xC2, 0xA0}},
	{{0xC3, 0xC0}},
	{{0xC4, 0xD0}},
	{{0xC5, 0xE0}},
	{{0xC6, 0xF0}},
	{{0xC7, 0xF8}},
	{{0xC8, 0xFC}},
	{{0xC9, 0x00}},
	{{0xCA, 0x00}},
	{{0xCB, 0x05}},
	{{0xCC, 0xAF}},
	{{0xCD, 0xFF}},
	{{0xCE, 0xFF}},
	{{0xB0, 0x09}},
	{{0xB1, 0x00}},
	{{0xB2, 0x04}},
	{{0xB3, 0x0C}},
	{{0xB4, 0x1C}},
	{{0xB5, 0x2C}},
	{{0xB6, 0x3C}},
	{{0xB7, 0x5C}},
	{{0xB8, 0x7C}},
	{{0xB9, 0xBC}},
	{{0xBA, 0xFC}},
	{{0xBB, 0x7C}},
	{{0xBC, 0xFC}},
	{{0xBD, 0x00}},
	{{0xBE, 0x80}},
	{{0xBF, 0x00}},
	{{0xC0, 0x40}},
	{{0xC1, 0x80}},
	{{0xC2, 0xA0}},
	{{0xC3, 0xC0}},
	{{0xC4, 0xD0}},
	{{0xC5, 0xE0}},
	{{0xC6, 0xF0}},
	{{0xC7, 0xF8}},
	{{0xC8, 0xFC}},
	{{0xC9, 0x00}},
	{{0xCA, 0x00}},
	{{0xCB, 0x05}},
	{{0xCC, 0xAF}},
	{{0xCD, 0xFF}},
	{{0xCE, 0xFF}},
	{{0xB0, 0x0A}},
	{{0xB1, 0x00}},
	{{0xB2, 0x04}},
	{{0xB3, 0x0C}},
	{{0xB4, 0x1C}},
	{{0xB5, 0x2C}},
	{{0xB6, 0x3C}},
	{{0xB7, 0x5C}},
	{{0xB8, 0x7C}},
	{{0xB9, 0xBC}},
	{{0xBA, 0xFC}},
	{{0xBB, 0x7C}},
	{{0xBC, 0xFC}},
	{{0xBD, 0x00}},
	{{0xBE, 0x80}},
	{{0xBF, 0x00}},
	{{0xC0, 0x40}},
	{{0xC1, 0x80}},
	{{0xC2, 0xA0}},
	{{0xC3, 0xC0}},
	{{0xC4, 0xD0}},
	{{0xC5, 0xE0}},
	{{0xC6, 0xF0}},
	{{0xC7, 0xF8}},
	{{0xC8, 0xFC}},
	{{0xC9, 0x00}},
	{{0xCA, 0x00}},
	{{0xCB, 0x05}},
	{{0xCC, 0xAF}},
	{{0xCD, 0xFF}},
	{{0xCE, 0xFF}},
	{{0xB0, 0x0B}},
	{{0xB1, 0x00}},
	{{0xB2, 0x04}},
	{{0xB3, 0x0C}},
	{{0xB4, 0x1C}},
	{{0xB5, 0x2C}},
	{{0xB6, 0x3C}},
	{{0xB7, 0x5C}},
	{{0xB8, 0x7C}},
	{{0xB9, 0xBC}},
	{{0xBA, 0xFC}},
	{{0xBB, 0x7C}},
	{{0xBC, 0xFC}},
	{{0xBD, 0x00}},
	{{0xBE, 0x80}},
	{{0xBF, 0x00}},
	{{0xC0, 0x40}},
	{{0xC1, 0x80}},
	{{0xC2, 0xA0}},
	{{0xC3, 0xC0}},
	{{0xC4, 0xD0}},
	{{0xC5, 0xE0}},
	{{0xC6, 0xF0}},
	{{0xC7, 0xF8}},
	{{0xC8, 0xFC}},
	{{0xC9, 0x00}},
	{{0xCA, 0x00}},
	{{0xCB, 0x05}},
	{{0xCC, 0xAF}},
	{{0xCD, 0xFF}},
	{{0xCE, 0xFF}},
	{{0xB0, 0x0C}},
	{{0xB1, 0x00}},
	{{0xB2, 0x04}},
	{{0xB3, 0x0C}},
	{{0xB4, 0x1C}},
	{{0xB5, 0x2C}},
	{{0xB6, 0x3C}},
	{{0xB7, 0x5C}},
	{{0xB8, 0x7C}},
	{{0xB9, 0xBC}},
	{{0xBA, 0xFC}},
	{{0xBB, 0x7C}},
	{{0xBC, 0xFC}},
	{{0xBD, 0x00}},
	{{0xBE, 0x80}},
	{{0xBF, 0x00}},
	{{0xC0, 0x40}},
	{{0xC1, 0x80}},
	{{0xC2, 0xA0}},
	{{0xC3, 0xC0}},
	{{0xC4, 0xD0}},
	{{0xC5, 0xE0}},
	{{0xC6, 0xF0}},
	{{0xC7, 0xF8}},
	{{0xC8, 0xFC}},
	{{0xC9, 0x00}},
	{{0xCA, 0x00}},
	{{0xCB, 0x05}},
	{{0xCC, 0xAF}},
	{{0xCD, 0xFF}},
	{{0xCE, 0xFF}},
	{{0xB0, 0x04}},
	{{0xC1, 0x02}},
};

struct mipi_cmd SEQ_CMD_TABLE_BOE2[] = {
	{{0xB0, 0x00}},
	{{0xB6, 0x03}},
	{{0xBA, 0x87}},
	{{0xBF, 0x15}},
	{{0xC0, 0x0F}},
	{{0xC2, 0x0C}},
	{{0xC3, 0x02}},
	{{0xC4, 0x0C}},
	{{0xC5, 0x02}},
	{{0xB0, 0x01}},
	{{0xE0, 0x26}},
	{{0xE1, 0x26}},
	{{0xDC, 0x00}},
	{{0xDD, 0x00}},
	{{0xCC, 0x26}},
	{{0xCD, 0x26}},
	{{0xC8, 0x00}},
	{{0xC9, 0x00}},
	{{0xD2, 0x03}},
	{{0xD3, 0x03}},
	{{0xE6, 0x04}},
	{{0xE7, 0x04}},
	{{0xC4, 0x09}},
	{{0xC5, 0x09}},
	{{0xD8, 0x0A}},
	{{0xD9, 0x0A}},
	{{0xC2, 0x0B}},
	{{0xC3, 0x0B}},
	{{0xD6, 0x0C}},
	{{0xD7, 0x0C}},
	{{0xC0, 0x05}},
	{{0xC1, 0x05}},
	{{0xD4, 0x06}},
	{{0xD5, 0x06}},
	{{0xCA, 0x07}},
	{{0xCB, 0x07}},
	{{0xDE, 0x08}},
	{{0xDF, 0x08}},
	{{0xB0, 0x03}},
	{{0xC8, 0x0B}},
	{{0xC9, 0x07}},
	{{0xC3, 0x00}},
	{{0xE7, 0x00}},
	{{0xC5, 0x2A}},
	{{0xDE, 0x2A}},
	{{0xCA, 0x43}},
	{{0xC9, 0x07}},
	{{0xE4, 0xC0}},
	{{0xE5, 0x0D}},
	{{0xCB, 0x28}},
	{{0xB0, 0x05}},
	{{0xB3, 0x52}},
	{{0xB0, 0x06}},
	{{0xB8, 0xA5}},
	{{0xC0, 0xA5}},
	{{0xC7, 0x0F}},
	{{0xD5, 0x32}},
	{{0xB0, 0x02}},
	{{0xC0, 0x00}},
	{{0xC1, 0x07}},
	{{0xC2, 0x10}},
	{{0xC3, 0x1F}},
	{{0xC4, 0x32}},
	{{0xC5, 0x35}},
	{{0xC6, 0x38}},
	{{0xC7, 0x3A}},
	{{0xC8, 0x3E}},
	{{0xC9, 0x3F}},
	{{0xCA, 0x3F}},
	{{0xCB, 0x3F}},
	{{0xCC, 0x3F}},
	{{0xCD, 0x37}},
	{{0xCE, 0x36}},
	{{0xCF, 0x34}},
	{{0xD0, 0x07}},
	{{0xD2, 0x00}},
	{{0xD3, 0x07}},
	{{0xD4, 0x10}},
	{{0xD5, 0x1F}},
	{{0xD6, 0x32}},
	{{0xD7, 0x35}},
	{{0xD8, 0x38}},
	{{0xD9, 0x3A}},
	{{0xDA, 0x3E}},
	{{0xDB, 0x3F}},
	{{0xDC, 0x3F}},
	{{0xDD, 0x3F}},
	{{0xDE, 0x3F}},
	{{0xDF, 0x37}},
	{{0xE0, 0x36}},
	{{0xE1, 0x34}},
	{{0xE2, 0x07}},
	{{0xB0, 0x06}},
	{{0xB8, 0xA5}},
	{{0xBC, 0x33}},
	{{0xB0, 0x07}},
	{{0xB1, 0x08}},
	{{0xB2, 0x08}},
	{{0xB3, 0x11}},
	{{0xB4, 0x24}},
	{{0xB5, 0x37}},
	{{0xB6, 0x48}},
	{{0xB7, 0x60}},
	{{0xB8, 0x79}},
	{{0xB9, 0xB9}},
	{{0xBA, 0xF8}},
	{{0xBB, 0x71}},
	{{0xBC, 0xE9}},
	{{0xBD, 0xED}},
	{{0xBE, 0x67}},
	{{0xBF, 0xE4}},
	{{0xCB, 0x05}},
	{{0xCC, 0x6B}},
	{{0xC0, 0x25}},
	{{0xC1, 0x63}},
	{{0xC2, 0x84}},
	{{0xC3, 0x9C}},
	{{0xC4, 0xA6}},
	{{0xC5, 0xB1}},
	{{0xC6, 0xBD}},
	{{0xC7, 0xC4}},
	{{0xC8, 0xC8}},
	{{0xB0, 0x08}},
	{{0xB1, 0x04}},
	{{0xB2, 0x06}},
	{{0xB3, 0x11}},
	{{0xB4, 0x24}},
	{{0xB5, 0x38}},
	{{0xB6, 0x49}},
	{{0xB7, 0x61}},
	{{0xB8, 0x79}},
	{{0xB9, 0xB9}},
	{{0xBA, 0xF8}},
	{{0xBB, 0x71}},
	{{0xBC, 0xEA}},
	{{0xBD, 0xED}},
	{{0xBE, 0x68}},
	{{0xBF, 0xE5}},
	{{0xCB, 0x05}},
	{{0xCC, 0x6B}},
	{{0xC0, 0x26}},
	{{0xC1, 0x64}},
	{{0xC2, 0x85}},
	{{0xC3, 0x9C}},
	{{0xC4, 0xA7}},
	{{0xC5, 0xB1}},
	{{0xC6, 0xBD}},
	{{0xC7, 0xC4}},
	{{0xC8, 0xC8}},
	{{0xB0, 0x09}},
	{{0xB1, 0x0C}},
	{{0xB2, 0x0C}},
	{{0xB3, 0x0F}},
	{{0xB4, 0x23}},
	{{0xB5, 0x37}},
	{{0xB6, 0x48}},
	{{0xB7, 0x60}},
	{{0xB8, 0x77}},
	{{0xB9, 0xB8}},
	{{0xBA, 0xF7}},
	{{0xBB, 0x6F}},
	{{0xBC, 0xE6}},
	{{0xBD, 0xEA}},
	{{0xBE, 0x62}},
	{{0xBF, 0xDA}},
	{{0xCB, 0x05}},
	{{0xCC, 0x6B}},
	{{0xC0, 0x1A}},
	{{0xC1, 0x56}},
	{{0xC2, 0x75}},
	{{0xC3, 0x91}},
	{{0xC4, 0x9C}},
	{{0xC5, 0xA5}},
	{{0xC6, 0xAF}},
	{{0xC7, 0xB5}},
	{{0xC8, 0xB8}},
	{{0xB0, 0x0A}},
	{{0xB1, 0x08}},
	{{0xB2, 0x08}},
	{{0xB3, 0x11}},
	{{0xB4, 0x24}},
	{{0xB5, 0x37}},
	{{0xB6, 0x48}},
	{{0xB7, 0x60}},
	{{0xB8, 0x79}},
	{{0xB9, 0xB9}},
	{{0xBA, 0xF8}},
	{{0xBB, 0x71}},
	{{0xBC, 0xE9}},
	{{0xBD, 0xED}},
	{{0xBE, 0x67}},
	{{0xBF, 0xE4}},
	{{0xCB, 0x05}},
	{{0xCC, 0x6B}},
	{{0xC0, 0x25}},
	{{0xC1, 0x63}},
	{{0xC2, 0x84}},
	{{0xC3, 0x9C}},
	{{0xC4, 0xA6}},
	{{0xC5, 0xB1}},
	{{0xC6, 0xBD}},
	{{0xC7, 0xC4}},
	{{0xC8, 0xC8}},
	{{0xB0, 0x0B}},
	{{0xB1, 0x04}},
	{{0xB2, 0x06}},
	{{0xB3, 0x11}},
	{{0xB4, 0x24}},
	{{0xB5, 0x38}},
	{{0xB6, 0x49}},
	{{0xB7, 0x61}},
	{{0xB8, 0x79}},
	{{0xB9, 0xB9}},
	{{0xBA, 0xF8}},
	{{0xBB, 0x71}},
	{{0xBC, 0xEA}},
	{{0xBD, 0xED}},
	{{0xBE, 0x68}},
	{{0xBF, 0xE5}},
	{{0xCB, 0x05}},
	{{0xCC, 0x6B}},
	{{0xC0, 0x26}},
	{{0xC1, 0x64}},
	{{0xC2, 0x85}},
	{{0xC3, 0x9C}},
	{{0xC4, 0xA7}},
	{{0xC5, 0xB1}},
	{{0xC6, 0xBD}},
	{{0xC7, 0xC4}},
	{{0xC8, 0xC8}},
	{{0xB0, 0x0C}},
	{{0xB1, 0x0C}},
	{{0xB2, 0x0C}},
	{{0xB3, 0x0F}},
	{{0xB4, 0x23}},
	{{0xB5, 0x37}},
	{{0xB6, 0x48}},
	{{0xB7, 0x60}},
	{{0xB8, 0x77}},
	{{0xB9, 0xB8}},
	{{0xBA, 0xF7}},
	{{0xBB, 0x6F}},
	{{0xBC, 0xE6}},
	{{0xBD, 0xEA}},
	{{0xBE, 0x62}},
	{{0xBF, 0xDA}},
	{{0xCB, 0x05}},
	{{0xCC, 0x6B}},
	{{0xC0, 0x1A}},
	{{0xC1, 0x56}},
	{{0xC2, 0x75}},
	{{0xC3, 0x91}},
	{{0xC4, 0x9C}},
	{{0xC5, 0xA5}},
	{{0xC6, 0xAF}},
	{{0xC7, 0xB5}},
	{{0xC8, 0xB8}},

};

static const struct mipi_cmd SEQ_CMD_TABLE_BL[] = {
	{{0xB0, 0x04}}, // page4 is for CABC
	{{0xB5, 0x02}}, // Freq = 8Khz
	{{0xB6, 0x02}},
};

static unsigned char SEQ_SLEEP_IN[] = {
	0xB2, 0x00
};

static unsigned char SEQ_TABLE_0[] = {
	0xB0, 0x00
};

static unsigned char SEQ_TABLE_4[] = {
	0xB0, 0x04
};

static unsigned char SEQ_TABLE_5[] = {
	0xB0, 0x05
};

static unsigned char SEQ_EOTP_DISABLE[] = {
	0xB1, 0xE5
};

static const unsigned char SEQ_TLPX_80NS[] = {
	0xB3, 0x32
};

static unsigned char SEQ_DISPLAY_ON[] = {
	0xB3, 0x08
};

static unsigned char SEQ_DISPLAY_OFF[] = {
	0xB3, 0x8C // Display off, BL off
};

static unsigned char SEQ_SCREEN_OFF[] = {
	0xB3, 0x88 // Display off
};

static unsigned char SEQ_BL_00[] = {
	0xB8, 0x00 // BL off
};

static const struct mipi_cmd SEQ_CMD_TP_3[] = {
	{{0xB0, 0x06}},
	{{0xB8, 0xA5}},
	{{0xC0, 0xA5}},
	{{0xCA, 0x0C}},
	{{0xCF, 0x1B}},
	{{0xD6, 0x03}},
};

static const struct mipi_cmd SEQ_CMD_TP_4[] = {
	{{0xB0, 0x06}},
	{{0xB8, 0xA5}},
	{{0xC0, 0xA5}},
	{{0xCA, 0x0C}},
	{{0xCF, 0x1B}},
	{{0xD6, 0x04}},
};

#endif /* __HX8279D_PARAM_H__ */

