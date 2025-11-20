#ifndef __MW_INTERNAL_SLDV_PS_ANALYSIS__
static unsigned int __mw_instrum_hits[2];

static unsigned int* __mw_instrum_phits= &__mw_instrum_hits[0];

#define __MW_INSTRUM_HITS_TABLE_VAR_NAME __mw_instrum_phits

#define __MW_INSTRUM_RECORD_HIT_NO_TEST(id) ((void)(__mw_instrum_phits[(id - 1U) / 32] |= (1U << ((id - 1U) % 32))))
#define __MW_INSTRUM_RECORD_HIT(id) __MW_INSTRUM_RECORD_HIT_NO_TEST(id)

static char __mw_instrum_is_registered = 0;

static void __MW_INSTRUM_REGISTER_THIS_FILE(unsigned int fcnEnterId);


#define __MW_INSTRUM_FCN_ENTER_1() 

#define __MW_INSTRUM_NODE_1() ((__mw_instrum_is_registered ? (void)0 : (void)__MW_INSTRUM_REGISTER_THIS_FILE(1)), __MW_INSTRUM_RECORD_HIT(1U))
#define __MW_INSTRUM_NODE_2(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(2U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(3U), (0 == 1)))
#define __MW_INSTRUM_NODE_4(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(4U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(5U), (0 == 1)))
#define __MW_INSTRUM_NODE_6(lhs, rhs) ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT(6U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT(7U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT(8U) : (void)0)))
#define __MW_INSTRUM_NODE_9(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(9U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(10U), (0 == 1)))
#define __MW_INSTRUM_NODE_11(lhs, rhs) ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT(11U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT(12U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT(13U) : (void)0)))
#define __MW_INSTRUM_NODE_14() (__MW_INSTRUM_RECORD_HIT(14U))
#define __MW_INSTRUM_NODE_3() (__MW_INSTRUM_RECORD_HIT(3U))
#define __MW_INSTRUM_NODE_15(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(15U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(16U), (0 == 1)))
#define __MW_INSTRUM_NODE_17(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(17U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(18U), (0 == 1)))
#define __MW_INSTRUM_NODE_19(lhs, rhs) ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT(19U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT(20U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT(21U) : (void)0)))
#define __MW_INSTRUM_NODE_22(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(22U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(23U), (0 == 1)))
#define __MW_INSTRUM_NODE_24(lhs, rhs) ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT(24U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT(25U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT(26U) : (void)0)))
#define __MW_INSTRUM_NODE_27() (__MW_INSTRUM_RECORD_HIT(27U))
#define __MW_INSTRUM_NODE_16() (__MW_INSTRUM_RECORD_HIT(16U))
#define __MW_INSTRUM_NODE_28(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(28U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(29U), (0 == 1)))
#define __MW_INSTRUM_NODE_30(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(30U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(31U), (0 == 1)))
#define __MW_INSTRUM_NODE_32(lhs, rhs) ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT(32U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT(33U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT(34U) : (void)0)))
#define __MW_INSTRUM_NODE_35(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(35U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(36U), (0 == 1)))
#define __MW_INSTRUM_NODE_37(lhs, rhs) ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT(37U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT(38U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT(39U) : (void)0)))
#define __MW_INSTRUM_NODE_40() (__MW_INSTRUM_RECORD_HIT(40U))
#define __MW_INSTRUM_NODE_29() (__MW_INSTRUM_RECORD_HIT(29U))
#define __MW_INSTRUM_NODE_41() (__MW_INSTRUM_RECORD_HIT(41U))
#ifdef __cplusplus
template<typename T>
static T *__mw_instrum_address_of(T& arg)
{
  return reinterpret_cast<T*>(
               &const_cast<char&>(
                   reinterpret_cast<const volatile char&>(arg)));
}
#endif

typedef struct __mw_instrum_node {
    const char* uniqueID;
    unsigned int* hitsTbl;
    void* profilingTbl;
    struct __mw_instrum_node* next;
    unsigned int numHits;
    unsigned int numProfiling;
    unsigned int internalInfo[1];
}__mw_instrum_node;
static __mw_instrum_node __mw_instrum_file_data = {
    "ps_deneme_A55A8B668D846A56F426B7E3092AE228",
    &__mw_instrum_hits[0], 0, 0, 2, 0,{139267}};

extern void psprofile_register_file(void* pFileData, unsigned int fcnEnterId);
static void __MW_INSTRUM_REGISTER_THIS_FILE(unsigned int fcnEnterId)
{
    psprofile_register_file((void*)&__mw_instrum_file_data, fcnEnterId);
    __mw_instrum_is_registered = 1;
}

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#define __mw_instrum_address_of(x) &(x)


