#include "pstunit.h"

PST_EXTERN_REGFCN_PROTO(pstestRegisterGeneratedTests);
static void pst_register_suites(void) {
    PST_REGFCN_CALL(pstestRegisterGeneratedTests);
}

#define PST_ENABLE_COVERAGE
#define PST_ENABLE_PROFILING
#include "pst_host_main.c"
