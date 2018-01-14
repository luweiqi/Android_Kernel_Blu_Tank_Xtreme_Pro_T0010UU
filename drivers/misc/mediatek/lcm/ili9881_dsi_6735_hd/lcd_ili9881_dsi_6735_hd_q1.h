#ifndef __LCM_ILI9881_DSI_6735_HD_Q1
#define __LCM_ILI9881_DSI_6735_HD_Q1

#if defined(DROI_PRO_Q1_BPZN)
#define SUPORT_ADC_CHECK
#define TYD_LCD_USE_CUSTOM_ILI9881C_HD
#endif

#if defined(DROI_PRO_Q1_ZGW)||defined(DROI_PRO_Q1_HN)
#define TYD_LCD_USE_CUSTOM_ILI9881C_HD
#endif


#if defined(DROI_PRO_Q1_HN)
static struct LCM_setting_table lcm_initialization_setting[] = {
{0xFF,3,{0x98,0x81,0x03}},
{0x01,1,{0x00}},
{0x02,1,{0x00}},
{0x03,1,{0x53}},
{0x04,1,{0x53}},
{0x05,1,{0x13}},
{0x06,1,{0x04}},
{0x07,1,{0x02}},
{0x08,1,{0x02}},
{0x09,1,{0x00}},
{0x0a,1,{0x00}},
{0x0b,1,{0x00}},
{0x0c,1,{0x00}},
{0x0d,1,{0x00}},
{0x0e,1,{0x00}},
{0x0f,1,{0x00}},
{0x10,1,{0x00}},
{0x11,1,{0x00}},
{0x12,1,{0x00}},
{0x13,1,{0x00}},
{0x14,1,{0x00}},
{0x15,1,{0x00}},
{0x16,1,{0x00}},
{0x17,1,{0x00}},
{0x18,1,{0x00}},
{0x19,1,{0x00}},
{0x1a,1,{0x00}},
{0x1b,1,{0x00}},
{0x1c,1,{0x00}},
{0x1d,1,{0x00}},
{0x1e,1,{0xC0}},
{0x1f,1,{0x80}},
{0x20,1,{0x02}},
{0x21,1,{0x09}},
{0x22,1,{0x00}},
{0x23,1,{0x00}},
{0x24,1,{0x00}},
{0x25,1,{0x00}},
{0x26,1,{0x00}},
{0x27,1,{0x00}},
{0x28,1,{0x55}},
{0x29,1,{0x03}},
{0x2a,1,{0x00}},
{0x2b,1,{0x00}},
{0x2c,1,{0x00}},
{0x2d,1,{0x00}},
{0x2e,1,{0x00}},
{0x2f,1,{0x00}},
{0x30,1,{0x00}},
{0x31,1,{0x00}},
{0x32,1,{0x00}},
{0x33,1,{0x00}},
{0x34,1,{0x03}},
{0x35,1,{0x00}},
{0x36,1,{0x05}},
{0x37,1,{0x00}},
{0x38,1,{0x3C}},
{0x39,1,{0x00}},
{0x3a,1,{0x00}},
{0x3b,1,{0x00}},
{0x3c,1,{0x00}},
{0x3d,1,{0x00}},
{0x3e,1,{0x00}},
{0x3f,1,{0x00}},
{0x40,1,{0x00}},
{0x41,1,{0x00}},
{0x42,1,{0x00}},
{0x43,1,{0x00}},
{0x44,1,{0x00}},
{0x50,1,{0x01}},
{0x51,1,{0x23}},
{0x52,1,{0x45}},
{0x53,1,{0x67}},
{0x54,1,{0x89}},
{0x55,1,{0xab}},
{0x56,1,{0x01}},
{0x57,1,{0x23}},
{0x58,1,{0x45}},
{0x59,1,{0x67}},
{0x5a,1,{0x89}},
{0x5b,1,{0xab}},
{0x5c,1,{0xcd}},
{0x5d,1,{0xef}},
{0x5e,1,{0x01}},
{0x5f,1,{0x14}},
{0x60,1,{0x15}},
{0x61,1,{0x0C}},
{0x62,1,{0x0D}},
{0x63,1,{0x0E}},
{0x64,1,{0x0F}},
{0x65,1,{0x10}},
{0x66,1,{0x11}},
{0x67,1,{0x08}},
{0x68,1,{0x02}},
{0x69,1,{0x0A}},
{0x6a,1,{0x02}},
{0x6b,1,{0x02}},
{0x6c,1,{0x02}},
{0x6d,1,{0x02}},
{0x6e,1,{0x02}},
{0x6f,1,{0x02}},
{0x70,1,{0x02}},
{0x71,1,{0x02}},
{0x72,1,{0x06}},
{0x73,1,{0x02}},
{0x74,1,{0x02}},
{0x75,1,{0x14}},
{0x76,1,{0x15}},
{0x77,1,{0x0F}},
{0x78,1,{0x0E}},
{0x79,1,{0x0D}},
{0x7a,1,{0x0C}},
{0x7b,1,{0x11}},
{0x7c,1,{0x10}},
{0x7d,1,{0x06}},
{0x7e,1,{0x02}},
{0x7f,1,{0x0A}},
{0x80,1,{0x02}},
{0x81,1,{0x02}},
{0x82,1,{0x02}},
{0x83,1,{0x02}},
{0x84,1,{0x02}},
{0x85,1,{0x02}},
{0x86,1,{0x02}},
{0x87,1,{0x02}},
{0x88,1,{0x08}},
{0x89,1,{0x02}},
{0x8A,1,{0x02}},
{0xFF,3,{ 0x98,0x81,0x04}},
{0x00,1,{0x80}},           // 00-3LANE   80-4LANE
{0x6C,1,{0x15}},                //Set VCORE voltage =1.5V);
{0x6E,1,{0x2F}},              //di_pwr_reg=0 for power mode
{0x6F,1,{0x55}},                // reg vcl + pumping ratio
{0x3A,1,{0x24}},                //POWER SAVING);
{0x35,1,{0x1F}},
{0x33,1,{0x00}},
{0x7A,1,{0x0F}},
{0x8D,1,{0x1F}},              //VGL clamp -10
{0x87,1,{0xBA}},               //ESD               );
{0x26,1,{0x76}},
{0xB2,1,{0xD1}},
{0x88,1,{0x0B}},
{0xFF,3,{ 0x98,0x81,0x01}},
{0x22,1,{0x0A}},               //BGR,0x SS);
{0x31,1,{0x00}},               //column inversion);

{0x53 , 1 ,{0x88}},
{0x55 , 1 ,{0x88}},
//{0x34,1,{0x01}},
//{0x55,1,{0x92}},               //VCOM1);  7c
//{0x56,1,{0x00}},       // FOR ²âÊÔÓÃ  ÓÃR53 ÉèÖÃµÄVCOMÖµ
{0x50,1,{0x95}},               // VREG1OUT=4.7V);
{0x51,1,{0x95}},               // VREG2OUT=-4.7V);
{0x60,1,{0x2B}},               //SDT);
{0x63,1,{0x00}},

{0xA0,1,{0x08}},               //VP255 Gamma P);
{0xA1,1,{0x1D}},               //VP251);
{0xA2,1,{0x2A}},               //VP247);
{0xA3,1,{0x14}},               //VP243);
{0xA4,1,{0x16}},               //VP239);
{0xA5,1,{0x29}},               //VP231);
{0xA6,1,{0x1C}},               //VP219);
{0xA7,1,{0x1D}},               //VP203);
{0xA8,1,{0x7E}},               //VP175);
{0xA9,1,{0x1D}},               //VP144);
{0xAA,1,{0x28}},               //VP111);
{0xAB,1,{0x6F}},              //VP80);
{0xAC,1,{0x18}},              //VP52);
{0xAD,1,{0x14}},              //VP36);
{0xAE,1,{0x48}},              //VP24);
{0xAF,1,{0x21}},              //VP16);
{0xB0,1,{0x28}},               //VP12);
{0xB1,1,{0x54}},               //VP8);
{0xB2,1,{0x63}},              //VP4);
{0xB3,1,{0x2C}},              //VP0);

{0xC0,1,{0x08}},              //VN255 GAMMA N);
{0xC1,1,{0x1D}},              //VN251);
{0xC2,1,{0x2A}},              //VN247);
{0xC3,1,{0x13}},              //VN243);
{0xC4,1,{0x16}},              //VN239);
{0xC5,1,{0x29}},              //VN231);
{0xC6,1,{0x1C}},              //VN219);
{0xC7,1,{0x1D}},              //VN203);
{0xC8,1,{0x7F}},              //VN175);
{0xC9,1,{0x1B}},               //VN144);
{0xCA,1,{0x28}},               //VN111);
{0xCB,1,{0x6F}},               //VN80);
{0xCC,1,{0x18}},               //VN52);
{0xCD,1,{0x19}},               //VN36);
{0xCE,1,{0x4F}},               //VN24);
{0xCF,1,{0x21}},               //VN16);
{0xD0,1,{0x28}},               //VN12);
{0xD1,1,{0x54}},               //VN8);
{0xD2,1,{0x63}},               //VN4);
{0xD3,1,{0x2C}},
{0xFF,3,{0x98,0x81,0x00}},
{0x11,1,{}},
{REGFLAG_DELAY, 120, {}},
{0x29,1,{}},
{REGFLAG_DELAY, 10, {}},
{0x35,1,{0x00}},   // te on

