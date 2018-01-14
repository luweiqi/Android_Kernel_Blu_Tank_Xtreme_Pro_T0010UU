#ifndef __LCD_NT35521_DSI_HD_F6_H__
#define __LCD_NT35521_DSI_HD_F6_H__

#if defined(DROI_PRO_F6_G2)
//#define SUPORT_ADC_CHECK
#define TYD_LCD_USE_CUSTOM_NT35521_HD
#endif

#if defined(DROI_PRO_F6_G2)
static struct LCM_setting_table lcm_initialization_setting[] = {
	// NT35521S-M_BOE5.0_HD ONCELL_Iinitial code_3Gamma22_20151125
	{0xFF,4,{0xAA,0x55,0x25,0x01}},
	{0x6F,1,{0x03}},
	{0xF4,1,{0x60}},
	{0x6F,1,{0x06}},
	{0xF4,1,{0x01}},
	{0x6F,1,{0x21}},
	{0xF7,1,{0x01}},
	{REGFLAG_DELAY, 1, {}},
	{0x6F,1,{0x21}},
	{0xF7,1,{0x00}},
	{0xFC,1,{0x08}},
	{REGFLAG_DELAY, 1, {}},
	{0xFC,1,{0x00}},
	//{0x6F,1,{0x16}}, //3 lane
	//{0xF7,1,{0x10}},
	{0xFF,4,{0xAA,0x55,0x25,0x00}},

	{0xFF,4,{0xAA,0x55,0xA5,0x80}},
	{0x6F,2,{0x11,0x00}},
	{0xF7,2,{0x20,0x00}},
	{0x6F,1,{0x06}},
	{0xF7,1,{0xA0}},
	{0x6F,1,{0x19}},
	{0xF7,1,{0x12}},
	{0x6F,1,{0x02}},
	{0xF7,1,{0x47}},
	{0x6F,1,{0x17}},
	{0xF4,1,{0x70}},
	{0x6F,1,{0x01}},
	{0xF9,1,{0x46}},

	{0xF0,5,{0x55,0xAA,0x52,0x08,0x00}},
	{0xBD,5,{0x01,0xA0,0x10,0x10,0x01}},
	{0xB8,4,{0x01,0x02,0x0C,0x02}},
	{0xBB,2,{0x11,0x11}},
	{0xBC,2,{0x00,0x00}},
	{0xB6,1,{0x04}},
	{0xC8,1,{0x80}},
	{0xD9,2,{0x01,0x01}},
	{0xD4,1,{0xC7}},
	{0xB1,2,{0x60,0x21}},

	{0xF0,5,{0x55,0xAA,0x52,0x08,0x01}},
	{0xB0,2,{0x09,0x09}},
	{0xB1,2,{0x09,0x09}},
	{0xBC,2,{0x90,0x00}},
	{0xBD,2,{0x90,0x00}},
	{0xBE,1,{0x4b}},
	{0xCA,1,{0x00}},
	{0xC0,1,{0x0C}},
	{0xB5,2,{0x03,0x03}},
	{0xB3,2,{0x19,0x19}},
	{0xB4,2,{0x19,0x19}},
	{0xB9,2,{0x26,0x26}},
	{0xBA,2,{0x14,0x14}},

	{0xF0,5,{0x55,0xAA,0x52,0x08,0x02}},
	//{0xEE,1,{0x01}},  //0x00==>3Gamma 0x01==>µ¥Gamma
	//3gama2.2//R(+) MCR cmd
	{0xB0,16,{0x00,0x0E,0x00,0x69,0x00,0x96,0x00,0xB5,0x00,0xD0,0x00,0xF4,0x01,0x11,0x01,0x3F}},
	{0xB1,16,{0x01,0x62,0x01,0x9C,0x01,0xC9,0x02,0x0E,0x02,0x44,0x02,0x48,0x02,0x74,0x02,0xA9}},
	{0xB2,16,{0x02,0xCB,0x02,0xF6,0x03,0x16,0x03,0x3F,0x03,0x5C,0x03,0x73,0x03,0x9B,0x03,0x9F}},
	{0xB3, 4,{0x03,0xD7,0x03,0xE8}},

