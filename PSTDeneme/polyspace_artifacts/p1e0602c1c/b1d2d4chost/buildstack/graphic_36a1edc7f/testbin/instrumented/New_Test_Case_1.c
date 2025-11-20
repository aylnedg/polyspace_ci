#ifndef __MW_INTERNAL_SLDV_PS_ANALYSIS__
static unsigned int __mw_instrum_testbin_sil_hits[2];

static unsigned int* __mw_instrum_testbin_sil_phits= &__mw_instrum_testbin_sil_hits[0];

#define __MW_INSTRUM_HITS_TABLE_VAR_NAME __mw_instrum_testbin_sil_phits

#define __MW_INSTRUM_RECORD_HIT_NO_TEST(id) ((void)(__mw_instrum_testbin_sil_phits[(id - 1U) / 32] |= (1U << ((id - 1U) % 32))))
#define __MW_INSTRUM_RECORD_HIT(id) __MW_INSTRUM_RECORD_HIT_NO_TEST(id)

static char __mw_instrum_testbin_sil_is_registered = 0;

static void __MW_INSTRUM_testbin_sil_REGISTER_THIS_FILE(unsigned int fcnEnterId);


#define __MW_INSTRUM_FCN_ENTER_1() 
#define __MW_INSTRUM_FCN_ENTER_2() 
#define __MW_INSTRUM_FCN_ENTER_3() 
#define __MW_INSTRUM_FCN_ENTER_4() 

#define __MW_INSTRUM_NODE_1() ((__mw_instrum_testbin_sil_is_registered ? (void)0 : (void)__MW_INSTRUM_testbin_sil_REGISTER_THIS_FILE(1)), ((void)0))
#define __MW_INSTRUM_NODE_2() (((void)0))
#define __MW_INSTRUM_NODE_3() ((__mw_instrum_testbin_sil_is_registered ? (void)0 : (void)__MW_INSTRUM_testbin_sil_REGISTER_THIS_FILE(2)), ((void)0))
#define __MW_INSTRUM_NODE_4() (((void)0))
#define __MW_INSTRUM_NODE_5(expr) (expr)
#define __MW_INSTRUM_NODE_7(expr) (expr)
#define __MW_INSTRUM_NODE_9(expr) (expr)
#define __MW_INSTRUM_NODE_11() (((void)0))
#define __MW_INSTRUM_NODE_12() ((__mw_instrum_testbin_sil_is_registered ? (void)0 : (void)__MW_INSTRUM_testbin_sil_REGISTER_THIS_FILE(3)), ((void)0))
#define __MW_INSTRUM_NODE_13() (((void)0))
#define __MW_INSTRUM_NODE_14(expr) (expr)
#define __MW_INSTRUM_NODE_16() (((void)0))
#define __MW_INSTRUM_NODE_17() ((__mw_instrum_testbin_sil_is_registered ? (void)0 : (void)__MW_INSTRUM_testbin_sil_REGISTER_THIS_FILE(4)), ((void)0))
#define __MW_INSTRUM_NODE_18() (((void)0))
#ifdef __cplusplus
template<typename T>
static T *__mw_instrum_address_of(T& arg)
{
  return reinterpret_cast<T*>(
               &const_cast<char&>(
                   reinterpret_cast<const volatile char&>(arg)));
}
#endif

static void __MW_INSTRUM_testbin_sil_REGISTER_THIS_FILE(unsigned int fcnEnterId)
{
 (void)fcnEnterId;}

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#define __mw_instrum_address_of(x) &(x)


#define __MW_INSTRUM_FCN_ENTER_1() 

#define __MW_INSTRUM_FCN_ENTER_2() 

#define __MW_INSTRUM_FCN_ENTER_3() 

#define __MW_INSTRUM_FCN_ENTER_4() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_1EZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4(void) { }
#define __MW_INSTRUM_NODE_1() __MW_INSTRUM_RECORD_HIT_1EZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_2XZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4(void) { }
#define __MW_INSTRUM_NODE_2() __MW_INSTRUM_RECORD_HIT_2XZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_3EZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4(void) { }
#define __MW_INSTRUM_NODE_3() __MW_INSTRUM_RECORD_HIT_3EZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4()

#define __MW_INSTRUM_NODE_4() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_5DZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_5(...) (__MW_INSTRUM_RECORD_HIT_5DZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_5(exp) (__MW_INSTRUM_RECORD_HIT_5DZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_7DZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_7(...) (__MW_INSTRUM_RECORD_HIT_7DZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_7(exp) (__MW_INSTRUM_RECORD_HIT_7DZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_9(...) (__VA_ARGS__) 
#else
#define __MW_INSTRUM_NODE_9(exp) (exp)
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_11XZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4(void) { }
#define __MW_INSTRUM_NODE_11() __MW_INSTRUM_RECORD_HIT_11XZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_12EZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4(void) { }
#define __MW_INSTRUM_NODE_12() __MW_INSTRUM_RECORD_HIT_12EZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4()

#define __MW_INSTRUM_NODE_13() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_14DZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_14(...) (__MW_INSTRUM_RECORD_HIT_14DZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_14(exp) (__MW_INSTRUM_RECORD_HIT_14DZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_16XZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4(void) { }
#define __MW_INSTRUM_NODE_16() __MW_INSTRUM_RECORD_HIT_16XZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_17EZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4(void) { }
#define __MW_INSTRUM_NODE_17() __MW_INSTRUM_RECORD_HIT_17EZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_18XZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4(void) { }
#define __MW_INSTRUM_NODE_18() __MW_INSTRUM_RECORD_HIT_18XZ_New_Test_Case_1_85DBCB1703087F0A5A2EE30044452BC4()


#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

#line 1 "E:\\Denemeler\\PSTDeneme\\polyspace_artifacts\\p1e0602c1c\\b1d2d4chost\\codegen\\test\\New_Test_Case_1.c"
extern void stackEnd_testbin_sil(unsigned); extern void stackStart_testbin_sil(unsigned); 
#line 1 "E:\\Denemeler\\PSTDeneme\\polyspace_artifacts\\p1e0602c1c\\b1d2d4chost\\buildstack\\graphic_36a1edc7f\\rtwtypes.h"
#ifndef RTWTYPES_H
#define RTWTYPES_H
#line 12 "C:\\Program Files\\Polyspace\\R2024a\\extern\\include\\tmwtypes.h"
#ifndef tmwtypes_h
#define tmwtypes_h

#ifndef __TMWTYPES__
#define __TMWTYPES__
#line 23 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.40.33807\\include\\vcruntime.h"
#ifndef _VCRUNTIME_H
#define _VCRUNTIME_H
#line 36
#ifndef _UCRT
#define _UCRT
#endif /* _UCRT */
#line 148 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.40.33807\\include\\sal.h"
#ifndef _SAL_VERSION
#define _SAL_VERSION 20
#endif /* _SAL_VERSION */

#ifndef __SAL_H_VERSION
#define __SAL_H_VERSION 180000000
#endif /* __SAL_H_VERSION */
#line 182
#ifndef _USE_DECLSPECS_FOR_SAL
#define _USE_DECLSPECS_FOR_SAL 0
#endif /* _USE_DECLSPECS_FOR_SAL */
#ifndef _USE_ATTRIBUTES_FOR_SAL
#define _USE_ATTRIBUTES_FOR_SAL 0
#endif /* _USE_ATTRIBUTES_FOR_SAL */
#line 224
#ifndef _SAL_L_Source_
#define _SAL_L_Source_(Name,args,annotes) _SA_annotes3(SAL_name, #Name, "", "2") _Group_(annotes _SAL_nop_impl_)

#endif /* _SAL_L_Source_ */
#line 2363
#ifndef __nothrow
#define __nothrow
#endif /* __nothrow */
#line 16 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.40.33807\\include\\concurrencysal.h"
#ifndef CONCURRENCYSAL_H
#define CONCURRENCYSAL_H
#line 293
#ifndef _Interlocked_operand_
#define _Interlocked_operand_
#endif /* _Interlocked_operand_ */
#line 394
#endif /* CONCURRENCYSAL_H */
#line 37 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.40.33807\\include\\vadefs.h"
#ifndef _VCRUNTIME_EXTRA_DISABLED_WARNINGS
#define _VCRUNTIME_EXTRA_DISABLED_WARNINGS
#endif /* _VCRUNTIME_EXTRA_DISABLED_WARNINGS */



#ifndef _VCRUNTIME_DISABLED_WARNINGS
#define _VCRUNTIME_DISABLED_WARNINGS _VCRUNTIME_DISABLED_WARNING_4339 _VCRUNTIME_DISABLED_WARNING_4412 4514 4820 _VCRUNTIME_EXTRA_DISABLED_WARNINGS
#endif /* _VCRUNTIME_DISABLED_WARNINGS */
#line 58
#ifndef _UINTPTR_T_DEFINED
#define _UINTPTR_T_DEFINED
#line 708 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.40.33807\\include\\sal.h"
#pragma region Input Buffer SAL 1 compatibility macros
#line 1472
#pragma endregion Input Buffer SAL 1 compatibility macros
#line 15 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.40.33807\\include\\vadefs.h"
#pragma pack ( push, 8 )
#line 47
#pragma warning(push)
#pragma warning(disable: 4514 4820)
#line 61
typedef unsigned __int64 uintptr_t; 



#endif /* _UINTPTR_T_DEFINED */

#ifndef _VA_LIST_DEFINED
#define _VA_LIST_DEFINED



typedef char *va_list; 

#endif /* _VA_LIST_DEFINED */
#line 155
void __cdecl __va_start(va_list *, ...); 
#line 207
#pragma warning(pop)
#pragma pack ( pop )
#line 60 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.40.33807\\include\\vcruntime.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)
#line 96
__pragma( pack ( push, 8 )) 
#line 188
typedef unsigned __int64 size_t; 
typedef __int64 ptrdiff_t; 
typedef __int64 intptr_t; 
#line 204
typedef _Bool __vcrt_bool; 



#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#endif /* _SIZE_T_DEFINED */

#ifndef _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFINED
#endif /* _PTRDIFF_T_DEFINED */

#ifndef _INTPTR_T_DEFINED
#define _INTPTR_T_DEFINED
#endif /* _INTPTR_T_DEFINED */


#ifndef _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED
typedef unsigned short wchar_t; 
#endif /* _WCHAR_T_DEFINED */
#line 378
void __cdecl __security_init_cookie(void); 
#line 387
void __cdecl __security_check_cookie(uintptr_t _StackCookie); 
__declspec(noreturn) void __cdecl __report_gsfailure(uintptr_t _StackCookie); 



extern uintptr_t __security_cookie; 
#line 404
#endif /* _VCRUNTIME_H */
#line 8 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.40.33807\\include\\stdbool.h"
#ifndef _STDBOOL
#define _STDBOOL
#line 21
#endif /* _STDBOOL */
#line 62 "C:\\Program Files\\Polyspace\\R2024a\\extern\\include\\tmwtypes.h"
#ifndef FLT_MANT_DIG
#define FLT_MANT_DIG 24
#endif /* FLT_MANT_DIG */
#ifndef DBL_MANT_DIG
#define DBL_MANT_DIG 53
#endif /* DBL_MANT_DIG */
#line 400 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.40.33807\\include\\vcruntime.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 13 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.40.33807\\include\\limits.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)

__pragma( pack ( push, 8 )) 
#line 76
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 89 "C:\\Program Files\\Polyspace\\R2024a\\extern\\include\\tmwtypes.h"
typedef unsigned char uchar_T; 
typedef unsigned short ushort_T; 
typedef unsigned long ulong_T; 
#line 97
typedef unsigned __int64 ulonglong_T; 
#line 222
typedef char int8_T; 
#line 239
typedef unsigned char uint8_T; 
#line 257
typedef short int16_T; 
#line 275
typedef unsigned short uint16_T; 
#line 293
typedef int int32_T; 
#line 311
typedef unsigned uint32_T; 
#line 372
typedef float real32_T; 
#line 386
typedef double real64_T; 
#line 436
#ifndef INT64_T
#define INT64_T __int64
#endif /* INT64_T */
#ifndef UINT64_T
#define UINT64_T unsigned __int64
#endif /* UINT64_T */
#ifndef FMT64
#define FMT64 "I64"
#endif /* FMT64 */
#line 465
typedef __int64 int64_T; 
#line 479
typedef unsigned __int64 uint64_T; 
#line 535
typedef real64_T real_T; 
#line 544
typedef real_T time_T; 
#line 556
typedef unsigned char boolean_T; 


#ifndef CHARACTER_T
#define CHARACTER_T char
#endif /* CHARACTER_T */
typedef char char_T; 


#ifndef INTEGER_T
#define INTEGER_T int
#endif /* INTEGER_T */
typedef int int_T; 


#ifndef UINTEGER_T
#define UINTEGER_T unsigned
#endif /* UINTEGER_T */
typedef unsigned uint_T; 


#ifndef BYTE_T
#define BYTE_T unsigned char
#endif /* BYTE_T */
typedef unsigned char byte_T; 
#line 592
typedef 
#line 590
struct { 
real32_T re, im; 
} creal32_T; 
#line 601
typedef 
#line 599
struct { 
real64_T re, im; 
} creal64_T; 
#line 610
typedef 
#line 608
struct { 
real_T re, im; 
} creal_T; 
#line 621
typedef 
#line 619
struct { 
int8_T re, im; 
} cint8_T; 
#line 630
typedef 
#line 628
struct { 
uint8_T re, im; 
} cuint8_T; 
#line 639
typedef 
#line 637
struct { 
int16_T re, im; 
} cint16_T; 
#line 648
typedef 
#line 646
struct { 
uint16_T re, im; 
} cuint16_T; 
#line 657
typedef 
#line 655
struct { 
int32_T re, im; 
} cint32_T; 
#line 666
typedef 
#line 664
struct { 
uint32_T re, im; 
} cuint32_T; 
#line 675
typedef 
#line 673
struct { 
int64_T re, im; 
} cint64_T; 
#line 684
typedef 
#line 682
struct { 
uint64_T re, im; 
} cuint64_T; 
#line 759
__forceinline uint64_T double_to_uint64_helper(double d) { 
union double_to_uint64_union_type { 
double dd; 
uint64_T i64; 
} di; 
di.dd = d; 
return ((((di.i64) & (0xfffffffffffffi64)) | (0x10000000000000i64)) << 11); 
} 
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\stddef.h"
#ifndef _INC_STDDEF
#define _INC_STDDEF
#line 40 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt.h"
#ifndef _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE
#define _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE 1
#endif /* _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE */
#line 76
#ifndef _UCRT_EXTRA_DISABLED_WARNINGS
#define _UCRT_EXTRA_DISABLED_WARNINGS
#endif /* _UCRT_EXTRA_DISABLED_WARNINGS */
#line 92
#ifndef _UCRT_DISABLED_WARNINGS
#define _UCRT_DISABLED_WARNINGS 4324 _UCRT_DISABLED_WARNING_4412 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 _UCRT_EXTRA_DISABLED_WARNINGS
#endif /* _UCRT_DISABLED_WARNINGS */
#line 144
#ifndef _ACRTIMP_ALT
#define _ACRTIMP_ALT _ACRTIMP
#endif /* _ACRTIMP_ALT */
#line 121
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 274
typedef _Bool __crt_bool; 
#line 328
#ifndef _CRT_UNUSED
#define _CRT_UNUSED(x) (void)x
#endif /* _CRT_UNUSED */
#line 371
void __cdecl _invalid_parameter_noinfo(void); 
__declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(void); 