	{REGFLAG_END_OF_TABLE, 0x00, {}}
};
#endif

#if defined(DROI_PRO_Q1_ZGW)
static struct LCM_setting_table lcm_initialization_setting[] = {
{0xFF,03,{0x98,0x81,0x03}},
//GIP_1
{0x01,1,{0x00}},
{0x02,1,{0x00}},
{0x03,1,{0x73}},
{0x04,1,{0x00}},
{0x05,1,{0x00}},
{0x06,1,{0x0A}},
{0x07,1,{0x00}},
{0x08,1,{0x00}},
{0x09,1,{0x01}},
{0x0A,1,{0x01}},
{0x0B,1,{0x00}},
{0x0C,1,{0x00}},
{0x0D,1,{0x00}},
{0x0E,1,{0x00}},
{0x0F,1,{0x01}},
{0x10,1,{0x01}},
{0x11,1,{0x00}},
{0x12,1,{0x00}},
{0x13,1,{0x00}},
{0x14,1,{0x00}},
{0x15,1,{0x00}},
{0x16,1,{0x00}},
{0x17,1,{0x00}},
{0x18,1,{0x00}},
{0x19,1,{0x00}},
{0x1A,1,{0x00}},
{0x1B,1,{0x00}},
{0x1C,1,{0x00}},
{0x1D,1,{0x00}},
{0x1E,1,{0x40}},
{0x1F,1,{0xC1}},
{0x20,1,{0x06}},
{0x21,1,{0x01}},
{0x22,1,{0x06}},
{0x23,1,{0x03}},
{0x24,1,{0x8A}},
{0x25,1,{0x8A}},
{0x26,1,{0x00}},
{0x27,1,{0x00}},
{0x28,1,{0x3B}},
{0x29,1,{0x03}},
{0x2A,1,{0x00}},
{0x2B,1,{0x00}},
{0x2C,1,{0x00}},
{0x2D,1,{0x00}},
{0x2E,1,{0x00}},
{0x2F,1,{0x00}},
{0x30,1,{0x00}},
{0x31,1,{0x00}},
{0x32,1,{0x00}},
{0x33,1,{0x00}},
{0x34,1,{0x00}},
{0x35,1,{0x00}},
{0x36,1,{0x00}},
{0x37,1,{0x00}},
{0x38,1,{0x00}},
{0x39,1,{0x00}},
{0x3A,1,{0x00}},
{0x3B,1,{0x00}},
{0x3C,1,{0x00}},
{0x3D,1,{0x00}},
{0x3E,1,{0x00}},
{0x3F,1,{0x00}},
{0x40,1,{0x00}},
{0x41,1,{0x00}},
{0x42,1,{0x00}},
{0x43,1,{0x00}},
{0x44,1,{0x00}},

