/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKSTUB_INTERRUPT_H
#define _MOCKSTUB_INTERRUPT_H

#include "stub_interrupt.h"

void Mockstub_interrupt_Init(void);
void Mockstub_interrupt_Destroy(void);
void Mockstub_interrupt_Verify(void);




#define sei_Ignore() sei_CMockIgnore()
void sei_CMockIgnore(void);
#define sei_Expect() sei_CMockExpect(__LINE__)
void sei_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define cli_Ignore() cli_CMockIgnore()
void cli_CMockIgnore(void);
#define cli_Expect() cli_CMockExpect(__LINE__)
void cli_CMockExpect(UNITY_LINE_TYPE cmock_line);

#endif