__declspec(noreturn) void __cdecl 
_invoke_watson(const wchar_t * _Expression, const wchar_t * _FunctionName, const wchar_t * _FileName, unsigned _LineNo, uintptr_t _Reserved); 
#line 498
#ifndef __STDC_WANT_SECURE_LIB__
#define __STDC_WANT_SECURE_LIB__ 1
#endif /* __STDC_WANT_SECURE_LIB__ */
#line 593
#ifndef _CRT_SECURE_CPP_NOTHROW
#define _CRT_SECURE_CPP_NOTHROW throw()
#endif /* _CRT_SECURE_CPP_NOTHROW */
#line 604
typedef int errno_t; 
typedef unsigned short wint_t; 
typedef unsigned short wctype_t; 
typedef long __time32_t; 
typedef __int64 __time64_t; 
#line 615
typedef 
#line 610
struct __crt_locale_data_public { 

const unsigned short *_locale_pctype; 
int _locale_mb_cur_max; 
unsigned _locale_lc_codepage; 
} __crt_locale_data_public; 
#line 621
typedef 
#line 617
struct __crt_locale_pointers { 

struct __crt_locale_data *locinfo; 
struct __crt_multibyte_data *mbcinfo; 
} __crt_locale_pointers; 

typedef __crt_locale_pointers *_locale_t; 
#line 629
typedef 
#line 625
struct _Mbstatet { 

unsigned long _Wchar; 
unsigned short _Byte, _State; 
} _Mbstatet; 

typedef _Mbstatet mbstate_t; 
#line 645
typedef __time64_t time_t; 




#ifndef _TIME_T_DEFINED
#define _TIME_T_DEFINED
#endif /* _TIME_T_DEFINED */


typedef size_t rsize_t; 
#line 2072
__pragma( pack ( pop )) 


#pragma warning(pop)
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\stddef.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 35
int *__cdecl _errno(void); 


errno_t __cdecl _set_errno(int _Value); 
errno_t __cdecl _get_errno(int * _Value); 
#line 55
extern unsigned long __cdecl __threadid(void); 

extern uintptr_t __cdecl __threadhandle(void); 
#line 64
#endif /* _INC_STDDEF */
#line 61
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 834 "C:\\Program Files\\Polyspace\\R2024a\\extern\\include\\tmwtypes.h"
typedef size_t mwSize; 
typedef size_t mwIndex; 
typedef ptrdiff_t mwSignedIndex; 





#ifndef SLSIZE_SLINDEX
#define SLSIZE_SLINDEX

typedef int64_T SLIndex; 
typedef int64_T SLSize; 




#endif /* SLSIZE_SLINDEX */
#line 880
typedef wchar_t CHAR16_T; 





#endif /* __TMWTYPES__ */

#endif /* tmwtypes_h */
#line 5 "E:\\Denemeler\\PSTDeneme\\polyspace_artifacts\\p1e0602c1c\\b1d2d4chost\\buildstack\\graphic_36a1edc7f\\rtwtypes.h"
#endif /* RTWTYPES_H */
#line 3 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\pstunit.h"
#ifndef PSTUNIT_H_
#define PSTUNIT_H_
#line 2 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\internal\\pstunit_version.h"
#ifndef PSTUNIT_VERSION_H
#define PSTUNIT_VERSION_H
#line 13
#endif /* PSTUNIT_VERSION_H */
#line 3 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\..\\..\\common\\include\\pst_fwd_decl.h"
#ifndef PST_FWD_DECL_H_
#define PST_FWD_DECL_H_
#line 27
#ifndef PST_COMMON_PREFIX
#define PST_COMMON_PREFIX pst
#endif /* PST_COMMON_PREFIX */




#endif /* PST_FWD_DECL_H_ */
#line 3 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\internal\\pstunit_types.h"
#ifndef PSTUNIT_TYPES_H_
#define PSTUNIT_TYPES_H_
#line 19
typedef 
#line 15
enum pst_context_status_e { 
PST_CONTEXT_STATUS_NONE, 
PST_CONTEXT_STATUS_INIT, 
PST_CONTEXT_STATUS_RUN
} pst_context_status; 
#line 25
typedef 
#line 22
enum pst_test_config_status_e { 
PST_TEST_CONFIG_STATUS_NONE, 
PST_TEST_CONFIG_STATUS_ERROR
} pst_test_config_status; 
#line 42
typedef 
#line 30
enum pst_suite_status_e { 
PST_SUITE_STATUS_NONE, 
PST_SUITE_STATUS_FAIL, 
PST_SUITE_STATUS_INCOMPLETE, 
PST_SUITE_STATUS_ABORT = 0x4, 
#line 41
PST_SUITE_STATUS_SETUP = 0x8
} pst_suite_status; 
#line 97
typedef 
#line 48
enum pst_evaluation_type_e { 
PST_PRED_EVAL, 
PST_CMP_EQ_INT, 
PST_CMP_NE_INT, 
PST_CMP_LT_INT, 
PST_CMP_LE_INT, 
PST_CMP_GT_INT, 
PST_CMP_GE_INT, 
PST_CMP_EQ_UINT, 
PST_CMP_NE_UINT, 
PST_CMP_LT_UINT, 
PST_CMP_LE_UINT, 
PST_CMP_GT_UINT, 
PST_CMP_GE_UINT, 
PST_CMP_EQ_APPROX_FLT, 
PST_CMP_NE_APPROX_FLT, 
PST_CMP_LT_FLT, 
PST_CMP_LE_FLT, 
PST_CMP_GT_FLT, 
PST_CMP_GE_FLT, 
PST_CMP_EQ_CSTR, 
PST_CMP_NE_CSTR, 
PST_CMP_LT_CSTR, 
PST_CMP_LE_CSTR, 
PST_CMP_GT_CSTR, 
PST_CMP_GE_CSTR, 
PST_CMP_EACH_EQ_CSTR, 
PST_CMP_EQ_PTR, 
PST_CMP_NE_PTR, 
PST_CMP_EACH_EQ_PTR, 
PST_CMP_EQ_BITS, 
PST_CMP_EQ_MASK_BITS, 
PST_CMP_EQ, 
PST_CMP_NE, 
PST_CMP_LT, 
PST_CMP_LE, 
PST_CMP_GT, 
PST_CMP_GE, 
PST_CMP_EQ_APPROX, 
PST_CMP_NE_APPROX, 
PST_CMP_EACH_EQ, 
PST_ANY_THROW_EVAL, 
PST_THROW_EVAL, 
PST_NO_THROW_EVAL, 
PST_TROMPELOEIL_EVAL, 
PST_GOOGLEMOCK_EVAL, 
PST_FAKEIT_UNEXPECTED_METHOD_CALL_EVAL, 
PST_FAKEIT_SEQUENCE_EVAL, 
PST_FAKEIT_NO_MORE_INVOCATIONS_EVAL
} pst_evaluation_type; 
#line 116
typedef 
#line 101
enum pst_step_type_s { 
PST_STEP_TYPE_OTHER, 
PST_STEP_TYPE_TEST_CONFIG, 
PST_STEP_TYPE_TEST_FIXTURE_CONFIG, 
PST_STEP_TYPE_SUITE_CONFIG, 
PST_STEP_TYPE_SUITE_FIXTURE_CONFIG, 
PST_STEP_TYPE_SUITE_SETUP, 
PST_STEP_TYPE_SUITE_FIXTURE_SETUP, 
PST_STEP_TYPE_SUITE_TEST_SETUP, 
PST_STEP_TYPE_SUITE_FIXTURE_TEST_SETUP, 
PST_STEP_TYPE_TEST_SETUP, 
PST_STEP_TYPE_TEST_FIXTURE_SETUP, 
PST_STEP_TYPE_SUITE_TEARDOWN, 
PST_STEP_TYPE_SUITE_TEST_TEARDOWN, 
PST_STEP_TYPE_TEST_TEARDOWN
} pst_step_type; 
#line 125
typedef 
#line 120
enum pst_step_status_e { 
PST_STEP_STATUS_NONE, 
PST_STEP_STATUS_FAIL, 
PST_STEP_STATUS_INCOMPLETE, 
PST_STEP_STATUS_ABORT = 0x4
} pst_step_status; 
#line 139
typedef 
#line 130
enum pst_step_reasons_e { 
PST_STEP_REASONS_NONE, 
PST_STEP_REASONS_VERIFY, 
PST_STEP_REASONS_ASSERT, 
PST_STEP_REASONS_ASSUME = 0x4, 
PST_STEP_REASONS_EXCEPTION = 0x8, 
PST_STEP_REASONS_NOTRUN = 0x10, 
PST_STEP_REASONS_ERROR = 0x20, 
PST_STEP_REASONS_CONFIG_ERROR = 0x40
} pst_step_reasons; 
#line 151
typedef 
#line 146
enum pst_assessment_severity_e { 
PST_NONE_ASSESSMENT, 
PST_VERIFY_ASSESSMENT, 
PST_ASSERT_ASSESSMENT, 
PST_ASSUME_ASSESSMENT
} pst_assessment_severity; 


typedef size_t pst_uint; 
typedef size_t pst_size_t; 
typedef ptrdiff_t pst_ptrdiff_t; 
typedef pst_uint pst_counter; 
#ifndef PST_INDEX_TYPE
#define PST_INDEX_TYPE unsigned int
#endif /* PST_INDEX_TYPE */
typedef unsigned pst_index; 
typedef unsigned char pst_bool; 



typedef long pst_line_number; 
#line 208
typedef 
#line 176
enum pst_event_type_e { 
PST_EVENT_NONE, 
PST_EVENT_START, 
PST_EVENT_END, 
PST_EVENT_RUN_START, 
PST_EVENT_RUN_END, 
PST_EVENT_SUITE_CONFIG_START, 
PST_EVENT_SUITE_CONFIG_END, 
PST_EVENT_SUITE_START, 
PST_EVENT_SUITE_END, 
PST_EVENT_SUITE_SETUP_START, 
PST_EVENT_SUITE_SETUP_END, 
PST_EVENT_SUITE_TEARDOWN_START, 
PST_EVENT_SUITE_TEARDOWN_END, 
PST_EVENT_TEST_CONFIG_START, 
PST_EVENT_TEST_CONFIG_END, 
PST_EVENT_TEST_START, 
PST_EVENT_TEST_END, 
PST_EVENT_SKIP_TEST, 
PST_EVENT_SUITE_TEST_SETUP_START, 
PST_EVENT_SUITE_TEST_SETUP_END, 
PST_EVENT_SUITE_TEST_TEARDOWN_START, 
PST_EVENT_SUITE_TEST_TEARDOWN_END, 
PST_EVENT_TEST_SETUP_START, 
PST_EVENT_TEST_SETUP_END, 
PST_EVENT_TEST_TEARDOWN_START, 
PST_EVENT_TEST_TEARDOWN_END, 
PST_EVENT_PREDICATE_EVALUATION, 
PST_EVENT_EXCEPTION, 
PST_EVENT_MESSAGE, 
PST_EVENT_BLOCK_START, 
PST_EVENT_BLOCK_END
} pst_event_type; 
#line 218
typedef 
#line 213
enum pst_message_type_e { 
PST_MESSAGE_NONE, 
PST_MESSAGE_WARNING, 
PST_MESSAGE_ERROR, 
PST_MESSAGE_FATAL_ERROR
} pst_message_type; 
#line 229
typedef 
#line 226
enum pst_param_reset_type_e { 
PST_PARAM_NO_RESET, 
PST_PARAM_RESET
} pst_param_reset_type; 
#line 239
typedef 
#line 231
struct pst_param_s { 
const char *name; 
void *data; 
void *end; 
void *curr; 
void (*display_fcn)(char *, const pst_size_t, const void *); 
const pst_size_t size; 
const pst_param_reset_type reset_type; 
} pst_param; 




typedef 
#line 241
struct pst_param_node_s { 
pst_param param; 
struct pst_param_node_s *next; 
} pst_param_node; 
#line 250
typedef 
#line 246
enum pst_param_list_check_status_e { 
PST_PARAM_LIST_CHECK_STATUS_NONE, 
PST_PARAM_LIST_CHECK_STATUS_INIT, 
PST_PARAM_LIST_CHECK_STATUS_COMBINATION
} pst_param_list_check_status; 
#line 257
typedef 
#line 252
struct pst_param_list_s { 
pst_param_node *first; 
pst_param_node *last; 
pst_size_t nb_params; 
pst_param_list_check_status check_status; 
} pst_param_list; 
#line 263
typedef 
#line 259
struct pst_param_list_info_s { 
pst_param_list param_list; 
void (*check)(struct pst_param_list_s *); 
int (*next)(struct pst_param_list_s *); 
} pst_param_list_info; 
#line 272
typedef pst_uint pst_mock_selector; 




typedef 
#line 274
struct pst_mock_selector_node_s { 
pst_mock_selector mock_selector; 
struct pst_mock_selector_node_s *next; 
} pst_mock_selector_node; 




typedef 
#line 279
struct pst_mock_selector_list_s { 
pst_mock_selector_node *first; 
pst_mock_selector_node *last; 
} pst_mock_selector_list; 
#line 289
typedef void (*pst_alloc_fn)(void); 

typedef void (*pst_setup_ptr_fcn)(void); 
typedef void (*pst_teardown_ptr_fcn)(void); 
#line 298
typedef 
#line 294
struct pst_test_config_s { 
pst_setup_ptr_fcn setup_fcn; 
pst_teardown_ptr_fcn teardown_fcn; 
pst_param_list_info param_list_info; 
} pst_test_config; 


