#ifndef __LCD_NT35521_DSI_HD_TPS65132_F6_H__
#define __LCD_NT35521_DSI_HD_TPS65132_F6_H__

#if defined(DROI_PRO_F6_PUB) || defined(DROI_PRO_F6_YX)
//#define SUPORT_ADC_CHECK
#define DROI_LCD_USE_CUSTOM_NT35521_HD
#endif

#if defined(DROI_PRO_F6_PUB)
static struct LCM_setting_table lcm_initialization_setting[] = {
	//NT35521 GL5013 yaxing
	{0xFF,4,	{0xAA,0x55,0xA5,0x80}},
	{0x6F,2,	{0x11,0x00}},
	{0xF7,2,	{0x20,0x00}},
	{0x6F,1,	{0x06}},
	{0xF7,1,	{0xA0}},
	{0x6F,1,	{0x19}},
	{0xF7,1,	{0x12}},
	{0x6F,1,	{0x02}},
	{0xF7,1,	{0x47}},
	{0x6F,1,	{0x17}},
	{0xF4,1,	{0x70}},
	{0x6F,1,	{0x01}},
	{0xF9,1,	{0x46}},

	{0xF0,5,	{0x55,0xAA,0x52,0x08,0x00}},
	{0xBD,5,	{0x01,0xA0,0x10,0x10,0x01}},

	{0xB8,4,	{0x01,0x02,0x0C,0x02}},
	{0xBB,2,	{0x11,0x11}},
	{0xBC,2,	{0x00,0x00}},
	{0xB6,1,	{0x04}},
	{0xC8,1,	{0x80}},
	{0xD9,2,	{0x01,0x01}},
	{0xD4,1,	{0xC7}},

	{0xF0,5,	{0x55,0xAA,0x52,0x08,0x01}},
	{0xB0,2,	{0x09,0x09}},
	{0xB1,2,	{0x09,0x09}},
 	{0xBC,2,	{0x80,0x00}},
	{0xBD,2,	{0x80,0x00}},
	{0xCA,1,	{0x00}},
	{0xC0,1,	{0x0C}},
	{0xB5,2,	{0x03,0x03}},
	{0xBE,1,	{0x46}},
	{0xB3,2,	{0x19,0x19}},
	{0xB4,2,	{0x19,0x19}},
	{0xB9,2,	{0x26,0x26}},
	{0xBA,2,	{0x24,0x24}},

	{0xF0,5,	{0x55,0xAA,0x52,0x08,0x02}},
 	{0xEE,1,	{0x01}},

	{0xB0,16,	{0x00,0x43,0x00,0x4F,0x00,0x65,0x00,0x78,0x00,0x89,0x00,0xA7,0x00,0xBF,0x00,0xEB}},
	{0xB1,16,	{0x01,0x0F,0x01,0x49,0x01,0x77,0x01,0xC4,0x02,0x02,0x02,0x04,0x02,0x3C,0x02,0x7C}},
	{0xB2,16,	{0x02,0xA1,0x02,0xD5,0x02,0xF8,0x03,0x28,0x03,0x46,0x03,0x70,0x03,0x8B,0x03,0xAA}},
	{0xB3,4,	{0x03,0xDF,0x03,0xFF}},
	{0xC0,1,	{0x04}},