	{0xB4,16,{0x00,0x05,0x00,0x50,0x00,0x8D,0x00,0xAD,0x00,0xC4,0x00,0xEB,0x01,0x09,0x01,0x39}},
	{0xB5,16,{0x01,0x5E,0x01,0x97,0x01,0xC4,0x02,0x08,0x02,0x3D,0x02,0x3E,0x02,0x70,0x02,0xA4}},
	{0xB6,16,{0x02,0xC5,0x02,0xF2,0x03,0x11,0x03,0x3B,0x03,0x58,0x03,0x6C,0x03,0x96,0x03,0xCA}},
	{0xB7, 4,{0x03,0xF5,0x03,0xF8}},

	{0xB8,16,{0x00,0x14,0x00,0x3B,0x00,0x6F,0x00,0x8E,0x00,0xA9,0x00,0xD1,0x00,0xF1,0x01,0x24}},
	{0xB9,16,{0x01,0x4C,0x01,0x8A,0x01,0xB9,0x02,0x03,0x02,0x3A,0x02,0x3B,0x02,0x6E,0x02,0xA4}},
	{0xBA,16,{0x02,0xC5,0x02,0xF4,0x03,0x16,0x03,0x4D,0x03,0x81,0x03,0xF9,0x03,0xFA,0x03,0xFB}},
	{0xBB, 4,{0x03,0xFD,0x03,0xFE}},

	{0xBC,16,{0x00,0x0E,0x00,0x69,0x00,0x96,0x00,0xB5,0x00,0xD0,0x00,0xF4,0x01,0x11,0x01,0x3F}},
	{0xBD,16,{0x01,0x62,0x01,0x9C,0x01,0xC9,0x02,0x0E,0x02,0x44,0x02,0x48,0x02,0x74,0x02,0xA9}},
	{0xBE,16,{0x02,0xCB,0x02,0xF6,0x03,0x16,0x03,0x3F,0x03,0x5C,0x03,0x73,0x03,0x9B,0x03,0x9F}},
	{0xBF, 4,{0x03,0xD7,0x03,0xE8}},

	{0xC0,16,{0x00,0x05,0x00,0x50,0x00,0x8D,0x00,0xAD,0x00,0xC4,0x00,0xEB,0x01,0x09,0x01,0x39}},
	{0xC1,16,{0x01,0x5E,0x01,0x97,0x01,0xC4,0x02,0x08,0x02,0x3D,0x02,0x3E,0x02,0x70,0x02,0xA4}},
	{0xC2,16,{0x02,0xC5,0x02,0xF2,0x03,0x11,0x03,0x3B,0x03,0x58,0x03,0x6C,0x03,0x96,0x03,0xCA}},
	{0xC3, 4,{0x03,0xF5,0x03,0xF8}},

	{0xC4,16,{0x00,0x14,0x00,0x3B,0x00,0x6F,0x00,0x8E,0x00,0xA9,0x00,0xD1,0x00,0xF1,0x01,0x24}},
	{0xC5,16,{0x01,0x4C,0x01,0x8A,0x01,0xB9,0x02,0x03,0x02,0x3A,0x02,0x3B,0x02,0x6E,0x02,0xA4}},
	{0xC6,16,{0x02,0xC5,0x02,0xF4,0x03,0x16,0x03,0x4D,0x03,0x81,0x03,0xF9,0x03,0xFA,0x03,0xFB}},
	{0xC7, 4,{0x03,0xFD,0x03,0xFE}},

