/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "MockSystem.h"

typedef struct _CMOCK_System_AbortRequested_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;
  int CallOrder;

} CMOCK_System_AbortRequested_CALL_INSTANCE;

static struct MockSystemInstance
{
  int System_AbortRequested_IgnoreBool;
  int System_AbortRequested_FinalReturn;
  CMOCK_MEM_INDEX_TYPE System_AbortRequested_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void MockSystem_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.System_AbortRequested_IgnoreBool)
    Mock.System_AbortRequested_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.System_AbortRequested_CallInstance, cmock_line, "Function 'System_AbortRequested' called less times than expected.");
}

void MockSystem_Init(void)
{
  MockSystem_Destroy();
}

void MockSystem_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

int System_AbortRequested(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_System_AbortRequested_CALL_INSTANCE* cmock_call_instance = (CMOCK_System_AbortRequested_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.System_AbortRequested_CallInstance);
  Mock.System_AbortRequested_CallInstance = CMock_Guts_MemNext(Mock.System_AbortRequested_CallInstance);
  if (Mock.System_AbortRequested_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return Mock.System_AbortRequested_FinalReturn;
    Mock.System_AbortRequested_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'System_AbortRequested' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'System_AbortRequested' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'System_AbortRequested' called later than expected.");
  return cmock_call_instance->ReturnVal;
}

void System_AbortRequested_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_System_AbortRequested_CALL_INSTANCE));
  CMOCK_System_AbortRequested_CALL_INSTANCE* cmock_call_instance = (CMOCK_System_AbortRequested_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.System_AbortRequested_CallInstance = CMock_Guts_MemChain(Mock.System_AbortRequested_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.System_AbortRequested_IgnoreBool = (int)1;
}

void System_AbortRequested_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_System_AbortRequested_CALL_INSTANCE));
  CMOCK_System_AbortRequested_CALL_INSTANCE* cmock_call_instance = (CMOCK_System_AbortRequested_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.System_AbortRequested_CallInstance = CMock_Guts_MemChain(Mock.System_AbortRequested_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

