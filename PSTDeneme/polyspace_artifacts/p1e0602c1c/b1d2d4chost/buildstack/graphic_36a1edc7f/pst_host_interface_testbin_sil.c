/*
 * File: pst_host_interface_testbin_sil.c
 *
 * Code generated for instrumentation.
 *
 */

#include "pst_host_interface_testbin_sil.h"

/* Code instrumentation offset(s) for model testbin_sil */
#define stackStart_testbin_sil_offset  0
#define stackEnd_testbin_sil_offset    0

/* Code instrumentation offset(s) for model testbin_userCode */
#define stackStart_testbin_userCode_offset 4
#define stackEnd_testbin_userCode_offset 4

/* Code instrumentation offset(s) for model testbin_sil */
#define taskStackStart_testbin_sil_offset 5
#define taskStackEnd_testbin_sil_offset 5

/* A function parameter may be intentionally unused */
#ifndef UNUSED_PARAMETER
#if defined(__LCC__)
#define UNUSED_PARAMETER(x)
#else
#define UNUSED_PARAMETER(x)            (void) (x)
#endif
#endif

void stackStart(uint32_T sectionId)
{
  uint64_T val;
  val = strckptr_x86();
  pst_uploadProfiling((void *)(&val), sizeof(uint64_T), sectionId);
}

void stackEnd(uint32_T sectionId)
{
  uint64_T val;
  uint32_T sectionIdNeg = ~sectionId;
  val = strckptr_x86();
  pst_uploadProfiling((void *)(&val), sizeof(uint64_T), sectionIdNeg);
}

void taskStackStart(uint32_T sectionId)
{
  uint64_T val;
  val = strckptr_x86();
  pst_uploadProfiling((void *)(&val), sizeof(uint64_T), sectionId);
}

void taskStackEnd(uint32_T sectionId)
{
  uint64_T val;
  uint32_T sectionIdNeg = ~sectionId;
  val = strckptr_x86();
  pst_uploadProfiling((void *)(&val), sizeof(uint64_T), sectionIdNeg);
}

/* Code instrumentation method(s) for model testbin_sil */
void stackStart_testbin_sil(uint32_T sectionId)
{
  stackStart(stackStart_testbin_sil_offset + sectionId);
}

void stackEnd_testbin_sil(uint32_T sectionId)
{
  stackEnd(stackEnd_testbin_sil_offset + sectionId);
}

/* Code instrumentation method(s) for model testbin_userCode */
void stackStart_testbin_userCode(uint32_T sectionId)
{
  stackStart(stackStart_testbin_userCode_offset + sectionId);
}

void stackEnd_testbin_userCode(uint32_T sectionId)
{
  stackEnd(stackEnd_testbin_userCode_offset + sectionId);
}

/* Code instrumentation method(s) for model testbin_sil */
void taskStackStart_testbin_sil(uint32_T sectionId)
{
  taskStackStart(taskStackStart_testbin_sil_offset + sectionId);
}

void taskStackEnd_testbin_sil(uint32_T sectionId)
{
  taskStackEnd(taskStackEnd_testbin_sil_offset + sectionId);
}
