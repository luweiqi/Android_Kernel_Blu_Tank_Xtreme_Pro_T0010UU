#ifndef __LCD_RM68200_DSI_HD_B38_H__
#define __LCD_RM68200_DSI_HD_B38_H__

#if defined(DROI_PRO_B38_GB)
//#define SUPORT_ADC_CHECK
#define TYD_LCD_USE_CUSTOM_RM68200_HD
#endif

#if defined(DROI_PRO_B38_GB)
static struct LCM_setting_table lcm_initialization_setting[] = {
{0xFE, 1,{0x01}},

{0x24, 1,{0xC0}},

{0x25, 1,{0x53}},

{0x2B, 1,{0xE5}},

{0x16, 1,{0x52}},

{0x27, 1,{0x0D}},

{0x29, 1,{0x0D}},

{0x2F, 1,{0x50}},

{0x34, 1,{0x55}},

{0x1B, 1,{0x00}},

{0x12, 1,{0x08}},

{0x1A, 1,{0x06}},

{0x46, 1,{0x60}},

{0x52, 1,{0x78}},

{0x53, 1,{0x00}},

{0x54, 1,{0x78}},

{0x55, 1,{0x00}},

{0x5F, 1,{0x12}},

{0xFE, 1,{0x03}},

{0x01, 1,{0x14}},

{0x02, 1,{0x01}},

{0x03, 1,{0x00}},

{0x04, 1,{0x00}},

{0x05, 1,{0x00}},

{0x06, 1,{0x00}},

{0x07, 1,{0x05}},

{0x08, 1,{0x14}},

{0x09, 1,{0x06}},

{0x0A, 1,{0x00}},

{0x0B, 1,{0x00}},

{0x0C, 1,{0x00}},

{0x0D, 1,{0x00}},

{0x0E, 1,{0x0A}},

{0x0F, 1,{0x0B}},

{0x10, 1,{0x0C}},

{0x11, 1,{0x0D}},

{0x12, 1,{0x00}},

{0x13, 1,{0x00}},

{0x14, 1,{0x00}},

{0x15, 1,{0xC5}},

{0x16, 1,{0x08}},

{0x17, 1,{0x0E}},

{0x18, 1,{0x0F}},

{0x19, 1,{0x10}},

{0x1A, 1,{0x11}},

{0x1B, 1,{0x00}},

{0x1C, 1,{0x00}},

{0x1D, 1,{0x00}},

{0x1E, 1,{0x85}},

{0x1F, 1,{0x08}},

{0x20, 1,{0x00}},

{0x21, 1,{0x00}},

{0x22, 1,{0x0A}},

{0x23, 1,{0x10}},

{0x24, 1,{0x12}},

{0x25, 1,{0x2D}},

{0x26, 1,{0x00}},

{0x27, 1,{0x14}},

{0x28, 1,{0x16}},

{0x29, 1,{0x2D}},

{0x2A, 1,{0x00}},

{0x2B, 1,{0x00}},

{0x2C, 1,{0x00}},

{0x2D, 1,{0x00}},

{0x2E, 1,{0x00}},

{0x2F, 1,{0x00}},

{0x30, 1,{0x00}},

{0x31, 1,{0x00}},

{0x32, 1,{0x00}},

{0x33, 1,{0x00}},

{0x34, 1,{0x00}},

{0x35, 1,{0x00}},

{0x36, 1,{0x00}},

{0x37, 1,{0x00}},

{0x38, 1,{0x00}},

{0x39, 1,{0x00}},

{0x3A, 1,{0x00}},

{0x3B, 1,{0x00}},

{0x3C, 1,{0x00}},

{0x3D, 1,{0x00}},

{0x3E, 1,{0x00}},

{0x3F, 1,{0x00}},

{0x40, 1,{0x00}},

{0x41, 1,{0x00}},

{0x42, 1,{0x00}},

{0x43, 1,{0x00}},

{0x44, 1,{0x00}},

{0x45, 1,{0x00}},

{0x46, 1,{0x00}},

{0x47, 1,{0x00}},

{0x48, 1,{0x00}},

{0x49, 1,{0x00}},

{0x4A, 1,{0x00}},

{0x4B, 1,{0x00}},

{0x4C, 1,{0x00}},

{0x4D, 1,{0x00}},

{0x4E, 1,{0x00}},

{0x4F, 1,{0x00}},

{0x50, 1,{0x00}},

{0x51, 1,{0x00}},

{0x52, 1,{0x00}},

{0x53, 1,{0x00}},

{0x54, 1,{0x00}},

{0x55, 1,{0x00}},

{0x56, 1,{0x00}},

{0x57, 1,{0x00}},

{0x58, 1,{0x00}},

{0x59, 1,{0x00}},

{0x5A, 1,{0x00}},

{0x5B, 1,{0x00}},

{0x5C, 1,{0x00}},

{0x5D, 1,{0x00}},

{0x5E, 1,{0x00}},

{0x5F, 1,{0x00}},

{0x60, 1,{0x00}},

{0x61, 1,{0x00}},

{0x62, 1,{0x00}},

{0x63, 1,{0x00}},

{0x64, 1,{0x00}},

{0x65, 1,{0x00}},

{0x66, 1,{0x00}},

{0x67, 1,{0x00}},

{0x68, 1,{0x00}},

{0x69, 1,{0x00}},

{0x6A, 1,{0x00}},

{0x6B, 1,{0x00}},

{0x6C, 1,{0x00}},

{0x6D, 1,{0x00}},

{0x6E, 1,{0x00}},

{0x6F, 1,{0x00}},

{0x70, 1,{0x00}},

{0x71, 1,{0x00}},

{0x72, 1,{0x00}},

{0x73, 1,{0x00}},

{0x74, 1,{0x00}},

{0x75, 1,{0x00}},

{0x76, 1,{0x00}},

{0x77, 1,{0x00}},

{0x78, 1,{0x00}},

{0x79, 1,{0x00}},

{0x7A, 1,{0x00}},

{0x7B, 1,{0x00}},

{0x7C, 1,{0x00}},

{0x7D, 1,{0x00}},

{0x7E, 1,{0x81}},

{0x7F, 1,{0x1C}},

{0x80, 1,{0x1D}},

{0x81, 1,{0x0B}},

{0x82, 1,{0x09}},

{0x83, 1,{0x0F}},

{0x84, 1,{0x3F}},

{0x85, 1,{0x3F}},

{0x86, 1,{0x3F}},

{0x87, 1,{0x3F}},

{0x88, 1,{0x3F}},

{0x89, 1,{0x3F}},

{0x8A, 1,{0x3F}},

{0x8B, 1,{0x3F}},

{0x8C, 1,{0x3F}},

{0x8D, 1,{0x3F}},

{0x8E, 1,{0x3F}},

{0x8F, 1,{0x3F}},

{0x90, 1,{0x3F}},

{0x91, 1,{0x0D}},

{0x92, 1,{0x05}},

{0x93, 1,{0x07}},

{0x94, 1,{0x06}},

{0x95, 1,{0x04}},

{0x96, 1,{0x0C}},

{0x97, 1,{0x3F}},

{0x98, 1,{0x3F}},

{0x99, 1,{0x3F}},

{0x9A, 1,{0x3F}},

{0x9B, 1,{0x3F}},

{0x9C, 1,{0x3F}},

{0x9D, 1,{0x3F}},

{0x9E, 1,{0x3F}},

{0x9F, 1,{0x3F}},

{0xA0, 1,{0x3F}},

{0xA2, 1,{0x3F}},

{0xA3, 1,{0x3F}},

{0xA4, 1,{0x3F}},

{0xA5, 1,{0x0E}},

{0xA6, 1,{0x08}},

{0xA7, 1,{0x0A}},

{0xA9, 1,{0x1D}},

{0xAA, 1,{0x1C}},

{0xAB, 1,{0x00}},

{0xAC, 1,{0x01}},

{0xAD, 1,{0x1D}},

{0xAE, 1,{0x1C}},

{0xAF, 1,{0x0C}},

{0xB0, 1,{0x0E}},

{0xB1, 1,{0x08}},

{0xB2, 1,{0x3F}},

{0xB3, 1,{0x3F}},

{0xB4, 1,{0x3F}},

{0xB5, 1,{0x3F}},

{0xB6, 1,{0x3F}},

{0xB7, 1,{0x3F}},

{0xB8, 1,{0x3F}},

{0xB9, 1,{0x3F}},

{0xBA, 1,{0x3F}},

{0xBB, 1,{0x3F}},

{0xBC, 1,{0x3F}},

{0xBD, 1,{0x3F}},

{0xBE, 1,{0x3F}},

{0xBF, 1,{0x0A}},

{0xC0, 1,{0x06}},

{0xC1, 1,{0x04}},

{0xC2, 1,{0x05}},

{0xC3, 1,{0x07}},

{0xC4, 1,{0x0B}},

{0xC5, 1,{0x3F}},

{0xC6, 1,{0x3F}},

{0xC7, 1,{0x3F}},

{0xC8, 1,{0x3F}},

{0xC9, 1,{0x3F}},

{0xCA, 1,{0x3F}},

{0xCB, 1,{0x3F}},

{0xCC, 1,{0x3F}},

{0xCD, 1,{0x3F}},

{0xCE, 1,{0x3F}},

{0xCF, 1,{0x3F}},

{0xD0, 1,{0x3F}},

{0xD1, 1,{0x3F}},

{0xD2, 1,{0x09}},

{0xD3, 1,{0x0F}},

{0xD4, 1,{0x0D}},

{0xD5, 1,{0x1C}},

{0xD6, 1,{0x1D}},

{0xD7, 1,{0x00}},

{0xDC, 1,{0x02}},

{0xDE, 1,{0x11}},

{0xFE, 1,{0x0E}},

{0x01, 1,{0x75}},

{0x54, 1,{0x01}},

{0xFE, 1,{0x04}},

{0x62, 1,{0x17}},

{0x72, 1,{0x11}},

{0x6D, 1,{0x17}},

{0x7D, 1,{0x13}},

{0x65, 1,{0x11}},

{0x75, 1,{0x11}},

{0x6A, 1,{0x0F}},

{0x7A, 1,{0x0F}},

{0x61, 1,{0x13}},

{0x71, 1,{0x0D}},

{0x63, 1,{0x0C}},

{0x73, 1,{0x0C}},

{0x64, 1,{0x04}},

{0x74, 1,{0x04}},

{0x66, 1,{0x0E}},

{0x76, 1,{0x10}},

{0x67, 1,{0x0B}},

{0x77, 1,{0x0B}},

{0x68, 1,{0x16}},

{0x78, 1,{0x14}},

{0x69, 1,{0x0B}},

{0x79, 1,{0x0B}},

{0x6B, 1,{0x07}},

{0x7B, 1,{0x07}},

{0x6C, 1,{0x0E}},

{0x7C, 1,{0x0E}},

{0x6E, 1,{0x12}},

{0x7E, 1,{0x0E}},

{0x60, 1,{0x0D}},

{0x70, 1,{0x07}},

{0x6F, 1,{0x00}},

{0x7F, 1,{0x00}},

{0xFE, 1,{0x00}},

{0x58, 1,{0x00}},

{0x11, 0,{0x00}},

{REGFLAG_DELAY, 200, {}},

{0x29, 0,{0x00}},
};
#endif

#endif
