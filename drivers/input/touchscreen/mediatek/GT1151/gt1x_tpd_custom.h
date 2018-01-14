/* drivers/input/touchscreen/gt1x_tpd_custom.h
 *
 * 2010 - 2014 Goodix Technology.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be a reference
 * to you, when you are integrating the GOODiX's CTP IC into your system,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * Version: 1.4
 * Release Date:  2015/07/10
 */

#ifndef GT1X_TPD_CUSTOM_H__
#define GT1X_TPD_CUSTOM_H__

#include <asm/uaccess.h>
//#include <linux/rtpm_prio.h>
#include "tpd.h"
#include "mt_boot_common.h"

#define PLATFORM_MTK
#define TPD_I2C_NUMBER		        1
#define TPD_SUPPORT_I2C_DMA         1	// if gt9l, better enable it if hardware platform supported
#define TPD_HAVE_BUTTON             0	//report key as coordinate,Vibration feedback

/* s960t */
//#define TPD_POWER_SOURCE_CUSTOM	MT6323_POWER_LDO_VGP1	//MT6323_POWER_LDO_VGP1

/* k53v1_64 */
#define TPD_POWER_SOURCE_CUSTOM	PMIC_APP_CAP_TOUCH_VDD

/* y900 */
//#define TPD_POWER_SOURCE_CUSTOM       MT65XX_POWER_LDO_VGP4    //MT6323_POWER_LDO_VGP1

#if TPD_HAVE_BUTTON
#define TPD_KEY_COUNT   4
#define key_1           60,2000
#define key_2           180,2000
#define key_3           300,2000
#define key_4           420,2000
#define TPD_KEY_MAP_ARRAY {{key_1},{key_2},{key_3}}
#define TPD_KEYS        {KEY_BACK, KEY_HOME, KEY_MENU, KEY_SEARCH}
#define TPD_KEYS_DIM    {{key_1,50,30},{key_2,50,30},{key_3,50,30},{key_4,50,30}}
#else
#define TPD_KEY_COUNT   4
#endif

/*
// Change I/O define & I/O operation mode.
#define GTP_RST_PORT    GPIO_CTP_RST_PIN
#define GTP_INT_PORT    GPIO_CTP_EINT_PIN

#define GTP_GPIO_AS_INPUT(pin)          do{\
                                            if(pin == GPIO_CTP_EINT_PIN)\
                                                mt_set_gpio_mode(pin, GPIO_CTP_EINT_PIN_M_EINT);\
                                            else\
                                                mt_set_gpio_mode(pin, GPIO_CTP_RST_PIN_M_GPIO);\
                                            mt_set_gpio_dir(pin, GPIO_DIR_IN);\
                                            mt_set_gpio_pull_enable(pin, GPIO_PULL_DISABLE);\
                                        }while(0)
#define GTP_GPIO_AS_INT(pin)            do{\
                                            mt_set_gpio_mode(pin, GPIO_CTP_EINT_PIN_M_EINT);\
                                            mt_set_gpio_dir(pin, GPIO_DIR_IN);\
                                            mt_set_gpio_pull_enable(pin, GPIO_PULL_DISABLE);\
                                        }while(0)
#define GTP_GPIO_GET_VALUE(pin)         mt_get_gpio_in(pin)
#define GTP_GPIO_OUTPUT(pin,level)      do{\
                                            if(pin == GPIO_CTP_EINT_PIN)\
                                                mt_set_gpio_mode(pin, GPIO_CTP_EINT_PIN_M_GPIO);\
                                            else\
                                                mt_set_gpio_mode(pin, GPIO_CTP_RST_PIN_M_GPIO);\
                                            mt_set_gpio_dir(pin, GPIO_DIR_OUT);\
                                            mt_set_gpio_out(pin, level);\
                                        }while(0)

#define GTP_IRQ_TAB                     {IRQ_TYPE_EDGE_RISING, IRQ_TYPE_EDGE_FALLING, IRQ_TYPE_LEVEL_LOW, IRQ_TYPE_LEVEL_HIGH}
*/

#ifdef MT6589
extern void mt65xx_eint_unmask(unsigned int line);
extern void mt65xx_eint_mask(unsigned int line);
#define mt_eint_mask mt65xx_eint_mask
#define mt_eint_unmask mt65xx_eint_unmask
#endif

#define IIC_MAX_TRANSFER_SIZE         8
#define IIC_DMA_MAX_TRANSFER_SIZE     250
#define I2C_MASTER_CLOCK              300

#define TPD_MAX_RESET_COUNT           3

#define TPD_HAVE_CALIBRATION
#define TPD_CALIBRATION_MATRIX        {962,0,0,0,1600,0,0,0};

extern void tpd_on(void);
extern void tpd_off(void);

#define KEY_GESTURE_U 						KEY_U
#define KEY_GESTURE_UP 						KEY_UP
#define KEY_GESTURE_DOWN 					KEY_DOWN
#define KEY_GESTURE_LEFT 					KEY_LEFT
#define KEY_GESTURE_RIGHT 					KEY_RIGHT
#define KEY_GESTURE_O 						KEY_O
#define KEY_GESTURE_E 						KEY_E
#define KEY_GESTURE_M 						KEY_M
#define KEY_GESTURE_L 						KEY_L
#define KEY_GESTURE_W 						KEY_W
#define KEY_GESTURE_S 						KEY_S
#define KEY_GESTURE_V 						KEY_V
#define KEY_GESTURE_Z 						KEY_Z
#define KEY_GESTURE_C 						KEY_C
#define KEY_GESTURE_TOP_V 					KEY_F
#define KEY_GESTURE_RIGHT_V 					KEY_D

#define GESTURE_LEFT						0x20
#define GESTURE_RIGHT						0x21
#define GESTURE_UP		    					0x22
#define GESTURE_DOWN						0x23
#define GESTURE_DOUBLECLICK				0x24
#define GESTURE_O		    					0x30
#define GESTURE_W		    					0x31
#define GESTURE_M		    					0x32
#define GESTURE_E		    					0x33
#define GESTURE_L		    					0x44
#define GESTURE_S		    					0x46
#define GESTURE_V		    					0x54
#define GESTURE_Z		    					0x65
#define GESTURE_C		    					0x34
#define GESTURE_TOP_V		    				0x53
#define GESTURE_RIGHT_V		    			    0x52

#endif /* GT1X_TPD_CUSTOM_H__ */