	{0xF0,5,	{0x55,0xAA,0x52,0x08,0x06}},
	{0xB0,2,	{0x10,0x12}},
	{0xB1,2,	{0x14,0x16}},
	{0xB2,2,	{0x00,0x02}},
	{0xB3,2,	{0x31,0x31}},
	{0xB4,2,	{0x31,0x34}},
	{0xB5,2,	{0x34,0x34}},
	{0xB6,2,	{0x34,0x31}},
	{0xB7,2,	{0x31,0x31}},
	{0xB8,2,	{0x31,0x31}},
	{0xB9,2,	{0x2D,0x2E}},
	{0xBA,2,	{0x2E,0x2D}},
	{0xBB,2,	{0x31,0x31}},
	{0xBC,2,	{0x31,0x31}},
	{0xBD,2,	{0x31,0x34}},
	{0xBE,2,	{0x34,0x34}},
	{0xBF,2,	{0x34,0x31}},
	{0xC0,2,	{0x31,0x31}},
	{0xC1,2,	{0x03,0x01}},
	{0xC2,2,	{0x17,0x15}},
	{0xC3,2,	{0x13,0x11}},
	{0xE5,2,	{0x31,0x31}},
	{0xC4,2,	{0x17,0x15}},
	{0xC5,2,	{0x13,0x11}},
	{0xC6,2,	{0x03,0x01}},
	{0xC7,2,	{0x31,0x31}},
	{0xC8,2,	{0x31,0x34}},
	{0xC9,2,	{0x34,0x34}},
	{0xCA,2,	{0x34,0x31}},
	{0xCB,2,	{0x31,0x31}},
	{0xCC,2,	{0x31,0x31}},
	{0xCD,2,	{0x2E,0x2D}},
	{0xCE,2,	{0x2D,0x2E}},
	{0xCF,2,	{0x31,0x31}},
	{0xD0,2,	{0x31,0x31}},
	{0xD1,2,	{0x31,0x34}},
	{0xD2,2,	{0x34,0x34}},
	{0xD3,2,	{0x34,0x31}},
	{0xD4,2,	{0x31,0x31}},
	{0xD5,2,	{0x00,0x02}},
	{0xD6,2,	{0x10,0x12}},
	{0xD7,2,	{0x14,0x16}},
	{0xE6,2,	{0x32,0x32}},
	{0xD8,5,	{0x00,0x00,0x00,0x00,0x00}},
	{0xD9,5,	{0x00,0x00,0x00,0x00,0x00}},
	{0xE7,1,	{0x00}},

	{0xF0,5,	{0x55,0xAA,0x52,0x08,0x05}},
	{0xED,1,	{0x30}},
	{0xB0,2,	{0x17,0x06}},
	{0xB8,1,	{0x00}},
	{0xC0,1,	{0x0D}},
	{0xC1,1,	{0x0B}},
	{0xC2,1,	{0x23}},
	{0xC3,1,	{0x40}},
	{0xC4,1,	{0x84}},
	{0xC5,1,	{0x82}},
	{0xC6,1,	{0x82}},
	{0xC7,1,	{0x80}},
	{0xC8,2,	{0x0B,0x30}},
	{0xC9,2,	{0x05,0x10}},
	{0xCA,2,	{0x01,0x10}},
	{0xCB,2,	{0x01,0x10}},
	{0xD1,5,	{0x03,0x05,0x05,0x07,0x00}},
	{0xD2,5,	{0x03,0x05,0x09,0x03,0x00}},
	{0xD3,5,	{0x00,0x00,0x6A,0x07,0x10}},
	{0xD4,5,	{0x30,0x00,0x6A,0x07,0x10}},

	{0xF0,5,	{0x55,0xAA,0x52,0x08,0x03}},
	{0xB0,2,	{0x00,0x00}},
	{0xB1,2,	{0x00,0x00}},
	{0xB2,5,	{0x05,0x00,0x0A,0x00,0x00}},
	{0xB3,5,	{0x05,0x00,0x0A,0x00,0x00}},
	{0xB4,5,	{0x05,0x00,0x0A,0x00,0x00}},
	{0xB5,5,	{0x05,0x00,0x0A,0x00,0x00}},
	{0xB6,5,	{0x02,0x00,0x0A,0x00,0x00}},
	{0xB7,5,	{0x02,0x00,0x0A,0x00,0x00}},
	{0xB8,5,	{0x02,0x00,0x0A,0x00,0x00}},
	{0xB9,5,	{0x02,0x00,0x0A,0x00,0x00}},
	{0xBA,5,	{0x53,0x00,0x0A,0x00,0x00}},
	{0xBB,5,	{0x53,0x00,0x0A,0x00,0x00}},
	{0xBC,5,	{0x53,0x00,0x0A,0x00,0x00}},
	{0xBD,5,	{0x53,0x00,0x0A,0x00,0x00}},
	{0xC4,1,	{0x60}},
	{0xC5,1,	{0x40}},
	{0xC6,1,	{0x64}},
	{0xC7,1,	{0x44}},

	{0x6F,1,	{0x11}},
	{0xF3,1,	{0x01}},

