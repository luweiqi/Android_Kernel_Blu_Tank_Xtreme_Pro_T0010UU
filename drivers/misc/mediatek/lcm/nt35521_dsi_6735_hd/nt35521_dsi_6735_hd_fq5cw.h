#ifndef __LCD_NT35521_DSI_HD_FQ5CW_H__
#define __LCD_NT35521_DSI_HD_FQ5CW_H__

#if defined(DROI_PRO_FQ5C_XWP)
#define SUPORT_ADC_CHECK
#define TYD_LCD_USE_CUSTOM_NT35521_HD
#endif

#if defined(DROI_PRO_FQ5CW_NJX)||defined(DROI_PRO_FQ5C_ZG)
#define TYD_LCD_USE_CUSTOM_NT35521_HD
#endif

#if defined(DROI_PRO_FQ5C_XWP)
static struct LCM_setting_table lcm_initialization_setting_1200[] = {
    //xinliangda
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
	//{0x6F,1,{0x16}},
	//{0xF7,1,{0x10}},//mipi 3lane
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
	{0xB8,4,{0x00,0x00,0x00,0x00}},
	{0xBB,2,{0x24,0x24}},
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
	//{0xBE,1,{0x36}},
	{0xCA,1,{0x00}},
	{0xC0,1,{0x0C}},
	{0xB5,2,{0x03,0x03}},
	{0xB3,2,{0x19,0x19}},
	{0xB4,2,{0x19,0x19}},
	{0xB9,2,{0x36,0x36}},
	{0xBA,2,{0x14,0x14}},

	{0xF0,5,{0x55,0xAA,0x52,0x08,0x02}},
	//{0xEE,1,{0x01}},  //0x00==>3Gamma 0x01==>ÆûGamma
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

			// PAGE6 : GOUT Mapping,VGLO select
			//#H499 PAGE6 setting
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

	//{0x35, 1, {0x00}},
	{0x11,1,{0x00}},
	{REGFLAG_DELAY, 150, {}},

	{0x29,1,{0x00}},
	{REGFLAG_DELAY, 50, {}},
	{REGFLAG_END_OF_TABLE, 0x00, {}}
};
static struct LCM_setting_table lcm_initialization_setting_0800[] = {
    {0xFF, 4, {0xAA,0x55,0xA5,0x80}},
    {0x6F, 2, {0x11,0x00}},
    {0xF7, 2, {0x20,0x00}},
    {0x6F, 1, {0x06}},
    {0xF7, 1, {0xA0}},
    {0x6F, 1, {0x19}},
    {0xF7, 1, {0x12}},
    {0xF0, 5, {0x55,0xAA,0x52,0x08,0x00}},
    {0xC8, 1, {0x00}},//80
    {0xB1, 2, {0x6C,0x21}},
    {0xB6, 1, {0x08}},
    {0x6F, 1, {0x02}},
    {0xB8, 1, {0x08}},
    {0xBB, 2, {0x74,0x44}},
    {0xBC, 2, {0x00,0x00}},

    {0xBD, 5, {0x01,0xAC,0x10,0x10,0x01}},

    {0xF0, 5, {0x55,0xAA,0x52,0x08,0x01}},

    {0xB0, 2, {0x05,0x05}},
    {0xB1, 2, {0x05,0x05}},

    {0xBC, 2, {0xA0,0x01}},
    {0xBD, 2, {0xA0,0x01}},

    {0xCA, 1, {0x00}},

    //{0xC0, 1, {0x0C}},
    {0xC0, 1, {0x04}},
    {0xBE, 1, {0x50}},//62//5a

    {0xB3, 2, {0x37,0x37}},
    {0xB4, 2, {0x0F,0x0F}},


    //Power Control for VGH
    {0xB9, 2, {0x24,0x24}}, //0x26
    //Power Control for VGLX
    {0xBA, 2, {0x14,0x14}}, //0x24

    //{0xB9, 2, {0x46,0x46}},
    //{0xBA, 2, {0x24,0x24}},

