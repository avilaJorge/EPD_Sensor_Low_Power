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


#ifndef SRC_PDI_APPS_DRIVERS_COMMANDHANDLE_H_
#define SRC_PDI_APPS_DRIVERS_COMMANDHANDLE_H_


extern void CheckMCU_Feedback_Handle(void *FeedbackData);
extern void RecvVer_Feedback_Handle(void *FeedbackData);
extern void EraseFlash_Feedback_Handle(void *FeedbackData);
extern void EraseEntireFlash_Feedback_Handle(void *FeedbackData);
extern void ReadData_Feedback_Handle(void *FeedbackData);
extern void WriteData_Feedback_Handle(void *FeedbackData);
extern void EPDShow_Feedback_Handle(void *FeedbackData);
extern void WriteImageFileInfo_Feedback_Handle(void *FeedbackData);
extern void ReadImageFileInfo_Feedback_Handle(void *FeedbackData);
extern void WriteImageData_Feedback_Handle(void *FeedbackData);
extern void FastShow_Feedback_Handle(void *FeedbackData);
extern void WriteRunInfo_Feedback_Handle(void *FeedbackData);
extern void ReadRunInfo_Feedback_Handle(void *FeedbackData);
extern void EraseRunInfo_Feedback_Handle(void *FeedbackData);
extern void WriteBootInfo_Feedback_Handle(void *FeedbackData);
extern void ReadBootInfo_Feedback_Handle(void *FeedbackData);
extern void EraseBootInfo_Feedback_Handle(void *FeedbackData);
extern void CMD_Debug_Feedback_Handle(void *FeedbackData);
extern void PreRun_Feedback_Handle(void *FeedbackData);

static const  Command_feedback_handler Command_Event[]=
{
	CheckMCU_Feedback_Handle,
	RecvVer_Feedback_Handle,
	EraseFlash_Feedback_Handle,
	EraseEntireFlash_Feedback_Handle,
	ReadData_Feedback_Handle,
	WriteData_Feedback_Handle,
	EPDShow_Feedback_Handle,
	WriteImageFileInfo_Feedback_Handle,
	ReadImageFileInfo_Feedback_Handle,
	WriteImageData_Feedback_Handle,
	FastShow_Feedback_Handle,
	WriteRunInfo_Feedback_Handle,
	ReadRunInfo_Feedback_Handle,
	EraseRunInfo_Feedback_Handle,
	WriteBootInfo_Feedback_Handle,
	ReadBootInfo_Feedback_Handle,
	EraseBootInfo_Feedback_Handle,
	CMD_Debug_Feedback_Handle,
	PreRun_Feedback_Handle
};




#endif /* SRC_PDI_APPS_DRIVERS_COMMANDHANDLE_H_ */
