/*
 * File: pst_host_interface_testbin_sil.h
 *
 * Code generated for instrumentation.
 *
 */

#include "rtwtypes.h"

/* Functions with a C call interface */
#ifdef __cplusplus

extern "C"
{

#endif

#include "host_stack_x86.h"
#ifdef __cplusplus

}

#endif

/* Upload code instrumentation data point */
void pst_uploadProfiling(
  void* pData, uint32_T numMemUnits, uint32_T sectionId);

/* Code instrumentation method(s) for model testbin_sil */
void stackStart_testbin_sil(uint32_T sectionId);
void stackEnd_testbin_sil(uint32_T sectionId);

/* Code instrumentation method(s) for model testbin_userCode */
void stackStart_testbin_userCode(uint32_T sectionId);
void stackEnd_testbin_userCode(uint32_T sectionId);

/* Code instrumentation method(s) for model testbin_sil */
void taskStackStart_testbin_sil(uint32_T sectionId);
void taskStackEnd_testbin_sil(uint32_T sectionId);
