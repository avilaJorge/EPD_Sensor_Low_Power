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

#ifndef RTOS_H_
#define RTOS_H_
#include "conf_EPD.h"
#define TASK_MAX    4
#define EVENT_MAX   32
typedef enum
{
	E_NONE,
	E_NOW,
	E_TIME
} EVEVT_State;
typedef struct
{
	uint32_t EventID;
	uint32_t WaitTime;
	EVEVT_State  State;
} task_event_t;

typedef void (*TASK_handler)(uint32_t EventID);

void Rtos_init(void);
void Rtos_Addtask(TASK_handler task,uint8_t task_id);
uint8_t Rtos_Event_Handle_Timer(uint8_t taskID,uint32_t eventID,uint32_t time);
uint8_t Rtos_Event_Handle(uint8_t taskID,uint32_t eventID);
uint8_t Rtos_Event_Handle_Cancel(uint8_t taskID,uint32_t eventID);
void Rtos_Event_Handle_ClearAll(uint8_t taskID);
void Rtos_Task(void);
extern task_event_t workTask[TASK_MAX][EVENT_MAX];
#endif
