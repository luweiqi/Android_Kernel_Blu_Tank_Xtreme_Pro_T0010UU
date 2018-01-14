#ifndef __LCD_FL11281_DSI_6735_HD_PU6_H__
#define __LCD_FL11281_DSI_6735_HD_PU6_H__

#if defined(DROI_PRO_PU6_OLK)||defined(DROI_PRO_PU6_JF_K20)
//#define SUPORT_ADC_CHECK
#define TYD_LCD_USE_CUSTOM_FL11281_HD
#endif

#if defined(DROI_PRO_PU6_OLK)
static struct LCM_setting_table lcm_initialization_setting[] = {
//FL11281_C055SWR6-0__IPS_ Code_ 正掃_PIC_V1.0_170728 wanchanglong 20170909
{0xB9,3,{0xF1,0x12,0x81}},
//33-4lane32-3lane
{0xBA,27,{0x33,0x81,0x05,0xF9,0x09,0x09,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x25,0x00,0x91,0x0A,0x00,0x00,0x02,0x4F,0x11,0x00,0x00,0x37}},

{0xB8,2,{0xA5,0x62}},

{0xB3,17,{0x02,0x00,0x06,0x06,0x10,0x10,0x05,0x05,0x00,0x00,0x00,0x03,0xFF,0x00,0x00,0x00,0x00}},

{0xC0,9,{0x73,0x73,0x50,0x50,0x00,0x00,0x08,0x30,0x00}},

{0xBC,1,{0x46}},

{0xCC,1,{0x0B}},

{0xB4,1,{0x80}},

{0xB2,3,{0xC8,0x13,0xF0}},
	
{0xB0,1,{0x01}},

{0xE3,10,{0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0xC0,0x14}},

{0xB1,10,{0x22,0x54,0x23,0x1E,0x1E,0x11,0x77,0x01,0x9B,0x0C}},

{0xB5,2,{0x09,0x09}},

{0xB6,2,{0x25,0x25}},

{0xE9,63,{0x02,0x00,0x10,0x05,0x16,0x0a,0x90,0x12,0x31,0x23,0x37,0x13,0x40,0x90,0x27,0x38,0x03,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x03,0x00,0x00,0x00,0x75,0x75,0x31,0x88,0x88,0x88,0x88,0x88,0x13,0x88,0x88,0x64,0x64,0x20,0x88,0x88,0x88,0x88,0x88,0x02,0x88,0x88,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},

{0xEA,48,{0x02,0x21,0x00,0x00,0x02,0x46,0x02,0x88,0x88,0x88,0x88,0x88,0x64,0x88,0x88,0x13,0x57,0x13,0x88,0x88,0x57,0x02,0x31,0x75,0x88,0x88,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},

{0xE0,34,{0x00,0x0a,0x11,0x26,0x27,0x3F,0x49,0x3B,0x07,0x0D,0x0F,0x12,0x13,0x11,0x12,0x11,0x17,0x00,0x0A,0x11,0x26,0x27,0x3F,0x49,0x3B,0x07,0x0D,0x0F,0x12,0x13,0x11,0x12,0x11,0x17}},


{0x11,1,{0x00}},
{REGFLAG_DELAY,180,{}},
{0x29,1,{0x00}},
{REGFLAG_DELAY,30,{}},
{REGFLAG_END_OF_TABLE,0x00,{}}
};
#endif

#if defined(DROI_PRO_PU6_JF_K20)
static struct LCM_setting_table lcm_initialization_setting[] = {
//FL11281_C055SWR6-0__IPS_ Code_ 正掃_PIC_V1.0_170728 wanchanglong 20170909
{0xB9,3,{0xF1,0x12,0x81}},
//33-4lane32-3lane
{0xBA,27,{0x33,0x81,0x05,0xF9,0x0E,0x0E,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x25,0x00,0x91,0x0A,0x00,0x00,0x02,0x4F,0x11,0x00,0x00,0x37}},

{0xB8,2,{0xA6,0x62}},


{0xB3,17,{0x02,0x00,0x06,0x06,0x10,0x10,0x05,0x05,0x00,0x00,0x00,0x03,0xFF,0x00,0x00,0x00,0x00}},

{0xC0,9,{0x73,0x73,0x50,0x50,0x00,0x00,0x08,0x30,0x00}},

{0xBC,1,{0x46}},

{0xCC,1,{0x0B}},

{0xB4,1,{0x80}},

{0xB2,2,{0xC8,0x13}},


{0xE3,10,{0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x14}},

{0xB1,10,{0x22,0x54,0x23,0x1E,0x1E,0x11,0x77,0x01,0x9B,0x0C}},

{0xB5,2,{0x0A,0x0A}},

{0xB6,2,{0x16,0x16}},

{0xE9,63,{0x02,0x00,0x10,0x05,0x16,0x0a,0xB0,0x12,0x31,0x23,0x37,0x13,0x40,0xB0,0x27,0x38,0x03,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x03,0x00,0x00,0x00,0x75,0x75,0x31,0x88,0x88,0x88,0x88,0x88,0x13,0x88,0x88,0x64,0x64,0x20,0x88,0x88,0x88,0x88,0x88,0x02,0x88,0x88,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},

{0xEA,48,{0x02,0x21,0x00,0x00,0x02,0x46,0x02,0x88,0x88,0x88,0x88,0x88,0x64,0x88,0x88,0x13,0x57,0x13,0x88,0x88,0x57,0x02,0x31,0x75,0x88,0x88,0x00,0x14,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},

{0xE0,34,{0x00,0x0a,0x11,0x26,0x27,0x3F,0x49,0x3B,0x07,0x0D,0x0F,0x12,0x13,0x11,0x12,0x11,0x17,0x00,0x0A,0x11,0x26,0x27,0x3F,0x49,0x3B,0x07,0x0D,0x0F,0x12,0x13,0x11,0x12,0x11,0x17}},


{0x11,1,{0x00}},
{REGFLAG_DELAY,180,{}},
{0x29,1,{0x00}},
{REGFLAG_DELAY,30,{}},
{REGFLAG_END_OF_TABLE,0x00,{}}
};
#endif

#endif