	//GIP_2
{0x50,1,{0x01}},
{0x51,1,{0x23}},
{0x52,1,{0x45}},
{0x53,1,{0x67}},
{0x54,1,{0x89}},
{0x55,1,{0xAB}},
{0x56,1,{0x01}},
{0x57,1,{0x23}},
{0x58,1,{0x45}},
{0x59,1,{0x67}},
{0x5A,1,{0x89}},
{0x5B,1,{0xAB}},
{0x5C,1,{0xCD}},
{0x5D,1,{0xEF}},
{0x5E,1,{0x00}},

	//GIP_3
{0x5F,1,{0x0C}},
{0x60,1,{0x0D}},
{0x61,1,{0x0E}},
{0x62,1,{0x0F}},
{0x63,1,{0x06}},
{0x64,1,{0x07}},
{0x65,1,{0x02}},
{0x66,1,{0x02}},
{0x67,1,{0x02}},
{0x68,1,{0x02}},
{0x69,1,{0x02}},
{0x6A,1,{0x02}},
{0x6B,1,{0x02}},
{0x6C,1,{0x02}},
{0x6D,1,{0x02}},
{0x6E,1,{0x05}},
{0x6F,1,{0x05}},
{0x70,1,{0x05}},
{0x71,1,{0x02}},
{0x72,1,{0x02}},
{0x73,1,{0x00}},
{0x74,1,{0x01}},
{0x75,1,{0x0C}},
{0x76,1,{0x0D}},
{0x77,1,{0x0E}},
{0x78,1,{0x0F}},
{0x79,1,{0x06}},
{0x7A,1,{0x07}},
{0x7B,1,{0x02}},
{0x7C,1,{0x02}},
{0x7D,1,{0x02}},
{0x7E,1,{0x02}},
{0x7F,1,{0x02}},
{0x80,1,{0x02}},
{0x81,1,{0x02}},
{0x82,1,{0x02}},
{0x83,1,{0x02}},
{0x84,1,{0x05}},
{0x85,1,{0x05}},
{0x86,1,{0x05}},
{0x87,1,{0x02}},
{0x88,1,{0x02}},
{0x89,1,{0x00}},
{0x8A,1,{0x01}},

