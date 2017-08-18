/**
* Copyright (c) Pervasive Displays Inc. All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* 1. Redistributions of source code must retain the above copyright notice,
*    this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright notice,
*    this list of conditions and the following disclaimer in the documentation
*    and/or other materials provided with the distribution.
*
* 3. The name of Atmel may not be used to endorse or promote products derived
*    from this software without specific prior written permission.
*
* 4. This software may only be redistributed and used in connection with an
*    Atmel microcontroller product.
*
* THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
* EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
* ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
* OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
* ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
**/

#include <stdbool.h>
#include <stdint.h>
#include "driverlib.h"
#include "Board_HW_Driver.h"
#ifndef EPD_Temperature_IIC_H_
#define EPD_Temperature_IIC_H_

#define IIC_Slave_address           0x97

typedef struct
{
	uint32_t SDA_Port;
	uint32_t SDA_Pin;
	uint32_t SCL_Port;
	uint32_t SCL_Pin;
} IIC_IO_Assign_t;

//For Gen2 V1.0
#define TS_SDA0_PORT                 GPIO_PORT_P4       /**<  P4.1  */
#define TS_SDA0_PIN                  GPIO_PIN1

#define TS_SCL0_PORT                 GPIO_PORT_P4       /**<  P4.3  */
#define TS_SCL0_PIN                  GPIO_PIN3

//For Gen2 V1.1
#define TS_SDA1_PORT                 GPIO_PORT_P4       /**<  P4.1  */
#define TS_SDA1_PIN                  GPIO_PIN3

#define TS_SCL1_PORT                 GPIO_PORT_P4       /**<  P4.3  */
#define TS_SCL1_PIN                  GPIO_PIN1

#define SDA_PullUP()				//GPIO_setAsInputPinWithPullUpResistor(TS_SDA_PORT,TS_SDA_PIN)
#define SCL_PullUP()				//GPIO_setAsInputPinWithPullUpResistor(TS_SCL_PORT,TS_SCL_PIN)

//I2C Define
/*
#define getSDA()                    input_get(TS_SDA_PORT,TS_SDA_PIN)
#define TS_SDA_High()         	    set_gpio_high(TS_SDA_PORT,TS_SDA_PIN)
#define TS_SDA_Low()          	    set_gpio_low(TS_SDA_PORT,TS_SDA_PIN)
#define TS_SCL_High()         	    set_gpio_high(TS_SCL_PORT,TS_SCL_PIN)
#define TS_SCL_Low()          	    set_gpio_low(TS_SCL_PORT,TS_SCL_PIN)
*/

int16_t getTemperature(void);
#endif

