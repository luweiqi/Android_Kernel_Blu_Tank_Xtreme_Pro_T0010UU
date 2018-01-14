#ifndef __LCD_FL11281_DSI_6735_HD_FX1_H__
#define __LCD_FL11281_DSI_6735_HD_FX1_H__

#if defined(DROI_PRO_FX1_ZK)
//#define SUPORT_ADC_CHECK
#define TYD_LCD_USE_CUSTOM_FL11281_HD
#endif

#if defined(DROI_PRO_FX1_ZK)
static struct LCM_setting_table lcm_initialization_setting[] = {
{0xB9,3,{0xF1,0x12,0x81}},

{0xBA,27,{0x33,0x81,0x05,0xF9,0x0E,0x0E,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x25,0x00,0x91,0x0A,0x00,0x00,0x02,0x4F,0x11,0x00,0x00,0x37}},

{0xB8,1,{0xA5}},

{0xB3,17,{0x02,0x00,0x06,0x06,0x07,0x0B,0x1E,0x1E,0x00,0x00,0x00,0x03,0xFF,0x00,0x00,0x00,0x00}},

{0xC0,9,{0x73,0x73,0x50,0x50,0x00,0x00,0x08,0x70,0x00}},

{0xBC,1,{0x46}},
                                                                                                                                                                                       
{0xCC,1,{0x0B}},

{0xB4,1,{0x80}},

{0xB2,2,{0xC8,0x12}},

{0xBF,2,{0x02,0x11}},

{0xE3,10,{0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x14}},

{0xB1,10,{0x21,0x56,0x63,0x2C,0x2F,0x33,0x77,0x01,0xDB,0x0C}},


{0xB5,2,{0x09,0x09}},


{0xB6,2,{0x86,0x86}},

{0xE9,63,{0x00,0x00,0x0D,0x05,0x13,0x05,0xA0,0x12,0x31,0x23,
0x38,0x11,0x05,0xA0,0x37,0x0A,0x08,0x00,0x01,0x00,0x00,0x00,
0x08,0x00,0x01,0x00,0x00,0x00,0x00,0x24,0x68,0x88,0x88,0x88,
0x88,0x88,0x89,0x84,0x88,0x11,0x35,0x78,0x88,0x88,0x88,0x88,
0x88,0x89,0x85,0x88,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},

{0xEA,48,{0x02,0x1A,0x00,0x00,0x57,0x53,0x18,0x88,0x88,0x88,0x88,0x88,0x88,0x91,0x88,0x46,0x42,0x08,0x88,0x88,0x88,0x88,0x88,0x88,0x90,0x88,0x00,0x0F,0x00,0xFF,0x00,0x04,0x00,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},

{0xE0,34,{0xE0,0x00,0x03,0x04,0x2E,0x3A,0x3F,0x35,0x3B,0x05,0x08,0x0D,0x11,0x12,0x10,0x12,0x11,0x15,0x00,0x03,0x04,0x2E,0x3A,0x3F,0x35,0x3B,0x05,0x08,0x0D,0x11,0x12,0x10,0x12,0x11,0x15}},

{0x11,1,{0x00}},

{REGFLAG_DELAY,150,{}},

{0x29,1,{0x00}},

{REGFLAG_DELAY,50,{}},

};
#endif

#endif