    {0xF0, 5, {0x55,0xAA,0x52,0x08,0x02}},

    {0xEE, 1, {0x01}},
    {0xEF, 4, {0x09,0x06,0x15,0x18}},


    {0xB0, 6, {0x00,0x00,0x00,0x2A,0x00,0x4F}},
    {0x6F, 1, {0x06}},
    {0xB0, 6, {0x00,0x68,0x00,0x80,0x00,0xA7}},
    {0x6F, 1, {0x0C}},
    {0xB0, 4, {0x00,0xD4,0x01,0x10}},
    {0xB1, 6, {0x01,0x3E,0x01,0x83,0x01,0xBB}},
    {0x6F, 1, {0x06}},
    {0xB1, 6, {0x02,0x10,0x02,0x55,0x02,0x57}},
    {0x6F, 1, {0x0C}},
    {0xB1, 4, {0x02,0x96,0x02,0xDC}},
    {0xB2, 6, {0x03,0x08,0x03,0x47,0x03,0x72}},
    {0x6F, 1, {0x06}},
    {0xB2, 6, {0x03,0x9D,0x03,0xB5,0x03,0xD4}},
    {0x6F, 1, {0x0c}},
    {0xB2, 4, {0x03,0xE3,0x03,0xF4}},
    {0xB3, 4, {0x03,0xFD,0x03,0xFF}},



    {0xF0, 5 ,{0x55,0xAA,0x52,0x08,0x06}},
    {0xB0, 2 ,{0x29,0x2A}},
    {0xB1, 2 ,{0x10,0x12}},
    {0xB2, 2 ,{0x14,0x16}},
    {0xB3, 2 ,{0x18,0x1A}},
    {0xB4, 2 ,{0x08,0x0A}},
    {0xB5, 2 ,{0x2E,0x2E}},
    {0xB6, 2 ,{0x2E,0x2E}},
    {0xB7, 2 ,{0x2E,0x2E}},
    {0xB8, 2 ,{0x2E,0x00}},
    {0xB9, 2 ,{0x2E,0x2E}},
    {0xBA, 2 ,{0x2E,0x2E}},
    {0xBB, 2 ,{0x01,0x2E}},
    {0xBC, 2 ,{0x2E,0x2E}},
    {0xBD, 2 ,{0x2E,0x2E}},
    {0xBE, 2 ,{0x2E,0x2E}},
    {0xBF, 2 ,{0x0B,0x09}},
    {0xC0, 2 ,{0x1B,0x19}},
    {0xC1, 2 ,{0x17,0x15}},
    {0xC2, 2 ,{0x13,0x11}},
    {0xC3, 2 ,{0x2A,0x29}},
    {0xE5, 2 ,{0x2E,0x2E}},
    {0xC4, 2 ,{0x29,0x2A}},
    {0xC5, 2 ,{0x1B,0x19}},
    {0xC6, 2 ,{0x17,0x15}},
    {0xC7, 2 ,{0x13,0x11}},
    {0xC8, 2 ,{0x01,0x0B}},
    {0xC9, 2 ,{0x2E,0x2E}},
    {0xCA, 2 ,{0x2E,0x2E}},
    {0xCB, 2 ,{0x2E,0x2E}},
    {0xCC, 2 ,{0x2E,0x09}},
    {0xCD, 2 ,{0x2E,0x2E}},
    {0xCE, 2 ,{0x2E,0x2E}},
    {0xCF, 2 ,{0x08,0x2E}},
    {0xD0, 2 ,{0x2E,0x2E}},
    {0xD1, 2 ,{0x2E,0x2E}},
    {0xD2, 2 ,{0x2E,0x2E}},
    {0xD3, 2 ,{0x0A,0x00}},
    {0xD4, 2 ,{0x10,0x12}},
    {0xD5, 2 ,{0x14,0x16}},
    {0xD6, 2 ,{0x18,0x1A}},
    {0xD7, 2 ,{0x2A,0x29}},
    {0xE6, 2 ,{0x2E,0x2E}},
    {0xD8, 5, {0x00,0x00,0x00,0x00,0x00}},
    {0xD9, 5, {0x00,0x00,0x00,0x00,0x00}},
    {0xE7, 1, {0x00}},

