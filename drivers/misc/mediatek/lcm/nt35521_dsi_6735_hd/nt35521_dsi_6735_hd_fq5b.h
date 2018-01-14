#ifndef __LCD_NT35521_DSI_HD_FQ5B_H__
#define __LCD_NT35521_DSI_HD_FQ5B_H__

#if defined(DROI_PRO_FQ5B_YH)||defined(DROI_PRO_FQ5B_XDNZ)
//#define SUPORT_ADC_CHECK
#define TYD_LCD_USE_CUSTOM_NT35521_HD
#endif

#if defined(DROI_PRO_FQ5B_YH)
static struct LCM_setting_table lcm_initialization_setting[] = {
	//nt35521s-auo4.99-rixin-20151225
        {0xF0,5,{0x55,0xAA,0x52,0x08,0x00}},
        {0xFF,4,{0xAA,0x55,0xA5,0x80}},
        {0xB1,2,{0x68,0x21}},
        {0xBD,5,{0x01,0xA3,0x10,0x10,0x01}},
        {0x6F,1,{0x02}},
        {0xB8,1,{0x08}},
        {0xBB,2,{0x11,0x11}},
        {0xBC,2,{0x05,0x05}},
        {0xB6,1,{0x01}},
        {0xC8,1,{0x80}},//83
        {0xF0,5,{0x55,0xAA,0x52,0x08,0x01}},
        {0xB0,2,{0x0F,0x0F}},
        {0xB1,2,{0x0F,0x0F}},
        {0xCE,1,{0x66}},
        {0xC0,1,{0x0C}},
        {0xB5,2,{0x05,0x05}},
        {0xBE,1,{0x6a}},//3e
        {0xB3,2,{0x28,0x28}},
        {0xB4,2,{0x19,0x19}},

        {0xB9,2,{0x34,0x34}},//44
        {0xBA,2,{0x14,0x14}},
        {0xBC,2,{0x88,0x00}},//88
        {0xBD,2,{0x88,0x00}},//88
        {0xCA,1,{0x00}},

        {0xF0,5,{0x55,0xAA,0x52,0x08,0x02}},
        //3Gamma 2.2
        //R(+) MCR cmd
        {0xB0,16,{0x00,0x79,0x00,0x8B,0x00,0xA5,0x00,0xB1,0x00,0xBC,0x00,0xD5,0x00,0xE9,0x01,0x0E}},
        {0xB1,16,{0x01,0x31,0x01,0x63,0x01,0x8F,0x01,0xD5,0x02,0x10,0x02,0x15,0x02,0x4E,0x02,0x8F}},
        {0xB2,16,{0x02,0xB6,0x02,0xEA,0x03,0x0D,0x03,0x3A,0x03,0x54,0x03,0x63,0x03,0x8F,0x03,0x94}},
        {0xB3,4,{0x03,0x96,0x03,0x97}},
        //G(+) MCR cmd
        {0xB4,16,{0x00,0x79,0x00,0x82,0x00,0x95,0x00,0xA5,0x00,0xB4,0x00,0xCE,0x00,0xE6,0x01,0x0D}},
        {0xB5,16,{0x01,0x2D,0x01,0x63,0x01,0x8F,0x01,0xD5,0x02,0x13,0x02,0x14,0x02,0x4F,0x02,0x8D}},
        {0xB6,16,{0x02,0xB5,0x02,0xEA,0x03,0x0D,0x03,0x39,0x03,0x55,0x03,0x68,0x03,0x93,0x03,0x9A}},
        {0xB7,4,{0x03,0xA4,0x03,0xA6}},
        //B(+) MCR cmd
        {0xB8,16,{0x00,0x60,0x00,0x6B,0x00,0x7E,0x00,0x8E,0x00,0x9D,0x00,0xB7,0x00,0xCE,0x00,0xF7}},
        {0xB9,16,{0x01,0x1A,0x01,0x53,0x01,0x82,0x01,0xCC,0x02,0x0C,0x02,0x0F,0x02,0x4C,0x02,0x8E}},
        {0xBA,16,{0x02,0xB7,0x02,0xF2,0x03,0x1B,0x03,0x5C,0x03,0x9C,0x03,0xFC,0x03,0xFC,0x03,0xFD}},
        {0xBB,4,{0x03,0xFE,0x03,0xFE}},
        //R(-) MCR cmd
        {0xBC,16,{0x00,0x79,0x00,0x8B,0x00,0xA5,0x00,0xB1,0x00,0xBC,0x00,0xD5,0x00,0xE9,0x01,0x0E}},
        {0xBD,16,{0x01,0x31,0x01,0x63,0x01,0x8F,0x01,0xD5,0x02,0x10,0x02,0x15,0x02,0x4E,0x02,0x8F}},
        {0xBE,16,{0x02,0xB6,0x02,0xEA,0x03,0x0D,0x03,0x3A,0x03,0x54,0x03,0x63,0x03,0x8F,0x03,0x94}},
        {0xBF,4,{0x03,0x96,0x03,0x97}},
        //G(-) MCR cmd
        {0xC0,16,{0x00,0x79,0x00,0x82,0x00,0x95,0x00,0xA5,0x00,0xB4,0x00,0xCE,0x00,0xE6,0x01,0x0D}},
        {0xC1,16,{0x01,0x2D,0x01,0x63,0x01,0x8F,0x01,0xD5,0x02,0x13,0x02,0x14,0x02,0x4F,0x02,0x8D}},
        {0xC2,16,{0x02,0xB5,0x02,0xEA,0x03,0x0D,0x03,0x39,0x03,0x55,0x03,0x68,0x03,0x93,0x03,0x9A}},
        {0xC3,4,{0x03,0xA4,0x03,0xA6}},
        //B(-) MCR cmd
        {0xC4,16,{0x00,0x60,0x00,0x6B,0x00,0x7E,0x00,0x8E,0x00,0x9D,0x00,0xB7,0x00,0xCE,0x00,0xF7}},
        {0xC5,16,{0x01,0x1A,0x01,0x53,0x01,0x82,0x01,0xCC,0x02,0x0C,0x02,0x0F,0x02,0x4C,0x02,0x8E}},
        {0xC6,16,{0x02,0xB7,0x02,0xF2,0x03,0x1B,0x03,0x5C,0x03,0x9C,0x03,0xFC,0x03,0xFC,0x03,0xFD}},
        {0xC7,4,{0x03,0xFE,0x03,0xFE}},