typedef void (*pst_test_config_ptr_fcn)(void); 


typedef void (*pst_test_ptr_fcn)(void); 




typedef struct pst_suite_s pst_suite; 


typedef struct pst_suite_node_s pst_suite_node; 


typedef struct pst_test_s pst_test; 


typedef struct pst_test_node_s pst_test_node; 
#line 324
typedef 
#line 321
struct pst_test_list_s { 
pst_test_node *first; 
pst_test_node *last; 
} pst_test_list; 
#line 335
typedef 
#line 326
struct pst_suite_config_s { 
pst_setup_ptr_fcn suite_setup_fcn; 

pst_teardown_ptr_fcn suite_teardown_fcn; 

pst_setup_ptr_fcn suite_test_setup_fcn; 

pst_teardown_ptr_fcn suite_test_teardown_fcn; 

} pst_suite_config; 


typedef void (*pst_suite_config_ptr_fcn)(void); 
#line 344
typedef 
#line 341
struct pst_suite_list_s { 
pst_suite_node *first; 
pst_suite_node *last; 
} pst_suite_list; 

#endif /* PSTUNIT_TYPES_H_ */
#line 2 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\internal\\pstunit_format.h"
#ifndef PSTUNIT_FORMAT_H
#define PSTUNIT_FORMAT_H
#line 13 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.40.33807\\include\\stdarg.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)

__pragma( pack ( push, 8 )) 
#line 27
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 22 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\internal\\pstunit_format.h"
typedef char *(*pst_char_writer)(char *, const char *, char); 

char *pst_default_char_writer(char * dest, const char * end, char ch); 

int pst_vformat(char * buffer, size_t buffer_size, const char * format, va_list args); 
int pst_format(char * buffer, size_t buffer_size, const char * format, ...); 

int pst_generic_vformat(const pst_char_writer char_writer, char * buffer, size_t buffer_size, const char * format, va_list args); 




int pst_generic_format(const pst_char_writer char_writer, char * buffer, size_t buffer_size, const char * format, ...); 
#line 43
#endif /* PSTUNIT_FORMAT_H */
#line 2 "C:\\Program Files\\Polyspace\\R2024a\\toolbox\\polyspace\\pstest\\services\\driver\\host\\c\\pstunit_config.h"
#ifndef PSTUNIT_CONFIG_H
#define PSTUNIT_CONFIG_H




extern int pst_host_printf(const char * format, ...); 
extern int pst_host_vprintf(const char * format, va_list ap); 
extern void pst_host_write(const char * buffer, size_t size); 
#line 25
#endif /* PSTUNIT_CONFIG_H */
#line 2 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\..\\..\\common\\include\\pst_default_config.h"
#ifndef PST_DEFAULT_CONFIG_H
#define PST_DEFAULT_CONFIG_H
#line 12
#ifndef PST_HAS_STDIO
#define PST_HAS_STDIO 1
#endif /* PST_HAS_STDIO */


#ifndef PST_HAS_STDLIB
#define PST_HAS_STDLIB 1
#endif /* PST_HAS_STDLIB */




#ifndef PST_HAS_LTOA
#define PST_HAS_LTOA 0
#endif /* PST_HAS_LTOA */


#ifndef PST_HAS_ULTOA
#define PST_HAS_ULTOA 0
#endif /* PST_HAS_ULTOA */
#line 43
#ifndef PST_HAS_STDARG
#define PST_HAS_STDARG 1
#endif /* PST_HAS_STDARG */



#ifndef PST_HAS_STRING
#define PST_HAS_STRING 1
#endif /* PST_HAS_STRING */
#line 60
#ifndef PST_ENABLE_FLOATING_POINT
#define PST_ENABLE_FLOATING_POINT 1
#endif /* PST_ENABLE_FLOATING_POINT */
#line 105
#ifndef PST_ENABLE_LONG_LONG
#define PST_ENABLE_LONG_LONG PST_DETECT_LONG_LONG
#endif /* PST_ENABLE_LONG_LONG */
#line 117
typedef __int64 pst_long_long_t; 
typedef unsigned __int64 pst_unsigned_long_long_t; 
#line 125
#ifndef PST_RETURN_ON_ABORT
#define PST_RETURN_ON_ABORT 1
#endif /* PST_RETURN_ON_ABORT */



#ifndef PST_HAS_SETLONGJMP
#define PST_HAS_SETLONGJMP 1
#endif /* PST_HAS_SETLONGJMP */
#line 162
#ifndef PST_COMPACT_EMBEDDED_MODE
#define PST_COMPACT_EMBEDDED_MODE 0





#endif /* PST_COMPACT_EMBEDDED_MODE */
#line 220
#ifndef PST_MRF_VERBOSE
#define PST_MRF_VERBOSE 0
#endif /* PST_MRF_VERBOSE */
#line 229
#ifndef PST_ENABLE_FORMAT
#define PST_ENABLE_FORMAT PST_HAS_STDARG
#endif /* PST_ENABLE_FORMAT */
#line 296
#ifndef PST_HRF_VERBOSE
#define PST_HRF_VERBOSE 0


#endif /* PST_HRF_VERBOSE */
#line 315
#ifndef PST_ENABLE_MRF_VERBOSE
#define PST_ENABLE_MRF_VERBOSE 1


#endif /* PST_ENABLE_MRF_VERBOSE */
#line 329
#ifndef PST_FILE_LINE_FORMAT
#define PST_FILE_LINE_FORMAT PST_DOTS_FILE_LINE
#line 337
#endif /* PST_FILE_LINE_FORMAT */
#line 359
#ifndef PST_TEXT_SIZE
#define PST_TEXT_SIZE 512
#endif /* PST_TEXT_SIZE */

#ifndef PST_HAS_PARAMS
#define PST_HAS_PARAMS 1
#endif /* PST_HAS_PARAMS */
#line 382
#ifndef PST_DISP_SIZE
#define PST_DISP_SIZE PST_TEXT_SIZE
#endif /* PST_DISP_SIZE */



#ifndef PST_TEXT_POOL_SIZE
#define PST_TEXT_POOL_SIZE 4
#endif /* PST_TEXT_POOL_SIZE */
#line 463
#ifndef PST_HRF_DEFAULT_FILE_LINE
#define PST_HRF_DEFAULT_FILE_LINE PST_HRF_DOTS_FILE_LINE
#endif /* PST_HRF_DEFAULT_FILE_LINE */



#ifndef PST_HRF_BRIEF_PREFIX
#define PST_HRF_BRIEF_PREFIX "#"
#endif /* PST_HRF_BRIEF_PREFIX */




#ifndef PST_REPORT_FILE
#define PST_REPORT_FILE 1
#endif /* PST_REPORT_FILE */




#ifndef PST_REPORT_ASSESSMENT_EXPR
#define PST_REPORT_ASSESSMENT_EXPR 1
#endif /* PST_REPORT_ASSESSMENT_EXPR */
#line 535
#ifndef PST_ENABLE_TROMPELOEIL
#define PST_ENABLE_TROMPELOEIL 0
#endif /* PST_ENABLE_TROMPELOEIL */


#ifndef PST_ENABLE_GOOGLEMOCK
#define PST_ENABLE_GOOGLEMOCK 0
#endif /* PST_ENABLE_GOOGLEMOCK */


#ifndef PST_ENABLE_FAKEIT
#define PST_ENABLE_FAKEIT 0
#endif /* PST_ENABLE_FAKEIT */
#line 564
#endif /* PST_DEFAULT_CONFIG_H */
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\stdio.h"
#ifndef _INC_STDIO
#define _INC_STDIO
#line 12 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_stdio_config.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 89
__declspec(noinline) __inline unsigned __int64 *__cdecl __local_stdio_printf_options(void) 
{ 
static unsigned __int64 _OptionsStorage; 
return &_OptionsStorage; 
} 
#line 99
__declspec(noinline) __inline unsigned __int64 *__cdecl __local_stdio_scanf_options(void) 
{ 
static unsigned __int64 _OptionsStorage; 
return &_OptionsStorage; 
} 
#line 26 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_wstdio.h"
#ifndef _FILE_DEFINED
#define _FILE_DEFINED
#line 129 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_stdio_config.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_wstdio.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 31
typedef 
#line 28
struct _iobuf { 

void *_Placeholder; 
} FILE; 
#endif /* _FILE_DEFINED */

FILE *__cdecl __acrt_iob_func(unsigned _Ix); 
#line 51
wint_t __cdecl fgetwc(FILE * _Stream); 




wint_t __cdecl _fgetwchar(void); 


wint_t __cdecl fputwc(wchar_t _Character, FILE * _Stream); 




wint_t __cdecl _fputwchar(wchar_t _Character); 




wint_t __cdecl getwc(FILE * _Stream); 




wint_t __cdecl getwchar(void); 




wchar_t *__cdecl fgetws(wchar_t * _Buffer, int _BufferCount, FILE * _Stream); 
#line 86
int __cdecl fputws(const wchar_t * _Buffer, FILE * _Stream); 
#line 93
wchar_t *__cdecl _getws_s(wchar_t * _Buffer, size_t _BufferCount); 
#line 105
wint_t __cdecl putwc(wchar_t _Character, FILE * _Stream); 
#line 111
wint_t __cdecl putwchar(wchar_t _Character); 




int __cdecl _putws(const wchar_t * _Buffer); 




wint_t __cdecl ungetwc(wint_t _Character, FILE * _Stream); 
#line 127
FILE *__cdecl _wfdopen(int _FileHandle, const wchar_t * _Mode); 
#line 133
FILE *__cdecl _wfopen(const wchar_t * _FileName, const wchar_t * _Mode); 
#line 139
errno_t __cdecl _wfopen_s(FILE ** _Stream, const wchar_t * _FileName, const wchar_t * _Mode); 
#line 147
FILE *__cdecl _wfreopen(const wchar_t * _FileName, const wchar_t * _Mode, FILE * _OldStream); 
#line 154
errno_t __cdecl _wfreopen_s(FILE ** _Stream, const wchar_t * _FileName, const wchar_t * _Mode, FILE * _OldStream); 
#line 162
FILE *__cdecl _wfsopen(const wchar_t * _FileName, const wchar_t * _Mode, int _ShFlag); 
#line 168
void __cdecl _wperror(const wchar_t * _ErrorMessage); 
#line 175
FILE *__cdecl _wpopen(const wchar_t * _Command, const wchar_t * _Mode); 
#line 182
int __cdecl _wremove(const wchar_t * _FileName); 
#line 190
__declspec(allocator) wchar_t *__cdecl _wtempnam(const wchar_t * _Directory, const wchar_t * _FilePrefix); 
#line 199
errno_t __cdecl _wtmpnam_s(wchar_t * _Buffer, size_t _BufferCount); 
#line 210
wchar_t *__cdecl _wtmpnam(wchar_t * _Buffer); 
#line 224
wint_t __cdecl _fgetwc_nolock(FILE * _Stream); 




wint_t __cdecl _fputwc_nolock(wchar_t _Character, FILE * _Stream); 
#line 235
wint_t __cdecl _getwc_nolock(FILE * _Stream); 