    {0xF0, 5, {0x55,0xAA,0x52,0x08,0x03}},
    {0xB0, 2, {0x00,0x00}},
    {0xB1, 2, {0x00,0x00}},
    {0xB2, 5, {0x05,0x00,0x00,0x00,0x00}},

    {0xB6, 5, {0x05,0x00,0x00,0x00,0x00}},
    {0xB7, 5, {0x05,0x00,0x00,0x00,0x00}},

    {0xBA, 5, {0x57,0x00,0x00,0x00,0x00}},
    {0xBB, 5, {0x57,0x00,0x00,0x00,0x00}},

    {0xC0, 4, {0x00,0x00,0x00,0x00}},
    {0xC1, 4, {0x00,0x00,0x00,0x00}},

    {0xC4, 1, {0x60}},
    {0xC5, 1, {0x40}},

    {0xF0, 5, {0x55,0xAA,0x52,0x08,0x05}},
    {0xBD, 5, {0x03,0x01,0x03,0x03,0x03}},
    {0xB0, 2, {0x17,0x06}},
    {0xB1, 2, {0x17,0x06}},
    {0xB2, 2, {0x17,0x06}},
    {0xB3, 2, {0x17,0x06}},
    {0xB4, 2, {0x17,0x06}},
    {0xB5, 2, {0x17,0x06}},

    {0xB8, 1, {0x00}},
    {0xB9, 1, {0x00}},
    {0xBA, 1, {0x00}},
    {0xBB, 1, {0x02}},
    {0xBC, 1, {0x00}},

    {0xC0, 1, {0x07}},

    {0xC4, 1, {0x80}},
    {0xC5, 1, {0xA4}},

    {0xC8, 2, {0x05,0x30}},
    {0xC9, 2, {0x01,0x31}},

    {0xCC, 4, {0x00,0x00,0x3C}},
    {0xCD, 4, {0x00,0x00,0x3C}},

    {0xD1, 5, {0x00,0x05,0x09,0x07,0x10}},
    {0xD2, 5, {0x00,0x05,0x0E,0x07,0x10}},

    {0xE5, 1, {0x06}},
    {0xE6, 1, {0x06}},
    {0xE7, 1, {0x06}},
    {0xE8, 1, {0x06}},
    {0xE9, 1, {0x06}},
    {0xEA, 1, {0x06}},

    {0xED, 1, {0x30}},

    {0x6F, 1, {0x11}},
    {0xF3, 1, {0x01}},
    {0x62, 1, {0x01}},//ESD
    {0x11,1,{0x00}},
    {REGFLAG_DELAY, 120, {}},

    {0x29,1,{0x00}},
    {REGFLAG_DELAY, 50, {}},


    {REGFLAG_END_OF_TABLE, 0x00, {}}
};
#endif

#if defined(DROI_PRO_FQ5CW_NJX)
static struct LCM_setting_table lcm_initialization_setting[] = {
    {0xFF, 4, {0xAA,0x55,0xA5,0x80}},
    {0x6F, 2, {0x11,0x00}},
    {0xF7, 2, {0x20,0x00}},
    {0x6F, 1, {0x06}},
    {0xF7, 1, {0xA0}},
    {0x6F, 1, {0x19}},
    {0xF7, 1, {0x12}},
    {0xF0, 5, {0x55,0xAA,0x52,0x08,0x00}},
    {0xC8, 1, {0x00}},//80
    {0xB1, 2, {0x6C,0x21}},
    {0xB6, 1, {0x08}},
    {0x6F, 1, {0x02}},
    {0xB8, 1, {0x08}},
    {0xBB, 2, {0x74,0x44}},
    {0xBC, 2, {0x00,0x00}},

    {0xBD, 5, {0x01,0xAC,0x10,0x10,0x01}},