	//CMD_Page 4
	{0xFF,3,{0x98,0x81,0x04}},
	{0x00,1,{0x00}},// 3 lanes
	{0x6C,1,{0x15}},                //Set VCORE voltage =1.5V
	{0x6E,1,{0x15}},               //di_pwr_reg=0 for power mode 2A //VGH clamp 15V
	{0x6F,1,{0x25}},                // reg vcl + pumping ratio VGH=3.5x VGL=-2.5x
	{0x8D,1,{0x19}},               //VGL clamp -11V
	{0x87,1,{0xBA}},
	{0x26,1,{0x76}},
	{0xB2,1,{0xD1}},
	{0x35,1,{0x1F}},
	{0x3A,1,{0x24}},

	//CMD_Page 1
	{0xFF,3,{0x98,0x81,0x01}},
	{0x22,1,{0x0A}},		//BGR, SS
	{0x52,1,{0x00}},		//column
	{0x53,1,{0x65}},		//VCOM1  72
	{0x54,1,{0x00}},
	{0x55,1,{0x8A}},		//VCOM2  76
	{0x50,1,{0x7C}},		//VREG1OUT=5V  BF
	{0x51,1,{0x77}},		//VREG2OUT=-5V  BF
	{0x31,1,{0x00}},		 //SDT
	{0x60,1,{0x19}},
	{0x61,1,{0x01}},
	{0x62,1,{0x0C}},
	{0x63,1,{0x00}},


{0xA0,1,{0x1A}},
{0xA1,1,{0x35}},
{0xA2,1,{0x44}},
{0xA3,1,{0x15}},
{0xA4,1,{0x17}},
{0xA5,1,{0x2A}},
{0xA6,1,{0x1E}},
{0xA7,1,{0x1F}},
{0xA8,1,{0xB6}},
{0xA9,1,{0x1C}},
{0xAA,1,{0x28}},
{0xAB,1,{0xA0}},
{0xAC,1,{0x1B}},
{0xAD,1,{0x19}},
{0xAE,1,{0x4C}},
{0xAF,1,{0x20}},
{0xB0,1,{0x66}},
{0xB1,1,{0x5D}},
{0xB2,1,{0x67}},
{0xB3,1,{0x34}},

{0xC0,1,{0x1A}},
{0xC1,1,{0x35}},
{0xC2,1,{0x44}},
{0xC3,1,{0x12}},
{0xC4,1,{0x16}},
{0xC5,1,{0x2A}},
{0xC6,1,{0x1F}},
{0xC7,1,{0x20}},
{0xC8,1,{0xB6}},
{0xC9,1,{0x1B}},
{0xCA,1,{0x28}},
{0xCB,1,{0xA0}},
{0xCC,1,{0x1A}},
{0xCD,1,{0x1A}},
{0xCE,1,{0x4C}},
{0xCF,1,{0x21}},
{0xD0,1,{0x66}},
{0xD1,1,{0x5C}},
{0xD2,1,{0x67}},
{0xD3,1,{0x39}},

//CMD_Page 0
	{0xFF,3,{0x98,0x81,0x00}},
	{0x35,1,{0x00}},	//TE on

	{0x11,1,{0x00}},	//sleep out
	{REGFLAG_DELAY, 120, {}},

	{0x29,1,{0x00}},	//display on
	{REGFLAG_DELAY, 20, {}},
	{REGFLAG_END_OF_TABLE, 0x00, {}}
};

#endif