wint_t __cdecl _putwc_nolock(wchar_t _Character, FILE * _Stream); 
#line 246
wint_t __cdecl _ungetwc_nolock(wint_t _Character, FILE * _Stream); 
#line 272
int __cdecl __stdio_common_vfwprintf(unsigned __int64 _Options, FILE * _Stream, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 281
int __cdecl __stdio_common_vfwprintf_s(unsigned __int64 _Options, FILE * _Stream, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 290
int __cdecl __stdio_common_vfwprintf_p(unsigned __int64 _Options, FILE * _Stream, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 299
__inline int __cdecl _vfwprintf_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwprintf(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} 



__inline int __cdecl vfwprintf(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_l(_Stream, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vfwprintf_s_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwprintf_s(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} 
#line 345
__inline int __cdecl vfwprintf_s(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_s_l(_Stream, _Format, 0, _ArgList); 
} 
#line 361
__inline int __cdecl _vfwprintf_p_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwprintf_p(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} 



__inline int __cdecl _vfwprintf_p(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_p_l(_Stream, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vwprintf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} 



__inline int __cdecl vwprintf(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} 



__inline int __cdecl _vwprintf_s_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} 
#line 433
__inline int __cdecl vwprintf_s(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} 
#line 448
__inline int __cdecl _vwprintf_p_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} 



__inline int __cdecl _vwprintf_p(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} 



__inline int __cdecl _fwprintf_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwprintf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl fwprintf(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwprintf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _fwprintf_s_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwprintf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 533
__inline int __cdecl fwprintf_s(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwprintf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 553
__inline int __cdecl _fwprintf_p_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwprintf_p_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _fwprintf_p(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwprintf_p_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _wprintf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl wprintf(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _wprintf_s_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 645
__inline int __cdecl wprintf_s(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 664
__inline int __cdecl _wprintf_p_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _wprintf_p(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 705
int __cdecl __stdio_common_vfwscanf(unsigned __int64 _Options, FILE * _Stream, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 714
__inline int __cdecl _vfwscanf_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwscanf(*__local_stdio_scanf_options(), _Stream, _Format, _Locale, _ArgList); 


} 



__inline int __cdecl vfwscanf(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_l(_Stream, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vfwscanf_s_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Stream, _Format, _Locale, _ArgList); 


} 
#line 764
__inline int __cdecl vfwscanf_s(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_s_l(_Stream, _Format, 0, _ArgList); 
} 




__inline int __cdecl _vwscanf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} 



__inline int __cdecl vwscanf(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} 



__inline int __cdecl _vwscanf_s_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} 
#line 822
__inline int __cdecl vwscanf_s(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} 
#line 837
__inline int __cdecl _fwscanf_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwscanf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl fwscanf(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwscanf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _fwscanf_s_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwscanf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 895
__inline int __cdecl fwscanf_s(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwscanf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 915
__inline int __cdecl _wscanf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl wscanf(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _wscanf_s_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 970
__inline int __cdecl wscanf_s(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1006
int __cdecl __stdio_common_vswprintf(unsigned __int64 _Options, wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1017
int __cdecl __stdio_common_vswprintf_s(unsigned __int64 _Options, wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1028
int __cdecl __stdio_common_vsnwprintf_s(unsigned __int64 _Options, wchar_t * _Buffer, size_t _BufferCount, size_t _MaxCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1040
int __cdecl __stdio_common_vswprintf_p(unsigned __int64 _Options, wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1051
__inline int __cdecl _vsnwprintf_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf((*__local_stdio_printf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsnwprintf_s_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsnwprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsnwprintf_s(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
} 


__inline int __cdecl _snwprintf(wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, ...); __inline int __cdecl _vsnwprintf(wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, va_list _Args); 
#line 1120
__inline int __cdecl _vsnwprintf(wchar_t *
_Buffer, size_t 
_BufferCount, const wchar_t *
_Format, va_list 
_ArgList) 




{ 
return _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 
#line 1145
__inline int __cdecl _vswprintf_c_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vswprintf_c(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 




__inline int __cdecl _vswprintf_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
} 




__inline int __cdecl __vswprintf_l(wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
} 




__inline int __cdecl _vswprintf(wchar_t *const 
_Buffer, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, 0, _ArgList); 
} 




__inline int __cdecl vswprintf(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 




__inline int __cdecl _vswprintf_s_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 
#line 1268
__inline int __cdecl vswprintf_s(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 
#line 1294
__inline int __cdecl _vswprintf_p_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf_p(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vswprintf_p(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 




__inline int __cdecl _vscwprintf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vscwprintf(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vscwprintf_l(_Format, 0, _ArgList); 
} 




__inline int __cdecl _vscwprintf_p_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf_p((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vscwprintf_p(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vscwprintf_p_l(_Format, 0, _ArgList); 
} 




__inline int __cdecl __swprintf_l(wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = __vswprintf_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _swprintf_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _swprintf(wchar_t *const 
_Buffer, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = __vswprintf_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl swprintf(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 


__inline int __cdecl __swprintf_l(wchar_t * _Buffer, const wchar_t * _Format, _locale_t _Locale, ...); __inline int __cdecl __vswprintf_l(wchar_t * _Buffer, const wchar_t * _Format, _locale_t _Locale, va_list _Args); 
#line 1484
__inline int __cdecl _swprintf(wchar_t * _Buffer, const wchar_t * _Format, ...); __inline int __cdecl _vswprintf(wchar_t * _Buffer, const wchar_t * _Format, va_list _Args); 
#line 1493
__inline int __cdecl _swprintf_s_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1515
__inline int __cdecl swprintf_s(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1544
__inline int __cdecl _swprintf_p_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _swprintf_p(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _swprintf_c_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _swprintf_c(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwprintf_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 

_Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwprintf(wchar_t *
_Buffer, size_t 
_BufferCount, const wchar_t *
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 

_Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwprintf_s_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwprintf_s(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1721
__inline int __cdecl _scwprintf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vscwprintf_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _scwprintf(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vscwprintf_l(_Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _scwprintf_p_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vscwprintf_p_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _scwprintf_p(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vscwprintf_p_l(_Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1797
#pragma warning(push)
#pragma warning(disable: 4141 6054)
#line 1854
#pragma warning(pop)
#line 1871
int __cdecl __stdio_common_vswscanf(unsigned __int64 _Options, const wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1882
__inline int __cdecl _vswscanf_l(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf(*__local_stdio_scanf_options(), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} 




__inline int __cdecl vswscanf(const wchar_t *
_Buffer, const wchar_t *
_Format, va_list 
_ArgList) 




{ 
return _vswscanf_l(_Buffer, _Format, 0, _ArgList); 
} 




__inline int __cdecl _vswscanf_s_l(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} 
#line 1935
__inline int __cdecl vswscanf_s(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswscanf_s_l(_Buffer, _Format, 0, _ArgList); 
} 
#line 1960
__inline int __cdecl _vsnwscanf_l(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 


} 




__inline int __cdecl _vsnwscanf_s_l(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 


} 




__inline int __cdecl _swscanf_l(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vswscanf_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl swscanf(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vswscanf_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _swscanf_s_l(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vswscanf_s_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 2059
__inline int __cdecl swscanf_s(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vswscanf_s_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 2080
__inline int __cdecl _snwscanf_l(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 

_Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwscanf(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 

_Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwscanf_s_l(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwscanf_s(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 2169
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\stdio.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 73
typedef __int64 fpos_t; 
#line 80
errno_t __cdecl _get_stream_buffer_pointers(FILE * _Stream, char *** _Base, char *** _Pointer, int ** _Count); 
#line 96
errno_t __cdecl clearerr_s(FILE * _Stream); 
#line 102
errno_t __cdecl fopen_s(FILE ** _Stream, const char * _FileName, const char * _Mode); 
#line 110
size_t __cdecl fread_s(void * _Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 119
errno_t __cdecl freopen_s(FILE ** _Stream, const char * _FileName, const char * _Mode, FILE * _OldStream); 
#line 127
char *__cdecl gets_s(char * _Buffer, rsize_t _Size); 
#line 133
errno_t __cdecl tmpfile_s(FILE ** _Stream); 
#line 139
errno_t __cdecl tmpnam_s(char * _Buffer, rsize_t _Size); 
#line 146
void __cdecl clearerr(FILE * _Stream); 
#line 152
int __cdecl fclose(FILE * _Stream); 




int __cdecl _fcloseall(void); 


FILE *__cdecl _fdopen(int _FileHandle, const char * _Mode); 
#line 166
int __cdecl feof(FILE * _Stream); 




int __cdecl ferror(FILE * _Stream); 




int __cdecl fflush(FILE * _Stream); 
#line 182
int __cdecl fgetc(FILE * _Stream); 




int __cdecl _fgetchar(void); 



int __cdecl fgetpos(FILE * _Stream, fpos_t * _Position); 
#line 198
char *__cdecl fgets(char * _Buffer, int _MaxCount, FILE * _Stream); 
#line 205
int __cdecl _fileno(FILE * _Stream); 




int __cdecl _flushall(void); 


FILE *__cdecl fopen(const char * _FileName, const char * _Mode); 
#line 221
int __cdecl fputc(int _Character, FILE * _Stream); 
#line 227
int __cdecl _fputchar(int _Character); 
#line 233
int __cdecl fputs(const char * _Buffer, FILE * _Stream); 
#line 239
size_t __cdecl fread(void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 248
FILE *__cdecl freopen(const char * _FileName, const char * _Mode, FILE * _Stream); 
#line 255
FILE *__cdecl _fsopen(const char * _FileName, const char * _Mode, int _ShFlag); 
#line 263
int __cdecl fsetpos(FILE * _Stream, const fpos_t * _Position); 
#line 270
int __cdecl fseek(FILE * _Stream, long _Offset, int _Origin); 
#line 278
int __cdecl _fseeki64(FILE * _Stream, __int64 _Offset, int _Origin); 
#line 286
long __cdecl ftell(FILE * _Stream); 
#line 292
__int64 __cdecl _ftelli64(FILE * _Stream); 




size_t __cdecl fwrite(const void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 306
int __cdecl getc(FILE * _Stream); 




int __cdecl getchar(void); 


int __cdecl _getmaxstdio(void); 
#line 321
int __cdecl _getw(FILE * _Stream); 



void __cdecl perror(const char * _ErrorMessage); 
#line 333
int __cdecl _pclose(FILE * _Stream); 




FILE *__cdecl _popen(const char * _Command, const char * _Mode); 
#line 347
int __cdecl putc(int _Character, FILE * _Stream); 
#line 353
int __cdecl putchar(int _Character); 




int __cdecl puts(const char * _Buffer); 
#line 364
int __cdecl _putw(int _Word, FILE * _Stream); 




int __cdecl remove(const char * _FileName); 




int __cdecl rename(const char * _OldFileName, const char * _NewFileName); 




int __cdecl _unlink(const char * _FileName); 
#line 385
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _unlink. See online help for details" ".")) int __cdecl 
unlink(const char * _FileName); 
#line 392
void __cdecl rewind(FILE * _Stream); 




int __cdecl _rmtmp(void); 


void __cdecl setbuf(FILE * _Stream, char * _Buffer); 
#line 406
int __cdecl _setmaxstdio(int _Maximum); 
#line 412
int __cdecl setvbuf(FILE * _Stream, char * _Buffer, int _Mode, size_t _Size); 
#line 425
__declspec(allocator) char *__cdecl _tempnam(const char * _DirectoryName, const char * _FilePrefix); 
#line 435
FILE *__cdecl tmpfile(void); 
#line 443
char *__cdecl tmpnam(char * _Buffer); 
#line 451
int __cdecl ungetc(int _Character, FILE * _Stream); 
#line 463
void __cdecl _lock_file(FILE * _Stream); 



void __cdecl _unlock_file(FILE * _Stream); 
#line 473
int __cdecl _fclose_nolock(FILE * _Stream); 
#line 479
int __cdecl _fflush_nolock(FILE * _Stream); 
#line 485
int __cdecl _fgetc_nolock(FILE * _Stream); 
#line 491
int __cdecl _fputc_nolock(int _Character, FILE * _Stream); 
#line 497
size_t __cdecl _fread_nolock(void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 506
size_t __cdecl _fread_nolock_s(void * _Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 515
int __cdecl _fseek_nolock(FILE * _Stream, long _Offset, int _Origin); 
#line 522
int __cdecl _fseeki64_nolock(FILE * _Stream, __int64 _Offset, int _Origin); 
#line 529
long __cdecl _ftell_nolock(FILE * _Stream); 




__int64 __cdecl _ftelli64_nolock(FILE * _Stream); 




size_t __cdecl _fwrite_nolock(const void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 547
int __cdecl _getc_nolock(FILE * _Stream); 




int __cdecl _putc_nolock(int _Character, FILE * _Stream); 
#line 558
int __cdecl _ungetc_nolock(int _Character, FILE * _Stream); 
#line 589
int *__cdecl __p__commode(void); 
#line 609
int __cdecl __stdio_common_vfprintf(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 617
int __cdecl __stdio_common_vfprintf_s(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 626
int __cdecl __stdio_common_vfprintf_p(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 635
__inline int __cdecl _vfprintf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfprintf(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} 



__inline int __cdecl vfprintf(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_l(_Stream, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vfprintf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfprintf_s(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} 
#line 681
__inline int __cdecl vfprintf_s(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_s_l(_Stream, _Format, 0, _ArgList); 
} 
#line 697
__inline int __cdecl _vfprintf_p_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfprintf_p(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} 



__inline int __cdecl _vfprintf_p(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_p_l(_Stream, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vprintf_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} 



__inline int __cdecl vprintf(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} 



__inline int __cdecl _vprintf_s_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} 
#line 769
__inline int __cdecl vprintf_s(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} 
#line 784
__inline int __cdecl _vprintf_p_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} 



__inline int __cdecl _vprintf_p(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} 



__inline int __cdecl _fprintf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfprintf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl fprintf(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfprintf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 


int __cdecl _set_printf_count_output(int _Value); 



int __cdecl _get_printf_count_output(void); 


__inline int __cdecl _fprintf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfprintf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 875
__inline int __cdecl fprintf_s(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfprintf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 895
__inline int __cdecl _fprintf_p_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfprintf_p_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _fprintf_p(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfprintf_p_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _printf_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl printf(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _printf_s_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 987
__inline int __cdecl printf_s(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1006
__inline int __cdecl _printf_p_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _printf_p(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1046
int __cdecl __stdio_common_vfscanf(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _Arglist); 
#line 1055
__inline int __cdecl _vfscanf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfscanf(*__local_stdio_scanf_options(), _Stream, _Format, _Locale, _ArgList); 


} 



__inline int __cdecl vfscanf(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_l(_Stream, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vfscanf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Stream, _Format, _Locale, _ArgList); 


} 
#line 1106
__inline int __cdecl vfscanf_s(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_s_l(_Stream, _Format, 0, _ArgList); 
} 
#line 1122
__inline int __cdecl _vscanf_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} 



__inline int __cdecl vscanf(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} 



__inline int __cdecl _vscanf_s_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} 
#line 1165
__inline int __cdecl vscanf_s(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} 
#line 1180
__inline int __cdecl _fscanf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfscanf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl fscanf(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfscanf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _fscanf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfscanf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1238
__inline int __cdecl fscanf_s(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfscanf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1258
__inline int __cdecl _scanf_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl scanf(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _scanf_s_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1313
__inline int __cdecl scanf_s(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1339
int __cdecl __stdio_common_vsprintf(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1349
int __cdecl __stdio_common_vsprintf_s(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1359
int __cdecl __stdio_common_vsnprintf_s(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, size_t _MaxCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1370
int __cdecl __stdio_common_vsprintf_p(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1381
__inline int __cdecl _vsnprintf_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsnprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 
#line 1429
__inline int __cdecl vsnprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), _Buffer, _BufferCount, _Format, 0, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsprintf_l(char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vsnprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
} 




__inline int __cdecl vsprintf(char *const 
_Buffer, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_l(_Buffer, (size_t)(-1), _Format, 0, _ArgList); 
} 




__inline int __cdecl _vsprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 
#line 1503
__inline int __cdecl vsprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 
#line 1529
__inline int __cdecl _vsprintf_p_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf_p(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsprintf_p(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 




__inline int __cdecl _vsnprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsnprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsnprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
} 
#line 1616
__inline int __cdecl vsnprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
} 
#line 1643
__inline int __cdecl _vscprintf_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 



__inline int __cdecl _vscprintf(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vscprintf_l(_Format, 0, _ArgList); 
} 



__inline int __cdecl _vscprintf_p_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf_p((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 



__inline int __cdecl _vscprintf_p(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vscprintf_p_l(_Format, 0, _ArgList); 
} 



__inline int __cdecl _vsnprintf_c_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsnprintf_c(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 




__inline int __cdecl _sprintf_l(char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 

_Result = _vsprintf_l(_Buffer, _Format, _Locale, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl sprintf(char *const 
_Buffer, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 

_Result = _vsprintf_l(_Buffer, _Format, 0, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} 


__inline int __cdecl sprintf(char * _Buffer, const char * _Format, ...); __inline int __cdecl vsprintf(char * _Buffer, const char * _Format, va_list _Args); 
#line 1792
__inline int __cdecl _sprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1815
__inline int __cdecl sprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1844
__inline int __cdecl _sprintf_p_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _sprintf_p(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snprintf_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 

_Result = _vsnprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1919
__inline int __cdecl snprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = vsnprintf(_Buffer, _BufferCount, _Format, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsnprintf(_Buffer, _BufferCount, _Format, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 


__inline int __cdecl _snprintf(char * _Buffer, size_t _BufferCount, const char * _Format, ...); __inline int __cdecl _vsnprintf(char * _Buffer, size_t _BufferCount, const char * _Format, va_list _Args); 
#line 1968
__inline int __cdecl _snprintf_c_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snprintf_c(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 2059
__inline int __cdecl _scprintf_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vscprintf_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _scprintf(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vscprintf_l(_Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _scprintf_p_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vscprintf_p_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _scprintf_p(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vscprintf_p(_Format, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 2133
int __cdecl __stdio_common_vsscanf(unsigned __int64 _Options, const char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 2143
__inline int __cdecl _vsscanf_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} 



__inline int __cdecl vsscanf(const char *const 
_Buffer, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsscanf_l(_Buffer, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vsscanf_s_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} 




#pragma warning(push)
#pragma warning(disable: 6530)


__inline int __cdecl vsscanf_s(const char *const 
_Buffer, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsscanf_s_l(_Buffer, _Format, 0, _ArgList); 
} 
#line 2216
#pragma warning(pop)




__inline int __cdecl _sscanf_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsscanf_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl sscanf(const char *const 
_Buffer, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsscanf_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _sscanf_s_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsscanf_s_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 2279
__inline int __cdecl sscanf_s(const char *const 
_Buffer, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 

_Result = vsscanf_s(_Buffer, _Format, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} 




#pragma warning(push)
#pragma warning(disable: 6530)


__inline int __cdecl _snscanf_l(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 

_Result = __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _snscanf(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 

_Result = __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, 0, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snscanf_s_l(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 

_Result = __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _snscanf_s(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 

_Result = __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, 0, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} 


#pragma warning(pop)
#line 2420
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _tempnam. See online help for detail" "s.")) char *__cdecl 
tempnam(const char * _Directory, const char * _FilePrefix); 
#line 2430
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fcloseall. See online help for deta" "ils.")) int __cdecl fcloseall(void); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fdopen. See online help for details" ".")) FILE *__cdecl fdopen(int _FileHandle, const char * _Format); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fgetchar. See online help for detai" "ls.")) int __cdecl fgetchar(void); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fileno. See online help for details" ".")) int __cdecl fileno(FILE * _Stream); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _flushall. See online help for detai" "ls.")) int __cdecl flushall(void); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fputchar. See online help for detai" "ls.")) int __cdecl fputchar(int _Ch); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _getw. See online help for details.")) int __cdecl getw(FILE * _Stream); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _putw. See online help for details.")) int __cdecl putw(int _Ch, FILE * _Stream); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _rmtmp. See online help for details." "")) int __cdecl rmtmp(void); 
#line 2448
#endif /* _INC_STDIO */
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\stdlib.h"
#ifndef _INC_STDLIB
#define _INC_STDLIB
#line 2445 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\stdio.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_malloc.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 58
__declspec(allocator) __declspec(restrict) void *__cdecl 
_calloc_base(size_t _Count, size_t _Size); 
#line 65
__declspec(allocator) __declspec(restrict) void *__cdecl 
calloc(size_t _Count, size_t _Size); 
#line 72
int __cdecl _callnewh(size_t _Size); 




__declspec(allocator) void *__cdecl 
_expand(void * _Block, size_t _Size); 
#line 84
void __cdecl _free_base(void * _Block); 




void __cdecl free(void * _Block); 




__declspec(allocator) __declspec(restrict) void *__cdecl 
_malloc_base(size_t _Size); 




__declspec(allocator) __declspec(restrict) void *__cdecl 
malloc(size_t _Size); 
#line 107
size_t __cdecl _msize_base(void * _Block); 
#line 113
size_t __cdecl _msize(void * _Block); 




__declspec(allocator) __declspec(restrict) void *__cdecl 
_realloc_base(void * _Block, size_t _Size); 
#line 125
__declspec(allocator) __declspec(restrict) void *__cdecl 
realloc(void * _Block, size_t _Size); 
#line 132
__declspec(allocator) __declspec(restrict) void *__cdecl 
_recalloc_base(void * _Block, size_t _Count, size_t _Size); 
#line 140
__declspec(allocator) __declspec(restrict) void *__cdecl 
_recalloc(void * _Block, size_t _Count, size_t _Size); 
#line 148
void __cdecl _aligned_free(void * _Block); 




__declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_malloc(size_t _Size, size_t _Alignment); 
#line 160
__declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_offset_malloc(size_t _Size, size_t _Alignment, size_t _Offset); 
#line 169
size_t __cdecl _aligned_msize(void * _Block, size_t _Alignment, size_t _Offset); 
#line 176
__declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_offset_realloc(void * _Block, size_t _Size, size_t _Alignment, size_t _Offset); 
#line 185
__declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_offset_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment, size_t _Offset); 
#line 195
__declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_realloc(void * _Block, size_t _Size, size_t _Alignment); 
#line 203
__declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment); 
#line 232
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 16 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_search.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 


typedef int (__cdecl *_CoreCrtSecureSearchSortCompareFunction)(void *, const void *, const void *); 
typedef int (__cdecl *_CoreCrtNonSecureSearchSortCompareFunction)(const void *, const void *); 
#line 30
void *__cdecl bsearch_s(const void * _Key, const void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 39
void __cdecl qsort_s(void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 52
void *__cdecl bsearch(const void * _Key, const void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 60
void __cdecl qsort(void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 68
void *__cdecl _lfind_s(const void * _Key, const void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 78
void *__cdecl _lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 87
void *__cdecl _lsearch_s(const void * _Key, void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 97
void *__cdecl _lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 194
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _lfind. See online help for details." "")) void *__cdecl 
lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 203
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _lsearch. See online help for detail" "s.")) void *__cdecl 
lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 216
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_wstdlib.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 54
errno_t __cdecl _itow_s(int _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 68
wchar_t *__cdecl _itow(int _Value, wchar_t * _Buffer, int _Radix); 
#line 77
errno_t __cdecl _ltow_s(long _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 91
wchar_t *__cdecl _ltow(long _Value, wchar_t * _Buffer, int _Radix); 
#line 99
errno_t __cdecl _ultow_s(unsigned long _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 113
wchar_t *__cdecl _ultow(unsigned long _Value, wchar_t * _Buffer, int _Radix); 
#line 121
double __cdecl wcstod(const wchar_t * _String, wchar_t ** _EndPtr); 
#line 127
double __cdecl _wcstod_l(const wchar_t * _String, wchar_t ** _EndPtr, _locale_t _Locale); 
#line 134
long __cdecl wcstol(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 141
long __cdecl _wcstol_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 149
__int64 __cdecl wcstoll(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 156
__int64 __cdecl _wcstoll_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 164
unsigned long __cdecl wcstoul(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 171
unsigned long __cdecl _wcstoul_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 179
unsigned __int64 __cdecl wcstoull(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 186
unsigned __int64 __cdecl _wcstoull_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 194
long double __cdecl wcstold(const wchar_t * _String, wchar_t ** _EndPtr); 
#line 200
long double __cdecl _wcstold_l(const wchar_t * _String, wchar_t ** _EndPtr, _locale_t _Locale); 
#line 207
float __cdecl wcstof(const wchar_t * _String, wchar_t ** _EndPtr); 
#line 213
float __cdecl _wcstof_l(const wchar_t * _String, wchar_t ** _EndPtr, _locale_t _Locale); 
#line 220
double __cdecl _wtof(const wchar_t * _String); 




double __cdecl _wtof_l(const wchar_t * _String, _locale_t _Locale); 
#line 231
int __cdecl _wtoi(const wchar_t * _String); 




int __cdecl _wtoi_l(const wchar_t * _String, _locale_t _Locale); 
#line 242
long __cdecl _wtol(const wchar_t * _String); 




long __cdecl _wtol_l(const wchar_t * _String, _locale_t _Locale); 
#line 253
__int64 __cdecl _wtoll(const wchar_t * _String); 




__int64 __cdecl _wtoll_l(const wchar_t * _String, _locale_t _Locale); 
#line 264
errno_t __cdecl _i64tow_s(__int64 _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 272
wchar_t *__cdecl _i64tow(__int64 _Value, wchar_t * _Buffer, int _Radix); 
#line 279
errno_t __cdecl _ui64tow_s(unsigned __int64 _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 287
wchar_t *__cdecl _ui64tow(unsigned __int64 _Value, wchar_t * _Buffer, int _Radix); 
#line 294
__int64 __cdecl _wtoi64(const wchar_t * _String); 




__int64 __cdecl _wtoi64_l(const wchar_t * _String, _locale_t _Locale); 
#line 305
__int64 __cdecl _wcstoi64(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 312
__int64 __cdecl _wcstoi64_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 320
unsigned __int64 __cdecl _wcstoui64(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 327
unsigned __int64 __cdecl _wcstoui64_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 339
__declspec(allocator) wchar_t *__cdecl _wfullpath(wchar_t * _Buffer, const wchar_t * _Path, size_t _BufferCount); 
#line 348
errno_t __cdecl _wmakepath_s(wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Drive, const wchar_t * _Dir, const wchar_t * _Filename, const wchar_t * _Ext); 
#line 366
void __cdecl _wmakepath(wchar_t * _Buffer, const wchar_t * _Drive, const wchar_t * _Dir, const wchar_t * _Filename, const wchar_t * _Ext); 
#line 375
void __cdecl _wperror(const wchar_t * _ErrorMessage); 




void __cdecl _wsplitpath(const wchar_t * _FullPath, wchar_t * _Drive, wchar_t * _Dir, wchar_t * _Filename, wchar_t * _Ext); 
#line 388
errno_t __cdecl _wsplitpath_s(const wchar_t * _FullPath, wchar_t * _Drive, size_t _DriveCount, wchar_t * _Dir, size_t _DirCount, wchar_t * _Filename, size_t _FilenameCount, wchar_t * _Ext, size_t _ExtCount); 
#line 409
errno_t __cdecl _wdupenv_s(wchar_t ** _Buffer, size_t * _BufferCount, const wchar_t * _VarName); 
#line 418
wchar_t *__cdecl _wgetenv(const wchar_t * _VarName); 
#line 424
errno_t __cdecl _wgetenv_s(size_t * _RequiredCount, wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _VarName); 
#line 440
int __cdecl _wputenv(const wchar_t * _EnvString); 




errno_t __cdecl _wputenv_s(const wchar_t * _Name, const wchar_t * _Value); 




errno_t __cdecl _wsearchenv_s(const wchar_t * _Filename, const wchar_t * _VarName, wchar_t * _Buffer, size_t _BufferCount); 
#line 464
void __cdecl _wsearchenv(const wchar_t * _Filename, const wchar_t * _VarName, wchar_t * _ResultPath); 
#line 471
int __cdecl _wsystem(const wchar_t * _Command); 
#line 26 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\stdlib.h"
#ifndef _countof
#define _countof __crt_countof
#endif /* _countof */
#line 479 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_wstdlib.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 18 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 38
void __cdecl _swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 
#line 56
__declspec(noreturn) void __cdecl exit(int _Code); 
__declspec(noreturn) void __cdecl _exit(int _Code); 
__declspec(noreturn) void __cdecl _Exit(int _Code); 
__declspec(noreturn) void __cdecl quick_exit(int _Code); 
__declspec(noreturn) void __cdecl abort(void); 
#line 67
unsigned __cdecl _set_abort_behavior(unsigned _Flags, unsigned _Mask); 
#line 74
#ifndef _CRT_ONEXIT_T_DEFINED
#define _CRT_ONEXIT_T_DEFINED

typedef int (__cdecl *_onexit_t)(void); 



#endif /* _CRT_ONEXIT_T_DEFINED */
#line 144
int __cdecl atexit(void (__cdecl *)(void)); 
_onexit_t __cdecl _onexit(_onexit_t _Func); 


int __cdecl at_quick_exit(void (__cdecl *)(void)); 
#line 159
typedef void (__cdecl *_purecall_handler)(void); 


typedef void (__cdecl *_invalid_parameter_handler)(const wchar_t *, const wchar_t *, const wchar_t *, unsigned, uintptr_t); 
#line 171
_purecall_handler __cdecl _set_purecall_handler(_purecall_handler _Handler); 



_purecall_handler __cdecl _get_purecall_handler(void); 


_invalid_parameter_handler __cdecl _set_invalid_parameter_handler(_invalid_parameter_handler _Handler); 



_invalid_parameter_handler __cdecl _get_invalid_parameter_handler(void); 

_invalid_parameter_handler __cdecl _set_thread_local_invalid_parameter_handler(_invalid_parameter_handler _Handler); 



_invalid_parameter_handler __cdecl _get_thread_local_invalid_parameter_handler(void); 
#line 212
int __cdecl _set_error_mode(int _Mode); 




int *__cdecl _errno(void); 


errno_t __cdecl _set_errno(int _Value); 
errno_t __cdecl _get_errno(int * _Value); 

unsigned long *__cdecl __doserrno(void); 


errno_t __cdecl _set_doserrno(unsigned long _Value); 
errno_t __cdecl _get_doserrno(unsigned long * _Value); 


char **__cdecl __sys_errlist(void); 


int *__cdecl __sys_nerr(void); 


void __cdecl perror(const char * _ErrMsg); 
#line 242
char **__cdecl __p__pgmptr(void); 
wchar_t **__cdecl __p__wpgmptr(void); 
int *__cdecl __p__fmode(void); 
#line 259
errno_t __cdecl _get_pgmptr(char ** _Value); 


errno_t __cdecl _get_wpgmptr(wchar_t ** _Value); 

errno_t __cdecl _set_fmode(int _Mode); 

errno_t __cdecl _get_fmode(int * _PMode); 
#line 279
typedef 
#line 275
struct _div_t { 

int quot; 
int rem; 
} div_t; 
#line 285
typedef 
#line 281
struct _ldiv_t { 

long quot; 
long rem; 
} ldiv_t; 
#line 291
typedef 
#line 287
struct _lldiv_t { 

__int64 quot; 
__int64 rem; 
} lldiv_t; 

int __cdecl abs(int _Number); 
long __cdecl labs(long _Number); 
__int64 __cdecl llabs(__int64 _Number); 
__int64 __cdecl _abs64(__int64 _Number); 

unsigned short __cdecl _byteswap_ushort(unsigned short _Number); 
unsigned long __cdecl _byteswap_ulong(unsigned long _Number); 
unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64 _Number); 

div_t __cdecl div(int _Numerator, int _Denominator); 
ldiv_t __cdecl ldiv(long _Numerator, long _Denominator); 
lldiv_t __cdecl lldiv(__int64 _Numerator, __int64 _Denominator); 



#pragma warning(push)
#pragma warning(disable: 6540)

unsigned __cdecl _rotl(unsigned _Value, int _Shift); 
#line 317
unsigned long __cdecl _lrotl(unsigned long _Value, int _Shift); 




unsigned __int64 __cdecl _rotl64(unsigned __int64 _Value, int _Shift); 




unsigned __cdecl _rotr(unsigned _Value, int _Shift); 
#line 333
unsigned long __cdecl _lrotr(unsigned long _Value, int _Shift); 




unsigned __int64 __cdecl _rotr64(unsigned __int64 _Value, int _Shift); 




#pragma warning(pop)
#line 350
void __cdecl srand(unsigned _Seed); 

int __cdecl rand(void); 
#line 394
#pragma pack ( push, 4 )



typedef 
#line 396
struct { 
unsigned char ld[10]; 
} _LDOUBLE; 
#pragma pack ( pop )
#line 418
typedef 
#line 416
struct { 
double x; 
} _CRT_DOUBLE; 




typedef 
#line 421
struct { 
float f; 
} _CRT_FLOAT; 
#line 432
typedef 
#line 430
struct { 
long double x; 
} _LONGDOUBLE; 



#pragma pack ( push, 4 )



typedef 
#line 438
struct { 
unsigned char ld12[12]; 
} _LDBL12; 
#pragma pack ( pop )
#line 450
double __cdecl atof(const char * _String); 
int __cdecl atoi(const char * _String); 
long __cdecl atol(const char * _String); 
__int64 __cdecl atoll(const char * _String); 
__int64 __cdecl _atoi64(const char * _String); 

double __cdecl _atof_l(const char * _String, _locale_t _Locale); 
int __cdecl _atoi_l(const char * _String, _locale_t _Locale); 
long __cdecl _atol_l(const char * _String, _locale_t _Locale); 
__int64 __cdecl _atoll_l(const char * _String, _locale_t _Locale); 
__int64 __cdecl _atoi64_l(const char * _String, _locale_t _Locale); 

int __cdecl _atoflt(_CRT_FLOAT * _Result, const char * _String); 
int __cdecl _atodbl(_CRT_DOUBLE * _Result, char * _String); 
int __cdecl _atoldbl(_LDOUBLE * _Result, char * _String); 


int __cdecl _atoflt_l(_CRT_FLOAT * _Result, const char * _String, _locale_t _Locale); 
#line 474
int __cdecl _atodbl_l(_CRT_DOUBLE * _Result, char * _String, _locale_t _Locale); 
#line 482
int __cdecl _atoldbl_l(_LDOUBLE * _Result, char * _String, _locale_t _Locale); 
#line 489
float __cdecl strtof(const char * _String, char ** _EndPtr); 
#line 495
float __cdecl _strtof_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 502
double __cdecl strtod(const char * _String, char ** _EndPtr); 
#line 508
double __cdecl _strtod_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 515
long double __cdecl strtold(const char * _String, char ** _EndPtr); 
#line 521
long double __cdecl _strtold_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 528
long __cdecl strtol(const char * _String, char ** _EndPtr, int _Radix); 
#line 535
long __cdecl _strtol_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 543
__int64 __cdecl strtoll(const char * _String, char ** _EndPtr, int _Radix); 
#line 550
__int64 __cdecl _strtoll_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 558
unsigned long __cdecl strtoul(const char * _String, char ** _EndPtr, int _Radix); 
#line 565
unsigned long __cdecl _strtoul_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 573
unsigned __int64 __cdecl strtoull(const char * _String, char ** _EndPtr, int _Radix); 
#line 580
unsigned __int64 __cdecl _strtoull_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 588
__int64 __cdecl _strtoi64(const char * _String, char ** _EndPtr, int _Radix); 
#line 595
__int64 __cdecl _strtoi64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 603
unsigned __int64 __cdecl _strtoui64(const char * _String, char ** _EndPtr, int _Radix); 
#line 610
unsigned __int64 __cdecl _strtoui64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 626
errno_t __cdecl _itoa_s(int _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 641
char *__cdecl _itoa(int _Value, char * _Buffer, int _Radix); 
#line 650
errno_t __cdecl _ltoa_s(long _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 664
char *__cdecl _ltoa(long _Value, char * _Buffer, int _Radix); 
#line 673
errno_t __cdecl _ultoa_s(unsigned long _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 687
char *__cdecl _ultoa(unsigned long _Value, char * _Buffer, int _Radix); 
#line 696
errno_t __cdecl _i64toa_s(__int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 705
char *__cdecl _i64toa(__int64 _Value, char * _Buffer, int _Radix); 
#line 713
errno_t __cdecl _ui64toa_s(unsigned __int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 721
char *__cdecl _ui64toa(unsigned __int64 _Value, char * _Buffer, int _Radix); 
#line 741
errno_t __cdecl _ecvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 760
char *__cdecl _ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 769
errno_t __cdecl _fcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 790
char *__cdecl _fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 798
errno_t __cdecl _gcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount); 
#line 814
char *__cdecl _gcvt(double _Value, int _DigitCount, char * _Buffer); 
#line 843
int __cdecl ___mb_cur_max_func(void); 


int __cdecl ___mb_cur_max_l_func(_locale_t _Locale); 
#line 852
int __cdecl mblen(const char * _Ch, size_t _MaxCount); 
#line 858
int __cdecl _mblen_l(const char * _Ch, size_t _MaxCount, _locale_t _Locale); 
#line 866
size_t __cdecl _mbstrlen(const char * _String); 
#line 872
size_t __cdecl _mbstrlen_l(const char * _String, _locale_t _Locale); 
#line 879
size_t __cdecl _mbstrnlen(const char * _String, size_t _MaxCount); 
#line 886
size_t __cdecl _mbstrnlen_l(const char * _String, size_t _MaxCount, _locale_t _Locale); 
#line 893
int __cdecl mbtowc(wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes); 
#line 900
int __cdecl _mbtowc_l(wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes, _locale_t _Locale); 
#line 908
errno_t __cdecl mbstowcs_s(size_t * _PtNumOfCharConverted, wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount); 
#line 924
size_t __cdecl mbstowcs(wchar_t * _Dest, const char * _Source, size_t _MaxCount); 
#line 932
errno_t __cdecl _mbstowcs_s_l(size_t * _PtNumOfCharConverted, wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount, _locale_t _Locale); 
#line 950
size_t __cdecl _mbstowcs_l(wchar_t * _Dest, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 963
int __cdecl wctomb(char * _MbCh, wchar_t _WCh); 
#line 969
int __cdecl _wctomb_l(char * _MbCh, wchar_t _WCh, _locale_t _Locale); 
#line 978
errno_t __cdecl wctomb_s(int * _SizeConverted, char * _MbCh, rsize_t _SizeInBytes, wchar_t _WCh); 
#line 988
errno_t __cdecl _wctomb_s_l(int * _SizeConverted, char * _MbCh, size_t _SizeInBytes, wchar_t _WCh, _locale_t _Locale); 
#line 996
errno_t __cdecl wcstombs_s(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const wchar_t * _Src, size_t _MaxCountInBytes); 
#line 1012
size_t __cdecl wcstombs(char * _Dest, const wchar_t * _Source, size_t _MaxCount); 
#line 1020
errno_t __cdecl _wcstombs_s_l(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const wchar_t * _Src, size_t _MaxCountInBytes, _locale_t _Locale); 
#line 1038
size_t __cdecl _wcstombs_l(char * _Dest, const wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 1068
__declspec(allocator) char *__cdecl _fullpath(char * _Buffer, const char * _Path, size_t _BufferCount); 
#line 1077
errno_t __cdecl _makepath_s(char * _Buffer, size_t _BufferCount, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); 
#line 1095
void __cdecl _makepath(char * _Buffer, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); 
#line 1105
void __cdecl _splitpath(const char * _FullPath, char * _Drive, char * _Dir, char * _Filename, char * _Ext); 
#line 1114
errno_t __cdecl _splitpath_s(const char * _FullPath, char * _Drive, size_t _DriveCount, char * _Dir, size_t _DirCount, char * _Filename, size_t _FilenameCount, char * _Ext, size_t _ExtCount); 
#line 1132
errno_t __cdecl getenv_s(size_t * _RequiredCount, char * _Buffer, rsize_t _BufferCount, const char * _VarName); 
#line 1144
int *__cdecl __p___argc(void); 
char ***__cdecl __p___argv(void); 
wchar_t ***__cdecl __p___wargv(void); 
#line 1158
char ***__cdecl __p__environ(void); 
wchar_t ***__cdecl __p__wenviron(void); 
#line 1184
char *__cdecl getenv(const char * _VarName); 
#line 1201
errno_t __cdecl _dupenv_s(char ** _Buffer, size_t * _BufferCount, const char * _VarName); 
#line 1211
int __cdecl system(const char * _Command); 





#pragma warning(push)
#pragma warning(disable: 6540)


int __cdecl _putenv(const char * _EnvString); 




errno_t __cdecl _putenv_s(const char * _Name, const char * _Value); 




#pragma warning(pop)

errno_t __cdecl _searchenv_s(const char * _Filename, const char * _VarName, char * _Buffer, size_t _BufferCount); 
#line 1247
void __cdecl _searchenv(const char * _Filename, const char * _VarName, char * _Buffer); 
#line 1255
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetErrorMode in" "stead. See online help for details.")) void __cdecl 
_seterrormode(int _Mode); 



__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Beep instead. S" "ee online help for details.")) void __cdecl 
_beep(unsigned _Frequency, unsigned _Duration); 




__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Sleep instead. " "See online help for details.")) void __cdecl 
_sleep(unsigned long _Duration); 
#line 1289
#pragma warning(push)
#pragma warning(disable: 4141)

__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ecvt. See online help for details.")) char *__cdecl 
ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 1300
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fcvt. See online help for details.")) char *__cdecl 
fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 1308
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _gcvt. See online help for details.")) char *__cdecl 
gcvt(double _Value, int _DigitCount, char * _DstBuf); 
#line 1315
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _itoa. See online help for details.")) char *__cdecl 
itoa(int _Value, char * _Buffer, int _Radix); 
#line 1322
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ltoa. See online help for details.")) char *__cdecl 
ltoa(long _Value, char * _Buffer, int _Radix); 
#line 1330
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _swab. See online help for details.")) void __cdecl 
swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 
#line 1337
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ultoa. See online help for details." "")) char *__cdecl 
ultoa(unsigned long _Value, char * _Buffer, int _Radix); 
#line 1346
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _putenv. See online help for details" ".")) int __cdecl 
putenv(const char * _EnvString); 



#pragma warning(pop)

_onexit_t __cdecl onexit(_onexit_t _Func); 
#line 1362
#endif /* _INC_STDLIB */
#line 3 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\internal\\pstunit_config_dependant_types.h"
#ifndef PSTUNIT_CONFIG_DEPENDANT_TYPES_H_
#define PSTUNIT_CONFIG_DEPENDANT_TYPES_H_
#line 1359 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\stdlib.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 13 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\internal\\pstunit_config_dependant_types.h"
struct pst_suite_s { 
const char *name; 

pst_suite_config_ptr_fcn config_fcn; 
pst_test_list tests; 
pst_counter num_tests; 
pst_line_number line; 

const char *file; 

}; 


struct pst_suite_node_s { 
pst_suite suite; 
struct pst_suite_node_s *next; 
}; 


struct pst_test_s { 
const char *name; 
pst_test_ptr_fcn test_case_fcn; 
pst_test_config_ptr_fcn config_fcn; 
pst_suite_node *suite_node; 
pst_line_number line; 

const char *file; 

}; 


struct pst_test_node_s { 
pst_test test; 
struct pst_test_node_s *next; 
}; 
#line 55
typedef 
#line 51
struct pst_block_s { 
const char *name; 
void (*blockFunction)(void); 
struct pst_block_s *next; 
} pst_block; 
#line 75
typedef 
#line 64
struct pst_context_global_data_s { 
pst_suite_list suites; 
pst_mock_selector_list mock_selectors; 
pst_counter num_tests; 
pst_counter num_suites; 
#line 75
} pst_context_global_data; 
#line 87
typedef 
#line 77
struct pst_context_summary_s { 
pst_counter num_requested_suites; 
pst_counter num_passed_suites; 
pst_counter num_failed_suites; 
pst_counter num_incomplete_suites; 

pst_counter num_requested_tests; 
pst_counter num_passed_tests; 
pst_counter num_failed_tests; 
pst_counter num_incomplete_tests; 
} pst_context_summary; 
#line 103
typedef 
#line 90
struct pst_context_curr_suite_data_s { 
pst_suite_config config; 
pst_suite *suite; 
void *suite_fixture; 
pst_alloc_fn alloc_suite_fixture; 
pst_alloc_fn alloc_suite_test_fixture; 
pst_suite_status suite_status; 
#line 103
} pst_context_curr_suite_data; 
#line 113
typedef 
#line 106
struct pst_context_curr_test_data_s { 
pst_test_config config; 
pst_test *test; 
void *suite_test_fixture; 
void *test_fixture; 
pst_alloc_fn alloc_test_fixture; 
pst_test_config_status config_status; 
} pst_context_curr_test_data; 
#line 151
typedef 
#line 119
struct pst_context_s { 
pst_context_status context_status; 
pst_context_global_data global_data; 
pst_context_summary summary; 
pst_context_curr_suite_data curr_suite_data; 
pst_context_curr_test_data curr_test_data; 
#line 133
pst_step_type step_type; 
pst_step_status step_status; 
pst_step_reasons step_reasons; 
const char *assessment_id; 
#line 151
} pst_context; 

#endif /* PSTUNIT_CONFIG_DEPENDANT_TYPES_H_ */
#line 2 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\internal\\pstunit_callbacks.h"
#ifndef PSTUNIT_CALLBACKS_H
#define PSTUNIT_CALLBACKS_H
#line 2 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\internal\\pstunit_xil.h"
#ifndef PSTUNIT_XIL_H
#define PSTUNIT_XIL_H
#line 2 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\internal\\pstunit_blocks.h"
#ifndef PSTUNIT_BLOCKS_H
#define PSTUNIT_BLOCKS_H
#line 41
extern void pst_register_block(pst_block * block); 
extern pst_block *pst_get_block_by_name(const char * blockName); 



extern pst_block *pst_block_list; 
#line 53
#endif /* PSTUNIT_BLOCKS_H */
#line 2 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\internal\\pstunit_exec.h"
#ifndef PSTUNIT_EXEC_H
#define PSTUNIT_EXEC_H
#line 22
void pst_init(void); 



void pst_check_init(void); 




void pst_terminate(void); 
#line 38
pst_suite *pst_select_suite(pst_suite * suite); 
#line 49
pst_suite *pst_find_suite_name(const char * name); 




pst_suite *pst_select_suite_name(const char * name); 
#line 62
pst_suite_status pst_close_suite(void); 
#line 70
pst_test *pst_select_test(pst_test * test); 
#line 76
pst_test *pst_select_test_params(pst_test * test, const pst_index * indices); 
#line 82
void pst_run_test_config(const pst_test_config_ptr_fcn); 




pst_test *pst_find_test_name(const char * name); 
#line 94
pst_test *pst_find_suite_test_name(const pst_suite * suite, const char * name); 
#line 102
pst_test *pst_find_default_test_name(const char * name); 




pst_test *pst_select_test_name(const char * name); 
#line 113
pst_test *pst_select_test_name_params(const char * name, pst_index * indices); 




void pst_close_test(void); 




void pst_run_test(void); 




void pst_run_test_curr_params(void); 




void pst_run_suite(void); 
#line 140
void pst_begin_run(void); 




void pst_end_run(void); 
#line 154
int pst_prepare_run_test(void); 




void pst_end_run_test(void); 
#line 167
int pst_run_block_by_name(const char * name); 
#line 176
#endif /* PSTUNIT_EXEC_H */
#line 27 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\internal\\pstunit_xil.h"
extern int pst_g_xil_verbose; 
#line 44
extern int pst_g_xil_passed_assessments; 
#line 56
void pst_xil_predicate_evaluated(const pst_assessment_severity assessment_type, const pst_evaluation_type eval_type, const int res, const char * expr, const char * user_msg, const pst_line_number line_number, const char * file, const char * diag, va_list diag_args); 
#line 70
void pst_xil_event(pst_event_type event); 

void pst_xil_message_event(pst_message_type message_type, const pst_line_number line_number, const char * file, const char * message_fmt, va_list message_args); 
#line 83
void pst_xil_block_event(pst_event_type event, const pst_block * block, pst_bool aborted); 
#line 103
void pst_xil_list_tests(void); 
#line 182
int pst_xil_prepare_test(const char * suite, const char * name, pst_index * param_indices); 
#line 213
#endif /* PSTUNIT_XIL_H */
#line 102 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\internal\\pstunit_callbacks.h"
#endif /* PSTUNIT_CALLBACKS_H */
#line 2 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\internal\\pstunit_messages.h"
#ifndef PSTUNIT_MESSAGES_H
#define PSTUNIT_MESSAGES_H
#line 49
extern const char pst_msg_config_failure_ignored[]; 

extern const char pst_msg_uninitialized_context[]; 



extern const char pst_msg_uninitialized_param_fmt[]; 

extern const char pst_msg_not_all_params_same_size_fmt[]; 

extern const char pst_msg_cannot_find_suite_or_test[]; 

extern const char pst_msg_cannot_find_suite[]; 

extern const char pst_msg_cannot_find_test[]; 

extern const char pst_msg_out_of_bounds_test_param_index[]; 

extern const char pst_msg_not_enough_test_param_indices[]; 

extern const char pst_msg_too_much_test_param_indices[]; 
#line 102
extern void pst_report_msg(const pst_message_type msg_type, const pst_line_number line_number, const char * file, const char * msg_fmt, ...); 
#line 112
#endif /* PSTUNIT_MESSAGES_H */
#line 211 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\pstunit.h"
extern pst_context g_pst_context; 
#line 357
void pst_status_on_verify_fail(void); 



void pst_status_on_assert_fail(void); 



void pst_status_on_assume_fail(void); 



void pst_status_on_abort(void); 
#line 375
void pst_cont_test_suite_fixture(void); 




void pst_cont_test_2fixtures(void); 
#line 387
void pst_run_tests(void); 
#line 741
void pst_register_test(pst_test_node * test_node, const char * multiple_reg_msg, const pst_line_number line_number, const char * file); 
#line 767
void *pst_get_suite_fixture(void); 
void *pst_get_suite_test_fixture(void); 
void *pst_get_test_fixture(void); 
#line 775
void pst_set_fixture_ptr(void * fixture_ptr, const pst_line_number line_number, const char * file); 


void *pst_fixture_ptr(const pst_line_number line_number, const char * file); 
#line 785
int pst_init_run_terminate(void); 
int pst_main(const int argc, char * argv[]); 
#line 895
extern pst_suite_node pst_autogen_p1_pst_default_suite_suite_var; 
#line 3 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\internal\\pstunit_assessment.h"
#ifndef PSTUNIT_ASSESSMENT_H_
#define PSTUNIT_ASSESSMENT_H_
#line 2 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\..\\..\\common\\include\\pst_string.h"
#ifndef PST_STRING_H
#define PST_STRING_H
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\string.h"
#ifndef _INC_STRING
#define _INC_STRING
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\errno.h"
#ifndef _INC_ERRNO
#define _INC_ERRNO



#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 




int *__cdecl _errno(void); 


errno_t __cdecl _set_errno(int _Value); 
errno_t __cdecl _get_errno(int * _Value); 

unsigned long *__cdecl __doserrno(void); 


errno_t __cdecl _set_doserrno(unsigned long _Value); 
errno_t __cdecl _get_doserrno(unsigned long * _Value); 
#line 137
#endif /* _INC_ERRNO */
#line 134
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 12 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.40.33807\\include\\vcruntime_string.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)



__pragma( pack ( push, 8 )) 




void *__cdecl memchr(const void * _Buf, int _Val, size_t _MaxCount); 
#line 29
int __cdecl memcmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 43
void *__cdecl memcpy(void * _Dst, const void * _Src, size_t _Size); 
#line 50
void *__cdecl memmove(void * _Dst, const void * _Src, size_t _Size); 
#line 63
void *__cdecl memset(void * _Dst, int _Val, size_t _Size); 
#line 70
char *__cdecl strchr(const char * _Str, int _Val); 
#line 76
char *__cdecl strrchr(const char * _Str, int _Ch); 
#line 82
char *__cdecl strstr(const char * _Str, const char * _SubStr); 
#line 89
wchar_t *__cdecl wcschr(const wchar_t * _Str, wchar_t _Ch); 
#line 95
wchar_t *__cdecl wcsrchr(const wchar_t * _Str, wchar_t _Ch); 
#line 102
wchar_t *__cdecl wcsstr(const wchar_t * _Str, const wchar_t * _SubStr); 
#line 20 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_memcpy_s.h"
#ifndef _CRT_MEMCPY_S_INLINE
#define _CRT_MEMCPY_S_INLINE static __inline
#endif /* _CRT_MEMCPY_S_INLINE */
#line 109 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.40.33807\\include\\vcruntime_string.h"
__pragma( pack ( pop )) 



#pragma warning(pop)
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_memcpy_s.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 39
static __inline errno_t __cdecl memcpy_s(void *const 
_Destination, const rsize_t 
_DestinationSize, const void *const 
_Source, const rsize_t 
_SourceSize) 

{ { 
if (_SourceSize == (0)) 
{ 
return 0; 
}  } 

{ int _Expr_val = !(!(_Destination != (void *)0)); { if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } } ; { 
if ((_Source == (void *)0) || (_DestinationSize < _SourceSize)) 
{ 
memset(_Destination, 0, _DestinationSize); 

{ int _Expr_val = !(!(_Source != (void *)0)); { if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } } ; 
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); { if (!_Expr_val) { *_errno() = 34; _invalid_parameter_noinfo(); return 34; }  } } ; 


return 22; 
}  } 
memcpy(_Destination, _Source, _SourceSize); 
return 0; 
} 


static __inline errno_t __cdecl memmove_s(void *const 
_Destination, const rsize_t 
_DestinationSize, const void *const 
_Source, const rsize_t 
_SourceSize) 

{ { 
if (_SourceSize == (0)) 
{ 
return 0; 
}  } 

{ int _Expr_val = !(!(_Destination != (void *)0)); { if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } } ; 
{ int _Expr_val = !(!(_Source != (void *)0)); { if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } } ; 
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); { if (!_Expr_val) { *_errno() = 34; _invalid_parameter_noinfo(); return 34; }  } } ; 

memmove(_Destination, _Source, _SourceSize); 
return 0; 
} 
#line 92
#pragma warning(pop)
__pragma( pack ( pop )) 
#line 17 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_memory.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)




__pragma( pack ( push, 8 )) 




int __cdecl _memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 35
int __cdecl _memicmp_l(const void * _Buf1, const void * _Buf2, size_t _Size, _locale_t _Locale); 
#line 82
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _memccpy. See online help for detail" "s.")) void *__cdecl 
memccpy(void * _Dst, const void * _Src, int _Val, size_t _Size); 
#line 90
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _memicmp. See online help for detail" "s.")) int __cdecl 
memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 118
__pragma( pack ( pop )) 



#pragma warning(pop)
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)




__pragma( pack ( push, 8 )) 
#line 32
errno_t __cdecl wcscat_s(wchar_t * _Destination, rsize_t _SizeInWords, const wchar_t * _Source); 
#line 39
errno_t __cdecl wcscpy_s(wchar_t * _Destination, rsize_t _SizeInWords, const wchar_t * _Source); 
#line 46
errno_t __cdecl wcsncat_s(wchar_t * _Destination, rsize_t _SizeInWords, const wchar_t * _Source, rsize_t _MaxCount); 
#line 54
errno_t __cdecl wcsncpy_s(wchar_t * _Destination, rsize_t _SizeInWords, const wchar_t * _Source, rsize_t _MaxCount); 
#line 62
wchar_t *__cdecl wcstok_s(wchar_t * _String, const wchar_t * _Delimiter, wchar_t ** _Context); 
#line 83
__declspec(allocator) wchar_t *__cdecl _wcsdup(const wchar_t * _String); 
#line 100
wchar_t *__cdecl wcscat(wchar_t * _Destination, const wchar_t * _Source); 
#line 108
int __cdecl wcscmp(const wchar_t * _String1, const wchar_t * _String2); 
#line 119
wchar_t *__cdecl wcscpy(wchar_t * _Destination, const wchar_t * _Source); 
#line 126
size_t __cdecl wcscspn(const wchar_t * _String, const wchar_t * _Control); 
#line 132
size_t __cdecl wcslen(const wchar_t * _String); 
#line 145
size_t __cdecl wcsnlen(const wchar_t * _Source, size_t _MaxCount); 
#line 161
static __inline size_t __cdecl wcsnlen_s(const wchar_t *
_Source, size_t 
_MaxCount) 

{ 
return (_Source == (0)) ? (0) : wcsnlen(_Source, _MaxCount); 
} 
#line 178
wchar_t *__cdecl wcsncat(wchar_t * _Destination, const wchar_t * _Source, size_t _Count); 
#line 187
int __cdecl wcsncmp(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 200
wchar_t *__cdecl wcsncpy(wchar_t * _Destination, const wchar_t * _Source, size_t _Count); 
#line 209
wchar_t *__cdecl wcspbrk(const wchar_t * _String, const wchar_t * _Control); 
#line 215
size_t __cdecl wcsspn(const wchar_t * _String, const wchar_t * _Control); 
#line 221
wchar_t *__cdecl wcstok(wchar_t * _String, const wchar_t * _Delimiter, wchar_t ** _Context); 
#line 239
static __inline wchar_t *__cdecl _wcstok(wchar_t *const 
_String, const wchar_t *const 
_Delimiter) 

{ 
return wcstok(_String, _Delimiter, 0); 
} 
#line 268
wchar_t *__cdecl _wcserror(int _ErrorNumber); 




errno_t __cdecl _wcserror_s(wchar_t * _Buffer, size_t _SizeInWords, int _ErrorNumber); 
#line 288
wchar_t *__cdecl __wcserror(const wchar_t * _String); 



errno_t __cdecl __wcserror_s(wchar_t * _Buffer, size_t _SizeInWords, const wchar_t * _ErrorMessage); 
#line 304
int __cdecl _wcsicmp(const wchar_t * _String1, const wchar_t * _String2); 




int __cdecl _wcsicmp_l(const wchar_t * _String1, const wchar_t * _String2, _locale_t _Locale); 
#line 315
int __cdecl _wcsnicmp(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 321
int __cdecl _wcsnicmp_l(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 328
errno_t __cdecl _wcsnset_s(wchar_t * _Destination, size_t _SizeInWords, wchar_t _Value, size_t _MaxCount); 
#line 342
wchar_t *__cdecl _wcsnset(wchar_t * _String, wchar_t _Value, size_t _MaxCount); 
#line 350
wchar_t *__cdecl _wcsrev(wchar_t * _String); 



errno_t __cdecl _wcsset_s(wchar_t * _Destination, size_t _SizeInWords, wchar_t _Value); 
#line 366
wchar_t *__cdecl _wcsset(wchar_t * _String, wchar_t _Value); 
#line 373
errno_t __cdecl _wcslwr_s(wchar_t * _String, size_t _SizeInWords); 
#line 383
wchar_t *__cdecl _wcslwr(wchar_t * _String); 
#line 389
errno_t __cdecl _wcslwr_s_l(wchar_t * _String, size_t _SizeInWords, _locale_t _Locale); 
#line 401
wchar_t *__cdecl _wcslwr_l(wchar_t * _String, _locale_t _Locale); 
#line 409
errno_t __cdecl _wcsupr_s(wchar_t * _String, size_t _Size); 
#line 419
wchar_t *__cdecl _wcsupr(wchar_t * _String); 
#line 425
errno_t __cdecl _wcsupr_s_l(wchar_t * _String, size_t _Size, _locale_t _Locale); 
#line 437
wchar_t *__cdecl _wcsupr_l(wchar_t * _String, _locale_t _Locale); 
#line 446
size_t __cdecl wcsxfrm(wchar_t * _Destination, const wchar_t * _Source, size_t _MaxCount); 
#line 454
size_t __cdecl _wcsxfrm_l(wchar_t * _Destination, const wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 462
int __cdecl wcscoll(const wchar_t * _String1, const wchar_t * _String2); 
#line 468
int __cdecl _wcscoll_l(const wchar_t * _String1, const wchar_t * _String2, _locale_t _Locale); 
#line 475
int __cdecl _wcsicoll(const wchar_t * _String1, const wchar_t * _String2); 
#line 481
int __cdecl _wcsicoll_l(const wchar_t * _String1, const wchar_t * _String2, _locale_t _Locale); 
#line 488
int __cdecl _wcsncoll(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 495
int __cdecl _wcsncoll_l(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 503
int __cdecl _wcsnicoll(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 510
int __cdecl _wcsnicoll_l(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 569
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsdup. See online help for details" ".")) wchar_t *__cdecl 
wcsdup(const wchar_t * _String); 
#line 581
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsicmp. See online help for detail" "s.")) int __cdecl 
wcsicmp(const wchar_t * _String1, const wchar_t * _String2); 




__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsnicmp. See online help for detai" "ls.")) int __cdecl 
wcsnicmp(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 594
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsnset. See online help for detail" "s.")) wchar_t *__cdecl 

wcsnset(wchar_t * _String, wchar_t _Value, size_t _MaxCount); 
#line 602
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsrev. See online help for details" ".")) wchar_t *__cdecl 

wcsrev(wchar_t * _String); 



__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsset. See online help for details" ".")) wchar_t *__cdecl 

wcsset(wchar_t * _String, wchar_t _Value); 




__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcslwr. See online help for details" ".")) wchar_t *__cdecl 

wcslwr(wchar_t * _String); 



__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsupr. See online help for details" ".")) wchar_t *__cdecl 

wcsupr(wchar_t * _String); 



__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsicoll. See online help for detai" "ls.")) int __cdecl 
wcsicoll(const wchar_t * _String1, const wchar_t * _String2); 
#line 637
__pragma( pack ( pop )) 



#pragma warning(pop)
#line 19 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\string.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 32
errno_t __cdecl strcpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 39
errno_t __cdecl strcat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 46
errno_t __cdecl strerror_s(char * _Buffer, size_t _SizeInBytes, int _ErrorNumber); 
#line 52
errno_t __cdecl strncat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 60
errno_t __cdecl strncpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 68
char *__cdecl strtok_s(char * _String, const char * _Delimiter, char ** _Context); 
#line 76
void *__cdecl _memccpy(void * _Dst, const void * _Src, int _Val, size_t _MaxCount); 
#line 91
char *__cdecl strcat(char * _Destination, const char * _Source); 
#line 100
int __cdecl strcmp(const char * _Str1, const char * _Str2); 
#line 106
int __cdecl _strcmpi(const char * _String1, const char * _String2); 
#line 112
int __cdecl strcoll(const char * _String1, const char * _String2); 
#line 118
int __cdecl _strcoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 130
char *__cdecl strcpy(char * _Destination, const char * _Source); 
#line 137
size_t __cdecl strcspn(const char * _Str, const char * _Control); 
#line 148
__declspec(allocator) char *__cdecl _strdup(const char * _Source); 
#line 159
char *__cdecl _strerror(const char * _ErrorMessage); 




errno_t __cdecl _strerror_s(char * _Buffer, size_t _SizeInBytes, const char * _ErrorMessage); 
#line 178
char *__cdecl strerror(int _ErrorMessage); 
#line 189
int __cdecl _stricmp(const char * _String1, const char * _String2); 
#line 195
int __cdecl _stricoll(const char * _String1, const char * _String2); 
#line 201
int __cdecl _stricoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 208
int __cdecl _stricmp_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 215
size_t __cdecl strlen(const char * _Str); 




errno_t __cdecl _strlwr_s(char * _String, size_t _Size); 
#line 230
char *__cdecl _strlwr(char * _String); 
#line 236
errno_t __cdecl _strlwr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 248
char *__cdecl _strlwr_l(char * _String, _locale_t _Locale); 
#line 262
char *__cdecl strncat(char * _Destination, const char * _Source, size_t _Count); 
#line 271
int __cdecl strncmp(const char * _Str1, const char * _Str2, size_t _MaxCount); 
#line 278
int __cdecl _strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 285
int __cdecl _strnicmp_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 293
int __cdecl _strnicoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 300
int __cdecl _strnicoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 308
int __cdecl _strncoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 315
int __cdecl _strncoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 322
size_t __cdecl __strncnt(const char * _String, size_t _Count); 
#line 334
char *__cdecl strncpy(char * _Destination, const char * _Source, size_t _Count); 
#line 351
size_t __cdecl strnlen(const char * _String, size_t _MaxCount); 
#line 367
static __inline size_t __cdecl strnlen_s(const char *
_String, size_t 
_MaxCount) 

{ 
return (_String == (0)) ? (0) : strnlen(_String, _MaxCount); 
} 




errno_t __cdecl _strnset_s(char * _String, size_t _SizeInBytes, int _Value, size_t _MaxCount); 
#line 392
char *__cdecl _strnset(char * _Destination, int _Value, size_t _Count); 
#line 401
char *__cdecl strpbrk(const char * _Str, const char * _Control); 




char *__cdecl _strrev(char * _Str); 




errno_t __cdecl _strset_s(char * _Destination, size_t _DestinationSize, int _Value); 
#line 423
char *__cdecl _strset(char * _Destination, int _Value); 
#line 430
size_t __cdecl strspn(const char * _Str, const char * _Control); 
#line 436
char *__cdecl strtok(char * _String, const char * _Delimiter); 
#line 442
errno_t __cdecl _strupr_s(char * _String, size_t _Size); 
#line 452
char *__cdecl _strupr(char * _String); 
#line 458
errno_t __cdecl _strupr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 470
char *__cdecl _strupr_l(char * _String, _locale_t _Locale); 
#line 479
size_t __cdecl strxfrm(char * _Destination, const char * _Source, size_t _MaxCount); 
#line 487
size_t __cdecl _strxfrm_l(char * _Destination, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 531
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strdup. See online help for details" ".")) char *__cdecl 
strdup(const char * _String); 
#line 538
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strcmpi. See online help for detail" "s.")) int __cdecl 
strcmpi(const char * _String1, const char * _String2); 




__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for detail" "s.")) int __cdecl 
stricmp(const char * _String1, const char * _String2); 




__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strlwr. See online help for details" ".")) char *__cdecl 
strlwr(char * _String); 



__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strnicmp. See online help for detai" "ls.")) int __cdecl 
strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 562
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strnset. See online help for detail" "s.")) char *__cdecl 
strnset(char * _String, int _Value, size_t _MaxCount); 
#line 569
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strrev. See online help for details" ".")) char *__cdecl 
strrev(char * _String); 



__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strset. See online help for details" ".")) char *__cdecl 
strset(char * _String, int _Value); 



__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strupr. See online help for details" ".")) char *__cdecl 
strupr(char * _String); 
#line 592
#endif /* _INC_STRING */
#line 43 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\..\\..\\common\\include\\pst_string.h"
#endif /* PST_STRING_H */
#line 588 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\string.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 82 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\internal\\pstunit_assessment.h"
extern const char pst_int_cmp_diagnostic_format[]; 
extern const char pst_uint_cmp_diagnostic_format[]; 
extern const char pst_ptr_cmp_diagnostic_format[]; 
extern const char pst_ptr_each_cmp_diagnostic_format[]; 
extern const char pst_bits_cmp_diagnostic_format[]; 
extern const char pst_bits_cmp_mask_diagnostic_format[]; 
extern const char pst_float_close_cmp_diagnostic_format[]; 
extern const char pst_float_cmp_diagnostic_format[]; 
extern const char pst_cmp_diagnostic_format[]; 
extern const char pst_close_cmp_diagnostic_format[]; 
extern const char pst_each_cmp_diagnostic_format[]; 




extern void pst_report_assessment(const pst_assessment_severity severity, const pst_evaluation_type eval_type, const int res, const char * expr, const char * msg, const pst_line_number line_number, const char * file, const char * diagnostic, ...); 
#line 747
extern long double pst_absf(const long double); 
#line 1470
#endif /* PSTUNIT_ASSESSMENT_H_ */
#line 3 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\internal\\pstunit_param.h"
#ifndef PSTUNIT_PARAM_H_
#define PSTUNIT_PARAM_H_
#line 98
void pst_reg_param(pst_param_list * param_list, pst_param_node * param_node); 

void pst_add_param(const pst_line_number line_number, const char * file, pst_param_node * param_node, const char * already_reg_msg, const char * max_params_msg); 
#line 154
int pst_next_params_exhaustive(pst_param_list * param_list); 

int pst_next_params_sequential(pst_param_list * param_list); 


void pst_check_params_exhaustive(pst_param_list * param_list); 

void pst_check_params_sequential(pst_param_list * param_list); 
#line 167
void pst_reset_test_params(void); 

int pst_next_test_params(void); 

void pst_check_test_params(void); 




void pst_print_test_params(void); 
void pst_print_test_params_values(void); 
void pst_print_test_params_summary(void); 
#line 185
void pst_format_param_int(char *, const pst_size_t, const void *); 

void pst_format_param_uint(char *, const pst_size_t, const void *); 


void pst_format_param_flt(char *, const pst_size_t, const void *); 


void pst_format_param_char(char *, const pst_size_t, const void *); 

void pst_format_param_ptr(char *, const pst_size_t, const void *); 

void pst_format_param_cstr(char *, const pst_size_t, const void *); 
#line 204
#endif /* PSTUNIT_PARAM_H_ */
#line 3 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\mock\\pstunit_mock_selection.h"
#ifndef PSTUNIT_MOCK_SELECTION_H_
#define PSTUNIT_MOCK_SELECTION_H_

extern void pst_reset_mock_selectors(void); 

extern void pst_append_mock_selector(pst_mock_selector_node * mock_selector_node); 

extern pst_mock_selector *pst_selected_mock(pst_mock_selector_node * mock_selector_node); 
#line 34
#endif /* PSTUNIT_MOCK_SELECTION_H_ */
#line 3 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\mock\\pstunit_mock_plugin.h"
#ifndef PSTUNIT_MOCK_PLUGIN_
#define PSTUNIT_MOCK_PLUGIN_
#line 18
#endif /* PSTUNIT_MOCK_PLUGIN_ */
#line 925 "C:\\Program Files\\Polyspace\\R2024a\\polyspace\\pstest\\pstunit\\include\\pstunit.h"
#endif /* PSTUNIT_H_ */
#line 10 "E:\\Denemeler\\PSTDeneme\\polyspace_artifacts\\p1e0602c1c\\b1d2d4chost\\codegen\\test\\New_Test_Case_1.c"
int speed(int x); 
#line 30
static void pst_autogen_p1_pst_default_suite_p2_New_Test_Case_1_test_fcn(void); static void pst_autogen_p1_pst_default_suite_p2_New_Test_Case_1_set_test_config(void); extern pst_test_node pst_autogen_p1_pst_default_suite_p2_New_Test_Case_1_test_var; pst_test_node pst_autogen_p1_pst_default_suite_p2_New_Test_Case_1_test_var = {{("New_Test_Case_1"), pst_autogen_p1_pst_default_suite_p2_New_Test_Case_1_test_fcn, pst_autogen_p1_pst_default_suite_p2_New_Test_Case_1_set_test_config, (&pst_autogen_p1_pst_default_suite_suite_var), (30), ("E:\\Denemeler\\PSTDeneme\\polyspace_artifacts\\p1e0602c1c\\b1d2d4chost\\codegen\\test\\New_Test_Case_1.c")}, ((void *)0)}; static void pst_autogen_p1_pst_default_suite_p2_New_Test_Case_1_set_test_config(void) { stackStart_testbin_sil(1U); __MW_INSTRUM_FCN_ENTER_1(); __MW_INSTRUM_NODE_1(); __MW_INSTRUM_NODE_2(); stackEnd_testbin_sil(1U); 
} 



extern void pst_autogen_p1_block_New_Test_Case_1_Step_ID1(void); pst_block pst_autogen_p1_block_struct_New_Test_Case_1_Step_ID1 = {("New_Test_Case_1_Step_ID1"), (&pst_autogen_p1_block_New_Test_Case_1_Step_ID1), ((void *)0)}; void pst_autogen_p1_block_New_Test_Case_1_Step_ID1(void) { stackStart_testbin_sil(2U); __MW_INSTRUM_FCN_ENTER_2(); __MW_INSTRUM_NODE_3(); { 
int x; 
int pst_call_out; 


x = 3; 
pst_call_out = speed(x); 


g_pst_context.assessment_id = ("c7c2832e-e44c-437d-ac10-907f18553291"); { 
do { __MW_INSTRUM_NODE_4(); { const pst_long_long_t pst_internal_curr_lhs = (pst_long_long_t)pst_call_out; const pst_long_long_t pst_internal_curr_rhs = ((pst_long_long_t)20); const int pst_internal_curr_assessment_res = pst_internal_curr_lhs < pst_internal_curr_rhs; pst_report_assessment(PST_VERIFY_ASSESSMENT, PST_CMP_LT_INT, pst_internal_curr_assessment_res, "((pst_call_out)) < ((20))", 0, (pst_line_number)45, "E:\\Denemeler\\PSTDeneme\\polyspace_artifacts\\p1e0602c1c\\b1d2d4chost\\codegen\\test\\New_Test_Case_1.c", pst_int_cmp_diagnostic_format, (pst_long_long_t)pst_internal_curr_lhs, (pst_long_long_t)pst_internal_curr_rhs); g_pst_context.assessment_id = (void *)0; { if (__MW_INSTRUM_NODE_7(!__MW_INSTRUM_NODE_9(pst_internal_curr_assessment_res))) { pst_status_on_verify_fail(); }  } ; } } while (__MW_INSTRUM_NODE_5(0)); } } __MW_INSTRUM_NODE_11(); stackEnd_testbin_sil(2U); 
} 


static void pst_autogen_p1_pst_default_suite_p2_New_Test_Case_1_test_fcn(void) { stackStart_testbin_sil(3U); __MW_INSTRUM_FCN_ENTER_3(); __MW_INSTRUM_NODE_12(); { 
do { __MW_INSTRUM_NODE_13(); pst_xil_block_event(PST_EVENT_BLOCK_START, &pst_autogen_p1_block_struct_New_Test_Case_1_Step_ID1, 0); pst_autogen_p1_block_New_Test_Case_1_Step_ID1(); pst_xil_block_event(PST_EVENT_BLOCK_END, &pst_autogen_p1_block_struct_New_Test_Case_1_Step_ID1, 0); } while (__MW_INSTRUM_NODE_14(0)); } __MW_INSTRUM_NODE_16(); stackEnd_testbin_sil(3U); 
} 



extern void pst_autogen_p1_reg_pstestRegisterGeneratedTests(void); void pst_autogen_p1_reg_pstestRegisterGeneratedTests(void) { stackStart_testbin_sil(4U); __MW_INSTRUM_FCN_ENTER_4(); __MW_INSTRUM_NODE_17(); 
pst_register_test(&pst_autogen_p1_pst_default_suite_p2_New_Test_Case_1_test_var, "Already registered test \'pst_default_suite/New_Test_Case_1\', multiple registration ignored.", 56, "E:\\Denemeler\\PSTDeneme\\polyspace_artifacts\\p1e0602c1c\\b1d2d4chost\\codegen\\test\\New_Test_Case_1.c"); 
pst_register_block(&pst_autogen_p1_block_struct_New_Test_Case_1_Step_ID1); __MW_INSTRUM_NODE_18(); stackEnd_testbin_sil(4U); 
} 