    {0xF0, 5, {0x55,0xAA,0x52,0x08,0x01}},

    {0xB0, 2, {0x05,0x05}},
    {0xB1, 2, {0x05,0x05}},

    {0xBC, 2, {0xA0,0x01}},
    {0xBD, 2, {0xA0,0x01}},

    {0xCA, 1, {0x00}},

    //{0xC0, 1, {0x0C}},
    {0xC0, 1, {0x04}},
    {0xBE, 1, {0x50}},//62//5a

    {0xB3, 2, {0x37,0x37}},
    {0xB4, 2, {0x0F,0x0F}},


    //Power Control for VGH
    {0xB9, 2, {0x24,0x24}}, //0x26
    //Power Control for VGLX
    {0xBA, 2, {0x14,0x14}}, //0x24

    //{0xB9, 2, {0x46,0x46}},
    //{0xBA, 2, {0x24,0x24}},

    {0xF0, 5, {0x55,0xAA,0x52,0x08,0x02}},

    {0xEE, 1, {0x01}},
    {0xEF, 4, {0x09,0x06,0x15,0x18}},


    {0xB0, 6, {0x00,0x00,0x00,0x2A,0x00,0x4F}},
    {0x6F, 1, {0x06}},
    {0xB0, 6, {0x00,0x68,0x00,0x80,0x00,0xA7}},
    {0x6F, 1, {0x0C}},
    {0xB0, 4, {0x00,0xD4,0x01,0x10}},
    {0xB1, 6, {0x01,0x3E,0x01,0x83,0x01,0xBB}},
    {0x6F, 1, {0x06}},
    {0xB1, 6, {0x02,0x10,0x02,0x55,0x02,0x57}},
    {0x6F, 1, {0x0C}},
    {0xB1, 4, {0x02,0x96,0x02,0xDC}},
    {0xB2, 6, {0x03,0x08,0x03,0x47,0x03,0x72}},
    {0x6F, 1, {0x06}},
    {0xB2, 6, {0x03,0x9D,0x03,0xB5,0x03,0xD4}},
    {0x6F, 1, {0x0c}},
    {0xB2, 4, {0x03,0xE3,0x03,0xF4}},
    {0xB3, 4, {0x03,0xFD,0x03,0xFF}},



    {0xF0, 5 ,{0x55,0xAA,0x52,0x08,0x06}},
    {0xB0, 2 ,{0x29,0x2A}},
    {0xB1, 2 ,{0x10,0x12}},
    {0xB2, 2 ,{0x14,0x16}},
    {0xB3, 2 ,{0x18,0x1A}},
    {0xB4, 2 ,{0x08,0x0A}},
    {0xB5, 2 ,{0x2E,0x2E}},
    {0xB6, 2 ,{0x2E,0x2E}},
    {0xB7, 2 ,{0x2E,0x2E}},
    {0xB8, 2 ,{0x2E,0x00}},
    {0xB9, 2 ,{0x2E,0x2E}},
    {0xBA, 2 ,{0x2E,0x2E}},
    {0xBB, 2 ,{0x01,0x2E}},
    {0xBC, 2 ,{0x2E,0x2E}},
    {0xBD, 2 ,{0x2E,0x2E}},
    {0xBE, 2 ,{0x2E,0x2E}},
    {0xBF, 2 ,{0x0B,0x09}},
    {0xC0, 2 ,{0x1B,0x19}},
    {0xC1, 2 ,{0x17,0x15}},
    {0xC2, 2 ,{0x13,0x11}},
    {0xC3, 2 ,{0x2A,0x29}},
    {0xE5, 2 ,{0x2E,0x2E}},
    {0xC4, 2 ,{0x29,0x2A}},
    {0xC5, 2 ,{0x1B,0x19}},
    {0xC6, 2 ,{0x17,0x15}},
    {0xC7, 2 ,{0x13,0x11}},
    {0xC8, 2 ,{0x01,0x0B}},
    {0xC9, 2 ,{0x2E,0x2E}},
    {0xCA, 2 ,{0x2E,0x2E}},
    {0xCB, 2 ,{0x2E,0x2E}},
    {0xCC, 2 ,{0x2E,0x09}},
    {0xCD, 2 ,{0x2E,0x2E}},
    {0xCE, 2 ,{0x2E,0x2E}},
    {0xCF, 2 ,{0x08,0x2E}},
    {0xD0, 2 ,{0x2E,0x2E}},
    {0xD1, 2 ,{0x2E,0x2E}},
    {0xD2, 2 ,{0x2E,0x2E}},
    {0xD3, 2 ,{0x0A,0x00}},
    {0xD4, 2 ,{0x10,0x12}},
    {0xD5, 2 ,{0x14,0x16}},
    {0xD6, 2 ,{0x18,0x1A}},
    {0xD7, 2 ,{0x2A,0x29}},
    {0xE6, 2 ,{0x2E,0x2E}},
    {0xD8, 5, {0x00,0x00,0x00,0x00,0x00}},
    {0xD9, 5, {0x00,0x00,0x00,0x00,0x00}},
    {0xE7, 1, {0x00}},