#if defined(DROI_PRO_Q1_BPZN)
static struct LCM_setting_table lcm_initialization_setting_1200[] = {
//CPT 4.98
{0XFF,3,{0X98,0X81,0X03}},
{0X01,1,{0X00}},    //GIP_1
{0X02,1,{0X00}},
{0X03,1,{0X55}},
{0X04,1,{0X13}},
{0X05,1,{0X00}},
{0X06,1,{0X05}},
{0X07,1,{0X01}},
{0X08,1,{0X00}},
{0X09,1,{0X34}},
{0X0a,1,{0X01}},
{0X0b,1,{0X01}},
{0X0c,1,{0X32}},
{0X0d,1,{0X00}},
{0X0e,1,{0X00}},
{0X0f,1,{0X19}},
{0X10,1,{0X19}},
{0X11,1,{0X00}},
{0X12,1,{0X00}},
{0X13,1,{0X00}},
{0X14,1,{0X00}},
{0X15,1,{0X08}},
{0X16,1,{0X08}},
{0X17,1,{0X00}},
{0X18,1,{0X08}},
{0X19,1,{0X00}},
{0X1a,1,{0X00}},
{0X1b,1,{0X00}},
{0X1c,1,{0X00}},
{0X1d,1,{0X00}},
{0X1e,1,{0X40}},
{0X1f,1,{0X40}},
{0X20,1,{0X02}},
{0X21,1,{0X05}},
{0X22,1,{0X02}},
{0X23,1,{0X00}},
{0X24,1,{0X87}},
{0X25,1,{0X87}},
{0X26,1,{0X00}},
{0X27,1,{0X00}},
{0X28,1,{0X3B}},
{0X29,1,{0X03}},
{0X2a,1,{0X00}},
{0X2b,1,{0X00}},
{0X2c,1,{0X00}},
{0X2d,1,{0X00}},
{0X2e,1,{0X00}},
{0X2f,1,{0X00}},
{0X30,1,{0X00}},
{0X31,1,{0X00}},
{0X32,1,{0X00}},
{0X33,1,{0X00}},
{0X34,1,{0X04}},
{0X35,1,{0X00}},
{0X36,1,{0X00}},
{0X37,1,{0X00}},
{0X38,1,{0X01}},
{0X39,1,{0X35}},
{0X3a,1,{0X01}},
{0X3b,1,{0X40}},
{0X3c,1,{0X00}},
{0X3d,1,{0X01}},
{0X3e,1,{0X00}},
{0X3f,1,{0X00}},
{0X40,1,{0X35}},
{0X41,1,{0X88}},
{0X42,1,{0X00}},
{0X43,1,{0X00}},
{0X44,1,{0X1f}},

//GIP_2
{0X50,1,{0X01}},
{0X51,1,{0X23}},
{0X52,1,{0X45}},
{0X53,1,{0X67}},
{0X54,1,{0X89}},
{0X55,1,{0Xab}},
{0X56,1,{0X01}},
{0X57,1,{0X23}},
{0X58,1,{0X45}},
{0X59,1,{0X67}},
{0X5a,1,{0X89}},
{0X5b,1,{0Xab}},
{0X5c,1,{0Xcd}},
{0X5d,1,{0Xef}},

//GIP_3
{0X5e,1,{0X13}},
{0X5f,1,{0X06}},
{0X60,1,{0X0C}},
{0X61,1,{0X0D}},
{0X62,1,{0X0E}},
{0X63,1,{0X0F}},
{0X64,1,{0X02}},
{0X65,1,{0X02}},
{0X66,1,{0X02}},
{0X67,1,{0X02}},
{0X68,1,{0X02}},
{0X69,1,{0X02}},
{0X6a,1,{0X02}},
{0X6b,1,{0X02}},
{0X6c,1,{0X02}},
{0X6d,1,{0X02}},
{0X6e,1,{0X05}},
{0X6f,1,{0X05}},
{0X70,1,{0X05}},
{0X71,1,{0X02}},
{0X72,1,{0X01}},
{0X73,1,{0X00}},
{0X74,1,{0X08}},
{0X75,1,{0X08}},
{0X76,1,{0X0C}},
{0X77,1,{0X0D}},
{0X78,1,{0X0E}},
{0X79,1,{0X0F}},
{0X7a,1,{0X02}},
{0X7b,1,{0X02}},
{0X7c,1,{0X02}},
{0X7d,1,{0X02}},
{0X7e,1,{0X02}},
{0X7f,1,{0X02}},
{0X80,1,{0X02}},
{0X81,1,{0X02}},
{0X82,1,{0X02}},
{0X83,1,{0X02}},
{0X84,1,{0X05}},
{0X85,1,{0X05}},
{0X86,1,{0X05}},
{0X87,1,{0X02}},
{0X88,1,{0X01}},
{0X89,1,{0X00}},
{0X8A,1,{0X06}},

//CMD_Page 4
{0XFF,3,{0X98,0X81,0X04}},

{0x00,1,{0x00}},	// 3lane
{0X68,1,{0Xdb}},
{0X6d,1,{0X08}},               //di_pwr_reg=0 VGH clamp 15V
{0X70,1,{0X00}}, //B3               // reg vcl + VGH pumping ratio 3x VGL=-2x
{0X71,1,{0X00}},                //POWER SAVING
{0X66,1,{0Xfe}},               //VGL clamp -10V
{0X6f,1,{0X05}},               //ESD
{0X82,1,{0X14}},
{0X84,1,{0X14}},

{0X85,1,{0X14}},               //ESD
{0X32,1,{0Xac}},
{0X8c,1,{0X80}},
{0X3c,1,{0Xf5}},               //ESD
{0X3a,1,{0X24}},
{0X88,1,{0X33}},
//CMD_Page 1
{0XFF,3,{0X98,0X81,0X01}},
{0X22,1,{0X0A}},		//BGR, SS
//{0X53,1,{0X92}}, //95		//VCOM1  ¨¨?¨¦???¡ê??¨¢¡À?¡ä?¡ä|
//{0X55,1,{0XA5}},		//VCOM2
{0X31,1,{0X00}},
{0X50,1,{0X73}},         	//VREG1OUT=4.7V
{0X51,1,{0X73}},         	//VREG2OUT=-4.65V
{0X53,1,{0Xb1}},   //b1
{0X55,1,{0Xb1}},

//{0X56,1,{0X00}},

{0X60,1,{0X28}},               //SDT
{0X61,1,{0X00}},		//column inversion
{0X62,1,{0X0d}},		//column inversion
{0X63,1,{0X00}},		//column inversion

{0XA0,1,{0X00}},	//VP255	Gamma P
{0XA1,1,{0X2b}},//1B               //VP251
{0XA2,1,{0X3a}},//29               //VP247
{0XA3,1,{0X13}},              //VP243
{0XA4,1,{0X16}},//14               //VP239
{0XA5,1,{0X29}},//27               //VP231
{0XA6,1,{0X1d}},//1C               //VP219
{0XA7,1,{0X1e}},//1D               //VP203
{0XA8,1,{0Xa1}},//8F               //VP175
{0XA9,1,{0X1b}},//1B               //VP144
{0XAA,1,{0X28}},              //VP111
{0XAB,1,{0X92}},//89               //VP80
{0XAC,1,{0X1c}},              //VP52
{0XAD,1,{0X1b}},//18               //VP36
{0XAE,1,{0X4E}},//4C               //VP24
{0XAF,1,{0X23}},              //VP16
{0XB0,1,{0X28}},//26               //VP12
{0XB1,1,{0X5a}},//60               //VP8
{0XB2,1,{0X69}},//6F               //VP4
{0XB3,1,{0X39}},              //VP0

{0XC0,1,{0X00}},		//VN255 GAMMA N
{0XC1,1,{0X2b}}, //1A               //VN251
{0XC2,1,{0X3a}}, //29               //VN247
{0XC3,1,{0X13}}, //12               //VN243
{0XC4,1,{0X16}}, //14               //VN239
{0XC5,1,{0X29}}, //28               //VN231
{0XC6,1,{0X1D}},               //VN219
{0XC7,1,{0X1E}},               //VN203
{0XC8,1,{0XA1}}, //8F               //VN175
{0XC9,1,{0X1B}}, //1B               //VN144
{0XCA,1,{0X28}}, //27               //VN111
{0XCB,1,{0X92}}, //89               //VN80
{0XCC,1,{0X1C}}, //1B               //VN52
{0XCD,1,{0X1B}}, //18               //VN36
{0XCE,1,{0X4E}}, //4C               //VN24
{0XCF,1,{0X23}}, //22               //VN16
{0XD0,1,{0X28}}, //26               //VN12
{0XD1,1,{0X5A}}, //60               //VN8
{0XD2,1,{0X69}}, //6F               //VN4
{0XD3,1,{0X39}},               //VN0

{0xFF,3,{0x98,0x81,0x00}},
{0x35,1,{0x00}},
{0x11, 1, {0x00}},
{REGFLAG_DELAY, 150, {}},
// Display ON
{0x29, 1, {0x00}},
{REGFLAG_DELAY, 50, {}},
{REGFLAG_END_OF_TABLE, 0x00, {}}
};
static struct LCM_setting_table lcm_initialization_setting_0800[] = {
//IVO 5.0

{0xFF,3,{0x98,0x81,0x03}},

//GIP_1
{0x01,1,{0x00}},
{0x02,1,{0x00}},
{0x03,1,{0x73}},
{0x04,1,{0x73}},
{0x05,1,{0x00}},
{0x06,1,{0x06}},
{0x07,1,{0x02}},
{0x08,1,{0x01}},
{0x09,1,{0x01}},
{0x0a,1,{0x01}},
{0x0b,1,{0x01}},
{0x0c,1,{0x01}},
{0x0d,1,{0x01}},
{0x0e,1,{0x01}},
{0x0f,1,{0x01}},
{0x10,1,{0x01}},
{0x11,1,{0x00}},
{0x12,1,{0x00}},
{0x13,1,{0x01}},
{0x14,1,{0x00}},
{0x15,1,{0x00}},
{0x16,1,{0x00}},
{0x17,1,{0x03}},
{0x18,1,{0x00}},
{0x19,1,{0x00}},
{0x1a,1,{0x00}},
{0x1b,1,{0x00}},
{0x1c,1,{0x00}},
{0x1d,1,{0x00}},
{0x1e,1,{0xC0}},
{0x1f,1,{0x80}},
{0x20,1,{0x04}},
{0x21,1,{0x03}},
{0x22,1,{0x00}},
{0x23,1,{0x00}},
{0x24,1,{0x00}},
{0x25,1,{0x00}},
{0x26,1,{0x00}},
{0x27,1,{0x00}},
{0x28,1,{0x33}},
{0x29,1,{0x03}},
{0x2a,1,{0x00}},
{0x2b,1,{0x00}},
{0x2c,1,{0x00}},
{0x2d,1,{0x00}},
{0x2e,1,{0x00}},
{0x2f,1,{0x00}},
{0x30,1,{0x00}},
{0x31,1,{0x00}},
{0x32,1,{0x00}},
{0x33,1,{0x00}},
{0x34,1,{0x03}},
{0x35,1,{0x00}},
{0x36,1,{0x03}},
{0x37,1,{0x00}},
{0x38,1,{0x00}},
{0x39,1,{0x00}},
{0x3a,1,{0x00}},
{0x3b,1,{0x00}},
{0x3c,1,{0x00}},
{0x3d,1,{0x00}},
{0x3e,1,{0x00}},
{0x3f,1,{0x00}},
{0x40,1,{0x00}},
{0x41,1,{0x00}},
{0x42,1,{0x00}},
{0x43,1,{0x00}},
{0x44,1,{0x00}},

//GIP_2
{0x50,1,{0x01}},
{0x51,1,{0x23}},
{0x52,1,{0x45}},
{0x53,1,{0x67}},
{0x54,1,{0x89}},
{0x55,1,{0xab}},
{0x56,1,{0x01}},
{0x57,1,{0x23}},
{0x58,1,{0x45}},
{0x59,1,{0x67}},
{0x5a,1,{0x89}},
{0x5b,1,{0xab}},
{0x5c,1,{0xcd}},
{0x5d,1,{0xef}},

//GIP_3
{0x5e,1,{0x10}},
{0x5f,1,{0x09}},
{0x60,1,{0x08}},
{0x61,1,{0x0F}},
{0x62,1,{0x0E}},
{0x63,1,{0x0D}},
{0x64,1,{0x0C}},
{0x65,1,{0x02}},
{0x66,1,{0x02}},
{0x67,1,{0x02}},
{0x68,1,{0x02}},
{0x69,1,{0x02}},
{0x6a,1,{0x02}},
{0x6b,1,{0x02}},
{0x6c,1,{0x02}},
{0x6d,1,{0x02}},
{0x6e,1,{0x02}},
{0x6f,1,{0x02}},
{0x70,1,{0x02}},
{0x71,1,{0x06}},
{0x72,1,{0x07}},
{0x73,1,{0x02}},
{0x74,1,{0x02}},

{0x75,1,{0x06}},
{0x76,1,{0x07}},
{0x77,1,{0x0E}},
{0x78,1,{0x0F}},
{0x79,1,{0x0C}},
{0x7a,1,{0x0D}},
{0x7b,1,{0x02}},
{0x7c,1,{0x02}},
{0x7d,1,{0x02}},
{0x7e,1,{0x02}},
{0x7f,1,{0x02}},
{0x80,1,{0x02}},
{0x81,1,{0x02}},
{0x82,1,{0x02}},
{0x83,1,{0x02}},
{0x84,1,{0x02}},
{0x85,1,{0x02}},
{0x86,1,{0x02}},
{0x87,1,{0x09}},
{0x88,1,{0x08}},
{0x89,1,{0x02}},
{0x8A,1,{0x02}},

//CMD_Page 4
{0xFF,3,{0x98,0x81,0x04}},
{0x00,1,{0x00}},               //3line
{0x6C,1,{0x15}},               //VCORE 1.5
{0x6E,1,{0x2A}},               //di_pwr_reg=0 VGH cl
{0x6F,1,{0x34}},               //VGH:4x VGL:-3x VCL:
{0x8D,1,{0x1A}},               //VGL clamp -11.13V

{0x3A,1,{0xA4}},               //Power saving
{0x87,1,{0xBA}},               //ESD Enhance
{0x26,1,{0x76}},               //ESD Enhance
{0xB2,1,{0xD1}},               //ESD Enhance

//CMD_Page 1
{0xFF,4,{0x98,0x81,0x01}},
{0x22,1,{0x0A}},		//BGR, SS
{0x31,1,{0x00}},		//column inversion
{0x40,1,{0x33}},               // 3XVCI
{0x41,1,{0x34}},             // 3XVCI

{0x50,1,{0xA7}},         	//VREG1OUT=4.702V
{0x51,1,{0xA7}},         	//VREG2OUT=-4.702V
{0x53,1,{0x40}},	    	//VCOM1  -1.2V   47
{0x55,1,{0x50}},	    	//VCOM2

{0x60,1,{0x00}},               //SDT
{0x61,1,{0x05}},               //0A
{0x62,1,{0x05}},               //0A
{0x63,1,{0x05}},               //0A

{0xA0,1,{0x00}},		//VP255	Gamma P
{0xA1,1,{0x24}},		//VP251
{0xA2,1,{0x3E}}, 		//VP247 3D
{0xA3,1,{0x17}},		//VP243 21
{0xA4,1,{0x1A}},               //VP239 25
{0xA5,1,{0x2E}},               //VP231 38
{0xA6,1,{0x23}},               //VP219 2A
{0xA7,1,{0x22}},               //VP203 31
{0xA8,1,{0xC2}},               //VP175 BA
{0xA9,1,{0x1D}},               //VP144
{0xAA,1,{0x27}},               //VP111 3C
{0xAB,1,{0xA1}},               //VP80  95
{0xAC,1,{0x2C}},               //VP52
{0xAD,1,{0x34}},               //VP36
{0xAE,1,{0x67}},               //VP24 6B
{0xAF,1,{0x2F}},               //VP16 3F
{0xB0,1,{0x35}},               //VP12
{0xB1,1,{0x3E}},               //VP8 48
{0xB2,1,{0x40}},               //VP4

{0xB3,1,{0x00}},               //VP0

{0xC0,1,{0x00}},		//VN255 GAMMA N
{0xC1,1,{0x1A}},               //VN251
{0xC2,1,{0x2A}},               //VN247  3C
{0xC3,1,{0x1B}},               //VN243  1F
{0xC4,1,{0x22}},               //VN239  22
{0xC5,1,{0x39}},               //VN231
{0xC6,1,{0x2D}},               //VN219
{0xC7,1,{0x2B}},               //VN203
{0xC8,1,{0x99}},               //VN175
{0xC9,1,{0x20}},               //VN144
{0xCA,1,{0x2D}},               //VN111
{0xCB,1,{0x6D}},               //VN80   94
{0xCC,1,{0x1B}},               //VN52
{0xCD,1,{0x1A}},               //VN36
{0xCE,1,{0x52}},               //VN24
{0xCF,1,{0x29}},               //VN16
{0xD0,1,{0x2D}},               //VN12
{0xD1,1,{0x38}},               //VN8
{0xD2,1,{0x3D}},               //VN4
{0xD3,1,{0x00}},               //VN0

//CMD_Page 0
{0xFF,3,{0x98,0x81,0x00}},
{0x35,1,{0x00}},

{0x11,1,{0x00}},
{REGFLAG_DELAY, 120, {}},
{0x29,1,{0x00}},
{REGFLAG_DELAY, 50, {}},
{REGFLAG_END_OF_TABLE, 0x00, {}}


};
#endif

#endif