        // PAGE6 : GOUT Mapping,VGLO select
        //#H499 PAGE6 setting
        {0xF0,5,{0x55,0xAA,0x52,0x08,0x06}},
        {0xB0,2,{0x2E,0x2E}},
        {0xB1,2,{0x2E,0x2E}},
        {0xB2,2,{0x2E,0x2E}},
        {0xB3,2,{0x2E,0x09}},
        {0xB4,2,{0x0B,0x23}},
        {0xB5,2,{0x1D,0x1F}},
        {0xB6,2,{0x11,0x17}},
        {0xB7,2,{0x13,0x19}},
        {0xB8,2,{0x01,0x03}},
        {0xB9,2,{0x2E,0x2E}},

        {0xBA,2,{0x2E,0x2E}},
        {0xBB,2,{0x02,0x00}},
        {0xBC,2,{0x18,0x12}},
        {0xBD,2,{0x16,0x10}},
        {0xBE,2,{0x1E,0x1C}},
        {0xBF,2,{0x22,0x0A}},
        {0xC0,2,{0x08,0x2E}},
        {0xC1,2,{0x2E,0x2E}},
        {0xC2,2,{0x2E,0x2E}},
        {0xC3,2,{0x2E,0x2E}},
        {0xE5,2,{0x25,0x24}},

        //#for X499 BW
        {0xC4,2,{0x2E,0x2E}},
        {0xC5,2,{0x2E,0x2E}},
        {0xC6,2,{0x2E,0x2E}},
        {0xC7,2,{0x2E,0x02}},
        {0xC8,2,{0x00,0x24}},
        {0xC9,2,{0x1E,0x1C}},
        {0xCA,2,{0x18,0x12}},
        {0xCB,2,{0x16,0x10}},
        {0xCC,2,{0x0A,0x08}},
        {0xCD,2,{0x2E,0x2E}},

        {0xCE,2,{0x2E,0x2E}},
        {0xCF,2,{0x09,0x0B}},
        {0xD0,2,{0x11,0x17}},
        {0xD1,2,{0x13,0x19}},
        {0xD2,2,{0x1D,0x1F}},
        {0xD3,2,{0x25,0x01}},
        {0xD4,2,{0x03,0x2E}},
        {0xD5,2,{0x2E,0x2E}},
        {0xD6,2,{0x2E,0x2E}},
        {0xD7,2,{0x2E,0x2E}},
        {0xE6,2,{0x22,0x23}},