    {0xF0, 5, {0x55,0xAA,0x52,0x08,0x03}},
    {0xB0, 2, {0x00,0x00}},
    {0xB1, 2, {0x00,0x00}},
    {0xB2, 5, {0x05,0x00,0x00,0x00,0x00}},

    {0xB6, 5, {0x05,0x00,0x00,0x00,0x00}},
    {0xB7, 5, {0x05,0x00,0x00,0x00,0x00}},

    {0xBA, 5, {0x57,0x00,0x00,0x00,0x00}},
    {0xBB, 5, {0x57,0x00,0x00,0x00,0x00}},

    {0xC0, 4, {0x00,0x00,0x00,0x00}},
    {0xC1, 4, {0x00,0x00,0x00,0x00}},

    {0xC4, 1, {0x60}},
    {0xC5, 1, {0x40}},

    {0xF0, 5, {0x55,0xAA,0x52,0x08,0x05}},
    {0xBD, 5, {0x03,0x01,0x03,0x03,0x03}},
    {0xB0, 2, {0x17,0x06}},
    {0xB1, 2, {0x17,0x06}},
    {0xB2, 2, {0x17,0x06}},
    {0xB3, 2, {0x17,0x06}},
    {0xB4, 2, {0x17,0x06}},
    {0xB5, 2, {0x17,0x06}},

    {0xB8, 1, {0x00}},
    {0xB9, 1, {0x00}},
    {0xBA, 1, {0x00}},
    {0xBB, 1, {0x02}},
    {0xBC, 1, {0x00}},

    {0xC0, 1, {0x07}},

    {0xC4, 1, {0x80}},
    {0xC5, 1, {0xA4}},

    {0xC8, 2, {0x05,0x30}},
    {0xC9, 2, {0x01,0x31}},

    {0xCC, 4, {0x00,0x00,0x3C}},
    {0xCD, 4, {0x00,0x00,0x3C}},

    {0xD1, 5, {0x00,0x05,0x09,0x07,0x10}},
    {0xD2, 5, {0x00,0x05,0x0E,0x07,0x10}},

    {0xE5, 1, {0x06}},
    {0xE6, 1, {0x06}},
    {0xE7, 1, {0x06}},
    {0xE8, 1, {0x06}},
    {0xE9, 1, {0x06}},
    {0xEA, 1, {0x06}},

    {0xED, 1, {0x30}},

    {0x6F, 1, {0x11}},
    {0xF3, 1, {0x01}},
    {0x62, 1, {0x01}},//ESD
    {0x11,1,{0x00}},
    {REGFLAG_DELAY, 120, {}},

    {0x29,1,{0x00}},
    {REGFLAG_DELAY, 50, {}},


    {REGFLAG_END_OF_TABLE, 0x00, {}}
};
#endif