	{0xF0,5,{0x55,0xAA,0x52,0x08,0x06}},
	{0xB0,2,{0x31,0x2E}},
	{0xB1,2,{0x10,0x12}},
	{0xB2,2,{0x16,0x18}},
	{0xB3,2,{0x31,0x31}},
	{0xB4,2,{0x31,0x34}},
	{0xB5,2,{0x34,0x34}},
	{0xB6,2,{0x34,0x34}},
	{0xB7,2,{0x34,0x34}},
	{0xB8,2,{0x33,0x2D}},
	{0xB9,2,{0x00,0x02}},
	{0xBA,2,{0x03,0x01}},
	{0xBB,2,{0x2D,0x33}},
	{0xBC,2,{0x34,0x34}},
	{0xBD,2,{0x34,0x34}},
	{0xBE,2,{0x34,0x34}},
	{0xBF,2,{0x34,0x31}},
	{0xC0,2,{0x31,0x31}},
	{0xC1,2,{0x19,0x17}},
	{0xC2,2,{0x13,0x11}},
	{0xC3,2,{0x2E,0x31}},
	{0xE5,2,{0x31,0x31}},
	{0xC4,2,{0x31,0x2D}},
	{0xC5,2,{0x19,0x17}},
	{0xC6,2,{0x13,0x11}},
	{0xC7,2,{0x31,0x31}},
	{0xC8,2,{0x31,0x34}},
	{0xC9,2,{0x34,0x34}},
	{0xCA,2,{0x34,0x34}},
	{0xCB,2,{0x34,0x34}},
	{0xCC,2,{0x33,0x2E}},
	{0xCD,2,{0x03,0x01}},
	{0xCE,2,{0x00,0x02}},
	{0xCF,2,{0x2E,0x33}},
	{0xD0,2,{0x34,0x34}},
	{0xD1,2,{0x34,0x34}},
	{0xD2,2,{0x34,0x34}},
	{0xD3,2,{0x34,0x31}},
	{0xD4,2,{0x31,0x31}},
	{0xD5,2,{0x10,0x12}},
	{0xD6,2,{0x16,0x18}},
	{0xD7,2,{0x2D,0x31}},
	{0xE6,2,{0x31,0x31}},
	{0xD8,5,{0x00,0x00,0x00,0x00,0x00}},
	{0xD9,5,{0x00,0x00,0x00,0x00,0x00}},
	{0xE7,1,{0x00}},

	{0xF0,5,{0x55,0xAA,0x52,0x08,0x05}},
	{0xED,1,{0x30}},
	{0xB0,2,{0x17,0x06}},
	{0xB8,1,{0x00}},
	{0xC0,1,{0x0D}},
	{0xC1,1,{0x0B}},
	{0xC2,1,{0x00}},
	{0xC3,1,{0x00}},
	{0xC4,1,{0x84}},
	{0xC5,1,{0x82}},
	{0xC6,1,{0x82}},
	{0xC7,1,{0x80}},
	{0xC8,2,{0x0B,0x20}},
	{0xC9,2,{0x07,0x20}},
	{0xCA,2,{0x01,0x10}},
	//{0xCB,2,{0x01,0x10}},
	{0xD1,5,{0x03,0x05,0x05,0x07,0x00}},
	{0xD2,5,{0x03,0x05,0x09,0x03,0x00}},
	{0xD3,5,{0x00,0x00,0x6A,0x07,0x10}},
	{0xD4,5,{0x30,0x00,0x6A,0x07,0x10}},

	{0xF0,5,{0x55,0xAA,0x52,0x08,0x03}},
	{0xB0,2,{0x00,0x00}},
	{0xB1,2,{0x00,0x00}},
	{0xB2,5,{0x05,0x01,0x13,0x00,0x00}},
	{0xB3,5,{0x05,0x01,0x13,0x00,0x00}},
	{0xB4,5,{0x05,0x01,0x13,0x00,0x00}},
	{0xB5,5,{0x05,0x01,0x13,0x00,0x00}},
	{0xB6,5,{0x02,0x01,0x13,0x00,0x00}},
	{0xB7,5,{0x02,0x01,0x13,0x00,0x00}},
	{0xB8,5,{0x02,0x01,0x13,0x00,0x00}},
	{0xB9,5,{0x02,0x01,0x13,0x00,0x00}},
	{0xBA,5,{0x53,0x01,0x13,0x00,0x00}},
	{0xBB,5,{0x53,0x01,0x13,0x00,0x00}},
	{0xBC,5,{0x53,0x01,0x13,0x00,0x00}},
	{0xBD,5,{0x53,0x01,0x13,0x00,0x00}},
	{0xC4,1,{0x60}},
	{0xC5,1,{0x40}},
	{0xC6,1,{0x64}},
	{0xC7,1,{0x44}},
	{0x6F,1,{0x11}},
	{0xF3,1,{0x01}},

	{0x35, 1, {0x00}},
	{0x11, 1, {0x00}},
	{REGFLAG_DELAY, 150, {}},
	{0x29, 1, {0x00}},
	{REGFLAG_DELAY, 50, {}},
	{REGFLAG_END_OF_TABLE, 0x00, {}}
};
#endif
#endif