#define __MW_INSTRUM_FCN_ENTER_1() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_1EZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(void) { }
#define __MW_INSTRUM_NODE_1() __MW_INSTRUM_RECORD_HIT_1EZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_2DZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_2(...) (__MW_INSTRUM_RECORD_HIT_2DZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_2(exp) (__MW_INSTRUM_RECORD_HIT_2DZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_4CZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_4(...) (__MW_INSTRUM_RECORD_HIT_4CZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_4(exp) (__MW_INSTRUM_RECORD_HIT_4CZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_6IGTZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_6(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_6IGTZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_9CZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_9(...) (__MW_INSTRUM_RECORD_HIT_9CZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_9(exp) (__MW_INSTRUM_RECORD_HIT_9CZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_11IGTZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_11(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_11IGTZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_14XZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(void) { }
#define __MW_INSTRUM_NODE_14() __MW_INSTRUM_RECORD_HIT_14XZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228()

#define __MW_INSTRUM_NODE_3() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_15DZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_15(...) (__MW_INSTRUM_RECORD_HIT_15DZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_15(exp) (__MW_INSTRUM_RECORD_HIT_15DZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_17CZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_17(...) (__MW_INSTRUM_RECORD_HIT_17CZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_17(exp) (__MW_INSTRUM_RECORD_HIT_17CZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_19ILTZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_19(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_19ILTZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_22CZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_22(...) (__MW_INSTRUM_RECORD_HIT_22CZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_22(exp) (__MW_INSTRUM_RECORD_HIT_22CZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_24IGTZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_24(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_24IGTZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_27XZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(void) { }
#define __MW_INSTRUM_NODE_27() __MW_INSTRUM_RECORD_HIT_27XZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228()

#define __MW_INSTRUM_NODE_16() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_28DZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_28(...) (__MW_INSTRUM_RECORD_HIT_28DZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_28(exp) (__MW_INSTRUM_RECORD_HIT_28DZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_30CZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_30(...) (__MW_INSTRUM_RECORD_HIT_30CZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_30(exp) (__MW_INSTRUM_RECORD_HIT_30CZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_32ILTZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_32(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_32ILTZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_35CZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_35(...) (__MW_INSTRUM_RECORD_HIT_35CZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_35(exp) (__MW_INSTRUM_RECORD_HIT_35CZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_37ILTZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_37(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_37ILTZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_40XZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(void) { }
#define __MW_INSTRUM_NODE_40() __MW_INSTRUM_RECORD_HIT_40XZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228()

#define __MW_INSTRUM_NODE_29() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_41XZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228(void) { }
#define __MW_INSTRUM_NODE_41() __MW_INSTRUM_RECORD_HIT_41XZ_ps_deneme_A55A8B668D846A56F426B7E3092AE228()


#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

#line 1 "E:\\Denemeler\\PSTDeneme\\ps_deneme.c"
int whichQuadrant(int x, int y) 
{ __MW_INSTRUM_FCN_ENTER_1(); __MW_INSTRUM_NODE_1(); { 
if (__MW_INSTRUM_NODE_2(__MW_INSTRUM_NODE_4((__MW_INSTRUM_NODE_6(x, 0), (x > 0))) && __MW_INSTRUM_NODE_9((__MW_INSTRUM_NODE_11(y, 0), (y > 0))))) 
{ __MW_INSTRUM_NODE_14(); 
return 1; 
} else 
{ { if (__MW_INSTRUM_NODE_15(__MW_INSTRUM_NODE_17((__MW_INSTRUM_NODE_19(x, 0), (x < 0))) && __MW_INSTRUM_NODE_22((__MW_INSTRUM_NODE_24(y, 0), (y > 0))))) 
{ __MW_INSTRUM_NODE_27(); 
return 2; 
} else 
{ { if (__MW_INSTRUM_NODE_28(__MW_INSTRUM_NODE_30((__MW_INSTRUM_NODE_32(x, 0), (x < 0))) && __MW_INSTRUM_NODE_35((__MW_INSTRUM_NODE_37(y, 0), (y < 0))))) 
{ __MW_INSTRUM_NODE_40(); 
return 3; 
} else 

{ __MW_INSTRUM_NODE_41(); 
return 4; 
}  } }  } }  } 
} 