#if defined(DROI_PRO_FQ5C_ZG)
static struct LCM_setting_table lcm_initialization_setting[] = {
{0xFF,4,{0xAA,0x55,0x25,0x01}},
{0xFC,1,{0x08}},
{REGFLAG_DELAY, 1, {}},
{0xFC,1,{0x00}},

{REGFLAG_DELAY, 1, {}},

{0x6F,1,{0x21}},
{0xF7,1,{0x01}},
{REGFLAG_DELAY, 1, {}},

{0x6F,1,{0x21}},
{0xF7,1,{0x00}},
{0xFF,4,{0xAA,0x55,0x25,0x00}},

{0xF0,5,{0x55,0xAA,0x52,0x08,0x00}},
{0xC8,1,{0x80}},

{0xB1,2,{0x60,0x21}},

{0xB6,1,{0x06}}, 						// Set source output hold time
//{0xB8,4,{0x01,0x02,0x02,0x02}},			//EQ control function
//{0xBB,2,{0x63,0x63}}, 					// Set bias current for GOP and SOP
{0xB8,4,{0x00,0x00,0x00,0x00}},			//EQ control function
{0xBB,2,{0x24,0x24}}, 					// Set bias current for GOP and SOP

{0xBC,2,{0x00,0x00}},					// Inversion setting : Column
{0xBD,5,{0x02,0x78,0x20,0x20,0x00}},	// DSP Timing Settings update for BIST

{0xF0,5,{0x55,0xAA,0x52,0x08,0x01}},	//========== page1 relative ==========
{0xB3,2,{0x2D,0x2D}},
{0xB4,2,{0x19,0x19}},

{0xB9,2,{0x45,0x45}},					// power control for VGH, VGL

{0xBA,2,{0x26,0x26}},				 	// solution of Hsync mura , james 20160111

{0xB5,2,{0x04,0x04}},					// HSOUT
{0xC0,1,{0x0C}},						// power IC control

{0xBC,2,{0x87,0x00}},					// A0=+5.0V,VGMP,  VGSP setting ,VGMP < AVDD-0.5V ,james 20150818
{0xBD,2,{0x87,0x00}},					// A0=-5.0V,VGMN, VGSN setting, VGMN > AVEE+0.5V ,james 20150818

{0xBE,1,{0x70}},//VCOM adjust //JAMES 20150916, average Vcom=4Ah 6A

//GAMMA code is from CF.huang
{0xF0,5,{0x55,0xAA,0x52,0x08,0x02}}, 	//GAMMA

//Three GAMMA Settings
{0xEE,1,{0x00}},

//R(+) MCR cmd
{0xB0,16,{0x00,0x14,0x00,0x3C,0x00,0x67,0x00,0x82,0x00,0x9C,0x00,0xBB,0x00,0xD3,0x00,0xFF}},
{0xB1,16,{0x01,0x1D,0x01,0x60,0x01,0x8C,0x01,0xD2,0x02,0x0D,0x02,0x10,0x02,0x45,0x02,0x83}},
{0xB2,16,{0x02,0xAB,0x02,0xE3,0x03,0x09,0x03,0x40,0x03,0x6D,0x03,0xA6,0x03,0xCA,0x03,0xD0}},
{0xB3,4, {0x03,0xFC,0x03,0xFD}},
//G(+) MCR cmd
{0xB4,16,{0x00,0x01,0x00,0x33,0x00,0x64,0x00,0x7E,0x00,0x92,0x00,0xB5,0x00,0xD0,0x00,0xFA}},
{0xB5,16,{0x01,0x1C,0x01,0x5D,0x01,0x89,0x01,0xCF,0x02,0x0A,0x02,0x0C,0x02,0x45,0x02,0x80}},
{0xB6,16,{0x02,0xA7,0x02,0xDD,0x03,0x03,0x03,0x36,0x03,0x57,0x03,0x82,0x03,0x8A,0x03,0xC8}},
{0xB7,4, {0x03,0xF6,0x03,0xFC}},
//B(+) MCR cmd
{0xB8,16,{0x00,0x47,0x00,0x56,0x00,0x71,0x00,0x84,0x00,0x97,0x00,0xB8,0x00,0xD2,0x00,0xFA}},
{0xB9,16,{0x01,0x1A,0x01,0x5B,0x01,0x87,0x01,0xCD,0x02,0x09,0x02,0x0A,0x02,0x43,0x02,0x7F}},
{0xBA,16,{0x02,0xA6,0x02,0xDC,0x03,0x03,0x03,0x3B,0x03,0x69,0x03,0xD4,0x03,0xFB,0x03,0xFE}},
{0xBB,4, {0x03,0xFE,0x03,0xFE}},
//R(-) MCR cmd
{0xBC,16,{0x00,0x14,0x00,0x3C,0x00,0x67,0x00,0x82,0x00,0x9C,0x00,0xBB,0x00,0xD3,0x00,0xFF}},
{0xBD,16,{0x01,0x1D,0x01,0x60,0x01,0x8C,0x01,0xD2,0x02,0x0D,0x02,0x10,0x02,0x45,0x02,0x83}},
{0xBE,16,{0x02,0xAB,0x02,0xE3,0x03,0x09,0x03,0x40,0x03,0x6D,0x03,0xA6,0x03,0xCA,0x03,0xD0}},
{0xBF,4, {0x03,0xFC,0x03,0xFD}},
//G(-) MCR cmd
{0xC0,16,{0x00,0x01,0x00,0x33,0x00,0x64,0x00,0x7E,0x00,0x92,0x00,0xB5,0x00,0xD0,0x00,0xFA}},
{0xC1,16,{0x01,0x1C,0x01,0x5D,0x01,0x89,0x01,0xCF,0x02,0x0A,0x02,0x0C,0x02,0x45,0x02,0x80}},
{0xC2,16,{0x02,0xA7,0x02,0xDD,0x03,0x03,0x03,0x36,0x03,0x57,0x03,0x82,0x03,0x8A,0x03,0xC8}},
{0xC3,4, {0x03,0xF6,0x03,0xFC}},
//B(-) MCR cmd
{0xC4,16,{0x00,0x47,0x00,0x56,0x00,0x71,0x00,0x84,0x00,0x97,0x00,0xB8,0x00,0xD2,0x00,0xFA}},
{0xC5,16,{0x01,0x1A,0x01,0x5B,0x01,0x87,0x01,0xCD,0x02,0x09,0x02,0x0A,0x02,0x43,0x02,0x7F}},
{0xC6,16,{0x02,0xA6,0x02,0xDC,0x03,0x03,0x03,0x3B,0x03,0x69,0x03,0xD4,0x03,0xFB,0x03,0xFE}},
{0xC7,4, {0x03,0xFE,0x03,0xFE}},

////-------GAMMA END-----------------------------------------------------------------------

//========== GOA relative ==========
{0xF0,5,{0x55,0xAA,0x52,0x08,0x06}}, // PAGE6 : GOUT Mapping, VGLO select
{0xB0,2,{0x29,0x2A}},
{0xB1,2,{0x10,0x12}},
{0xB2,2,{0x14,0x16}},
{0xB3,2,{0x18,0x1A}},
{0xB4,2,{0x08,0x0A}},
{0xB5,2,{0x34,0x34}},
{0xB6,2,{0x34,0x34}},
{0xB7,2,{0x34,0x34}},
{0xB8,2,{0x34,0x00}},
{0xB9,2,{0x34,0x34}},

{0xBA,2,{0x34,0x34}},
{0xBB,2,{0x01,0x34}},
{0xBC,2,{0x2E,0x34}},
{0xBD,2,{0x34,0x34}},
{0xBE,2,{0x34,0x34}},
{0xBF,2,{0x0B,0x09}},
{0xC0,2,{0x1B,0x19}},
{0xC1,2,{0x17,0x15}},
{0xC2,2,{0x13,0x11}},
{0xC3,2,{0x2A,0x29}},
{0xE5,2,{0x2E,0x2E}},

{0xC4,2,{0x29,0x2A}},
{0xC5,2,{0x17,0x15}},
{0xC6,2,{0x13,0x11}},
{0xC7,2,{0x1B,0x19}},
{0xC8,2,{0x01,0x0B}},
{0xC9,2,{0x34,0x34}},
{0xCA,2,{0x34,0x34}},
{0xCB,2,{0x34,0x34}},
{0xCC,2,{0x34,0x09}},
{0xCD,2,{0x34,0x34}},

{0xCE,2,{0x34,0x34}},
{0xCF,2,{0x08,0x34}},
{0xD0,2,{0x2E,0x34}},
{0xD1,2,{0x34,0x34}},
{0xD2,2,{0x34,0x34}},
{0xD3,2,{0x0A,0x00}},
{0xD4,2,{0x18,0x1A}},
{0xD5,2,{0x10,0x12}},
{0xD6,2,{0x14,0x16}},
{0xD7,2,{0x2A,0x29}},
{0xE6,2,{0x2E,0x2E}},
{0xD8,5,{0x00,0x00,0x00,0x00,0x00}},
{0xD9,5,{0x00,0x00,0x00,0x00,0x00}},
{0xE7,1,{0x00}},

// PAGE3 :
{0xF0,5,{0x55,0xAA,0x52,0x08,0x03}},
{0xB0,2,{0x00,0x00}},
{0xB1,2,{0x00,0x00}},
{0xB2,5,{0x05,0x00,0x00,0x00,0x00}},


{0xB6,5,{0x05,0x00,0x00,0x00,0x00}},
{0xB7,5,{0x05,0x00,0x00,0x00,0x00}},

{0xBA,5,{0x57,0x00,0x00,0x00,0x00}},
{0xBB,5,{0x57,0x00,0x00,0x00,0x00}},
{0xC0,4,{0x00,0x00,0x00,0x00}},
{0xC1,4,{0x00,0x00,0x00,0x00}},
{0xC4,1,{0x60}},
{0xC5,1,{0x40}},
//{0xEF,1,{0x00}},

// PAGE5
{0xF0,5,{0x55,0xAA,0x52,0x08,0x05}},
{0xBD,5,{0x03,0x01,0x03,0x03,0x03}},
{0xB0,2,{0x17,0x06}},
{0xB1,2,{0x17,0x06}},
{0xB2,2,{0x17,0x06}},
{0xB3,2,{0x17,0x06}},
{0xB4,2,{0x17,0x06}},
{0xB5,2,{0x17,0x06}},

{0xB8,1,{0x00}},
{0xB9,1,{0x00}},
{0xBA,1,{0x00}},
{0xBB,1,{0x02}},
{0xBC,1,{0x00}},

{0xE5,1,{0x06}},
{0xE6,1,{0x06}},
{0xE7,1,{0x06}},
{0xE8,1,{0x06}},
{0xE9,1,{0x06}},
{0xEA,1,{0x06}},


//modified by NVT 20151225_dummy amount less
{0xC0,1,{0x05}},
{0xC4,1,{0x82}},
{0xC5,1,{0xA2}},
{0xC8,2,{0x03,0x30}},
{0xC9,2,{0x03,0x31}},
{0xCC,3,{0x00,0x00,0x3C}},
{0xCD,3,{0x00,0x00,0x3C}},


{0xD1,5,{0x00,0x05,0x0B,0x00,0x00}},
{0xD2,5,{0x00,0x25,0x08,0x00,0x00}},


//{0xD3,5,{0x20,0x00,0x48,0x07,0x10}},
//{0xD4,5,{0x30,0x00,0x43,0x07,0x10}},
{0xED,1,{0x33}},


{0x35,1,{0x00}},
//{0x36,1,{0x00}},//C0 180
{0x11, 1, {0x00}},
{REGFLAG_DELAY, 120, {}},
{0x29, 1, {0x00}},
{REGFLAG_DELAY, 20, {}},


{REGFLAG_END_OF_TABLE, 0x00, {}}
};
#endif
#endif