	{0x11,0,	{0}},
	{REGFLAG_DELAY, 150,  {0}},
	{0x29,0,	{0}},
	{REGFLAG_DELAY, 150,  {0}},
	{REGFLAG_END_OF_TABLE, 0x00, {}},
};
#endif
#if defined(DROI_PRO_F6_YX)
static struct LCM_setting_table lcm_initialization_setting[] = {
	//NT35521 GL5013 yaxing
	{0xFF,4,	{0xAA,0x55,0xA5,0x80}},
	{0x6F,2,	{0x11,0x00}},
	{0xF7,2,	{0x20,0x00}},
	{0x6F,1,	{0x06}},
	{0xF7,1,	{0xA0}},
	{0x6F,1,	{0x19}},
	{0xF7,1,	{0x12}},
	{0x6F,1,	{0x02}},
	{0xF7,1,	{0x47}},
	{0x6F,1,	{0x17}},
	{0xF4,1,	{0x70}},
	{0x6F,1,	{0x01}},
	{0xF9,1,	{0x46}},

	{0xF0,5,	{0x55,0xAA,0x52,0x08,0x00}},
	{0xBD,5,	{0x01,0xA0,0x10,0x10,0x01}},

	{0xB8,4,	{0x01,0x02,0x0C,0x02}},
	{0xBB,2,	{0x11,0x11}},
	{0xBC,2,	{0x00,0x00}},
	{0xB6,1,	{0x04}},
	{0xC8,1,	{0x80}},
	{0xD9,2,	{0x01,0x01}},
	{0xD4,1,	{0xC7}},

	{0xF0,5,	{0x55,0xAA,0x52,0x08,0x01}},
	{0xB0,2,	{0x09,0x09}},
	{0xB1,2,	{0x09,0x09}},
 	{0xBC,2,	{0x8f,0x00}},//80
	{0xBD,2,	{0x8f,0x00}},//80
	{0xCA,1,	{0x00}},
	{0xC0,1,	{0x0C}},
	{0xB5,2,	{0x03,0x03}},
	{0xBE,1,	{0x3a}},//46 52
	{0xB3,2,	{0x19,0x19}},
	{0xB4,2,	{0x19,0x19}},
	{0xB9,2,	{0x26,0x26}},
	{0xBA,2,	{0x24,0x24}},

	{0xF0,5,	{0x55,0xAA,0x52,0x08,0x02}},
 	{0xEE,1,	{0x01}},

	{0xB0,16,	{0x00,0x43,0x00,0x4F,0x00,0x65,0x00,0x78,0x00,0x89,0x00,0xA7,0x00,0xBF,0x00,0xEB}},
	{0xB1,16,	{0x01,0x0F,0x01,0x49,0x01,0x77,0x01,0xC4,0x02,0x02,0x02,0x04,0x02,0x3C,0x02,0x7C}},
	{0xB2,16,	{0x02,0xA1,0x02,0xD5,0x02,0xF8,0x03,0x28,0x03,0x46,0x03,0x70,0x03,0x8B,0x03,0xAA}},
	{0xB3,4,	{0x03,0xDF,0x03,0xFF}},
	{0xC0,1,	{0x04}},

