#ifndef __MW_INTERNAL_SLDV_PS_ANALYSIS__
static unsigned int __mw_instrum_testbin_userCode_hits[2];

static unsigned int* __mw_instrum_testbin_userCode_phits= &__mw_instrum_testbin_userCode_hits[0];

#define __MW_INSTRUM_HITS_TABLE_VAR_NAME __mw_instrum_testbin_userCode_phits

#define __MW_INSTRUM_RECORD_HIT_NO_TEST(id) ((void)(__mw_instrum_testbin_userCode_phits[(id - 1U) / 32] |= (1U << ((id - 1U) % 32))))
#define __MW_INSTRUM_RECORD_HIT(id) __MW_INSTRUM_RECORD_HIT_NO_TEST(id)

static char __mw_instrum_testbin_userCode_is_registered = 0;

static void __MW_INSTRUM_testbin_userCode_REGISTER_THIS_FILE(unsigned int fcnEnterId);


#define __MW_INSTRUM_FCN_ENTER_1() 

#define __MW_INSTRUM_NODE_1() ((__mw_instrum_testbin_userCode_is_registered ? (void)0 : (void)__MW_INSTRUM_testbin_userCode_REGISTER_THIS_FILE(1)), ((void)0))
#define __MW_INSTRUM_NODE_2(expr) (expr)
#define __MW_INSTRUM_NODE_3() (((void)0))
#define __MW_INSTRUM_NODE_4() (((void)0))
#ifdef __cplusplus
template<typename T>
static T *__mw_instrum_address_of(T& arg)
{
  return reinterpret_cast<T*>(
               &const_cast<char&>(
                   reinterpret_cast<const volatile char&>(arg)));
}
#endif

static void __MW_INSTRUM_testbin_userCode_REGISTER_THIS_FILE(unsigned int fcnEnterId)
{
 (void)fcnEnterId;}

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#define __mw_instrum_address_of(x) &(x)


#define __MW_INSTRUM_FCN_ENTER_1() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_1EZ_ps_deneme_6529CF5431F074A3FEDBFBCEDB4F6A21(void) { }
#define __MW_INSTRUM_NODE_1() __MW_INSTRUM_RECORD_HIT_1EZ_ps_deneme_6529CF5431F074A3FEDBFBCEDB4F6A21()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_2DZ_ps_deneme_6529CF5431F074A3FEDBFBCEDB4F6A21(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_2(...) (__MW_INSTRUM_RECORD_HIT_2DZ_ps_deneme_6529CF5431F074A3FEDBFBCEDB4F6A21(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_2(exp) (__MW_INSTRUM_RECORD_HIT_2DZ_ps_deneme_6529CF5431F074A3FEDBFBCEDB4F6A21(exp))
#endif

#define __MW_INSTRUM_NODE_3() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_4XZ_ps_deneme_6529CF5431F074A3FEDBFBCEDB4F6A21(void) { }
#define __MW_INSTRUM_NODE_4() __MW_INSTRUM_RECORD_HIT_4XZ_ps_deneme_6529CF5431F074A3FEDBFBCEDB4F6A21()


#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

#line 1 "E:\\Denemeler\\PSTDeneme\\ps_deneme.c"
extern void stackEnd_testbin_userCode(unsigned); extern void stackStart_testbin_userCode(unsigned); 
#line 1 "E:\\Denemeler\\PSTDeneme\\polyspace_artifacts\\p1e0602c1c\\b1d2d4chost\\buildstack\\userCode\\rtwtypes.h"
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
#line 5 "E:\\Denemeler\\PSTDeneme\\polyspace_artifacts\\p1e0602c1c\\b1d2d4chost\\buildstack\\userCode\\rtwtypes.h"
#endif /* RTWTYPES_H */
#line 1 "E:\\Denemeler\\PSTDeneme\\ps_deneme.c"
int speed(int x) { stackStart_testbin_userCode(1U); __MW_INSTRUM_FCN_ENTER_1(); __MW_INSTRUM_NODE_1(); { 
while (__MW_INSTRUM_NODE_2(x < 10)) { 
x++; 
}  } 
{ int __mw_tmp_for_return = x; __MW_INSTRUM_NODE_4(); stackEnd_testbin_userCode(1U); return __mw_tmp_for_return; } 
} 