        {0xD8,5,{0x00,0x00,0x00,0x00,0x00}},
        {0xD9,5,{0x00,0x00,0x00,0x00,0x00}},
        {0xE7,1,{0x00}},
        {0xF0,5,{0x55,0xAA,0x52,0x08,0x05}},
        {0xED,1,{0x30}},
        {0xF0,5,{0x55,0xAA,0x52,0x08,0x03}},
        {0xB0,2,{0x20,0x00}},
        {0xB1,2,{0x20,0x00}},

        {0xF0,5,{0x55,0xAA,0x52,0x08,0x05}},
        {0xB0,2,{0x17,0x06}},
        {0xB8,1,{0x00}},
        {0xBD,5,{0x0F,0x03,0x03,0x00,0x03}},
        {0xB1,2,{0x17,0x06}},
        {0xB9,2,{0x00,0x03}},
        {0xB2,2,{0x17,0x06}},
        {0xBA,2,{0x00,0x03}},
        {0xB3,2,{0x17,0x06}},
        {0xBB,2,{0x00,0x00}},
        {0xB4,2,{0x17,0x06}},
        {0xB5,2,{0x17,0x06}},
        {0xB6,2,{0x17,0x06}},
        {0xB7,2,{0x17,0x06}},
        {0xBC,2,{0x00,0x01}},
        {0xE5,1,{0x06}},
        {0xE6,1,{0x06}},
        {0xE7,1,{0x06}},
        {0xE8,1,{0x06}},
        {0xE9,1,{0x0A}},
        {0xEA,1,{0x06}},
        {0xEB,1,{0x06}},
        {0xEC,1,{0x06}},

        {0xF0,5,{0x55,0xAA,0x52,0x08,0x05}},
        {0xC0,1,{0x07}},
        {0xC1,1,{0x05}},

        {0xF0,5,{0x55,0xAA,0x52,0x08,0x03}},
        {0xB2,5,{0x04,0x00,0x52,0x01,0x51}},
        {0xB3,5,{0x04,0x00,0x52,0x01,0x51}},

        {0xF0,5,{0x55,0xAA,0x52,0x08,0x05}},
        {0xC4,1,{0x82}},
        {0xC5,1,{0x80}},

        {0xF0,5,{0x55,0xAA,0x52,0x08,0x03}},
        {0xB6,5,{0x04,0x00,0x52,0x01,0x51}},
        {0xB7,5,{0x04,0x00,0x52,0x01,0x51}},

        {0xF0,5,{0x55,0xAA,0x52,0x08,0x05}},
        {0xC8,2,{0x03,0x20}},

        {0xC9,2,{0x01,0x21}},
        {0xCA,2,{0x03,0x20}},
        {0xCB,2,{0x07,0x20}},

        {0xF0,5,{0x55,0xAA,0x52,0x08,0x03}},
        {0xC4,1,{0x60}},
        {0xC5,1,{0x40}},

        {0xF0,5,{0x55,0xAA,0x52,0x08,0x03}},
        {0xBA,5,{0x44,0x00,0x60,0x01,0x72}},
        {0xBB,5,{0x44,0x00,0x60,0x01,0x72}},
        {0xBC,5,{0x53,0x00,0x03,0x00,0x48}},
        {0xBD,5,{0x53,0x00,0x03,0x00,0x48}},

        {0xF0,5,{0x55,0xAA,0x52,0x08,0x05}},
        {0xD1,11,{0x03,0x05,0x00,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
        {0xD2,11,{0x03,0x05,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
        {0xD3,11,{0x03,0x05,0x04,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
        {0xD4,11,{0x03,0x05,0x04,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
        {0xF0,5,{0x55,0xAA,0x52,0x08,0x03}},
        {0xC4,1,{0x40}},
        {0xC5,1,{0x40}},

        {0x35,1,{0x00}},
        {0x62, 1, {0x01}},//ESD
        {0x11,1,{0x00}},
        {REGFLAG_DELAY, 120, {}},

        {0x29,1,{0x00}},
        {REGFLAG_DELAY, 20, {}},


		{REGFLAG_END_OF_TABLE, 0x00, {}}
};
#endif
#if defined(DROI_PRO_FQ5B_XDNZ)
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
#endif