	{0xF0,5,	{0x55,0xAA,0x52,0x08,0x06}},
	{0xB0,2,	{0x10,0x12}},
	{0xB1,2,	{0x14,0x16}},
	{0xB2,2,	{0x00,0x02}},
	{0xB3,2,	{0x31,0x31}},
	{0xB4,2,	{0x31,0x34}},
	{0xB5,2,	{0x34,0x34}},
	{0xB6,2,	{0x34,0x31}},
	{0xB7,2,	{0x31,0x31}},
	{0xB8,2,	{0x31,0x31}},
	{0xB9,2,	{0x2D,0x2E}},
	{0xBA,2,	{0x2E,0x2D}},
	{0xBB,2,	{0x31,0x31}},
	{0xBC,2,	{0x31,0x31}},
	{0xBD,2,	{0x31,0x34}},
	{0xBE,2,	{0x34,0x34}},
	{0xBF,2,	{0x34,0x31}},
	{0xC0,2,	{0x31,0x31}},
	{0xC1,2,	{0x03,0x01}},
	{0xC2,2,	{0x17,0x15}},
	{0xC3,2,	{0x13,0x11}},
	{0xE5,2,	{0x31,0x31}},
	{0xC4,2,	{0x17,0x15}},
	{0xC5,2,	{0x13,0x11}},
	{0xC6,2,	{0x03,0x01}},
	{0xC7,2,	{0x31,0x31}},
	{0xC8,2,	{0x31,0x34}},
	{0xC9,2,	{0x34,0x34}},
	{0xCA,2,	{0x34,0x31}},
	{0xCB,2,	{0x31,0x31}},
	{0xCC,2,	{0x31,0x31}},
	{0xCD,2,	{0x2E,0x2D}},
	{0xCE,2,	{0x2D,0x2E}},
	{0xCF,2,	{0x31,0x31}},
	{0xD0,2,	{0x31,0x31}},
	{0xD1,2,	{0x31,0x34}},
	{0xD2,2,	{0x34,0x34}},
	{0xD3,2,	{0x34,0x31}},
	{0xD4,2,	{0x31,0x31}},
	{0xD5,2,	{0x00,0x02}},
	{0xD6,2,	{0x10,0x12}},
	{0xD7,2,	{0x14,0x16}},
	{0xE6,2,	{0x32,0x32}},
	{0xD8,5,	{0x00,0x00,0x00,0x00,0x00}},
	{0xD9,5,	{0x00,0x00,0x00,0x00,0x00}},
	{0xE7,1,	{0x00}},

	{0xF0,5,	{0x55,0xAA,0x52,0x08,0x05}},
	{0xED,1,	{0x30}},
	{0xB0,2,	{0x17,0x06}},
	{0xB8,1,	{0x00}},
	{0xC0,1,	{0x0D}},
	{0xC1,1,	{0x0B}},
	{0xC2,1,	{0x23}},
	{0xC3,1,	{0x40}},
	{0xC4,1,	{0x84}},
	{0xC5,1,	{0x82}},
	{0xC6,1,	{0x82}},
	{0xC7,1,	{0x80}},
	{0xC8,2,	{0x0B,0x30}},
	{0xC9,2,	{0x05,0x10}},
	{0xCA,2,	{0x01,0x10}},
	{0xCB,2,	{0x01,0x10}},
	{0xD1,5,	{0x03,0x05,0x05,0x07,0x00}},
	{0xD2,5,	{0x03,0x05,0x09,0x03,0x00}},
	{0xD3,5,	{0x00,0x00,0x6A,0x07,0x10}},
	{0xD4,5,	{0x30,0x00,0x6A,0x07,0x10}},

	{0xF0,5,	{0x55,0xAA,0x52,0x08,0x03}},
	{0xB0,2,	{0x00,0x00}},
	{0xB1,2,	{0x00,0x00}},
	{0xB2,5,	{0x05,0x00,0x0A,0x00,0x00}},
	{0xB3,5,	{0x05,0x00,0x0A,0x00,0x00}},
	{0xB4,5,	{0x05,0x00,0x0A,0x00,0x00}},
	{0xB5,5,	{0x05,0x00,0x0A,0x00,0x00}},
	{0xB6,5,	{0x02,0x00,0x0A,0x00,0x00}},
	{0xB7,5,	{0x02,0x00,0x0A,0x00,0x00}},
	{0xB8,5,	{0x02,0x00,0x0A,0x00,0x00}},
	{0xB9,5,	{0x02,0x00,0x0A,0x00,0x00}},
	{0xBA,5,	{0x53,0x00,0x0A,0x00,0x00}},
	{0xBB,5,	{0x53,0x00,0x0A,0x00,0x00}},
	{0xBC,5,	{0x53,0x00,0x0A,0x00,0x00}},
	{0xBD,5,	{0x53,0x00,0x0A,0x00,0x00}},
	{0xC4,1,	{0x60}},
	{0xC5,1,	{0x40}},
	{0xC6,1,	{0x64}},
	{0xC7,1,	{0x44}},

	{0x6F,1,	{0x11}},
	{0xF3,1,	{0x01}},

	{0x11,0,	{0}},
	{REGFLAG_DELAY, 120,  {0}},
	{0x29,0,	{0}},
	{REGFLAG_DELAY, 20,  {0}},
	{REGFLAG_END_OF_TABLE, 0x00, {}},
};
#endif
#endif

