#ifndef __MW_INTERNAL_SLDV_PS_ANALYSIS__
static unsigned int __mw_instrum_hits[1];

static unsigned int* __mw_instrum_phits= &__mw_instrum_hits[0];

#define __MW_INSTRUM_HITS_TABLE_VAR_NAME __mw_instrum_phits

#define __MW_INSTRUM_RECORD_HIT_NO_TEST(id) ((void)(__mw_instrum_phits[(id - 1U) / 32] |= (1U << ((id - 1U) % 32))))
#define __MW_INSTRUM_RECORD_HIT(id) __MW_INSTRUM_RECORD_HIT_NO_TEST(id)

static char __mw_instrum_is_registered = 0;

static void __MW_INSTRUM_REGISTER_THIS_FILE(unsigned int fcnEnterId);


#define __MW_INSTRUM_FCN_ENTER_1() 

#define __MW_INSTRUM_NODE_1() ((__mw_instrum_is_registered ? (void)0 : (void)__MW_INSTRUM_REGISTER_THIS_FILE(1)), __MW_INSTRUM_RECORD_HIT(1U))
#define __MW_INSTRUM_NODE_2(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(2U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(3U), (0 == 1)))
#define __MW_INSTRUM_NODE_3() (__MW_INSTRUM_RECORD_HIT(3U))
#define __MW_INSTRUM_NODE_4() (__MW_INSTRUM_RECORD_HIT(4U))
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
    "ps_deneme_FDE04AD01D4F3BF06D4E32DA1512FC1E",
    &__mw_instrum_hits[0], 0, 0, 1, 0,{139267}};

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
void __MW_INSTRUM_RECORD_HIT_1EZ_ps_deneme_FDE04AD01D4F3BF06D4E32DA1512FC1E(void) { }
#define __MW_INSTRUM_NODE_1() __MW_INSTRUM_RECORD_HIT_1EZ_ps_deneme_FDE04AD01D4F3BF06D4E32DA1512FC1E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_2DZ_ps_deneme_FDE04AD01D4F3BF06D4E32DA1512FC1E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_2(...) (__MW_INSTRUM_RECORD_HIT_2DZ_ps_deneme_FDE04AD01D4F3BF06D4E32DA1512FC1E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_2(exp) (__MW_INSTRUM_RECORD_HIT_2DZ_ps_deneme_FDE04AD01D4F3BF06D4E32DA1512FC1E(exp))
#endif

#define __MW_INSTRUM_NODE_3() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_4XZ_ps_deneme_FDE04AD01D4F3BF06D4E32DA1512FC1E(void) { }
#define __MW_INSTRUM_NODE_4() __MW_INSTRUM_RECORD_HIT_4XZ_ps_deneme_FDE04AD01D4F3BF06D4E32DA1512FC1E()


#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

#line 1 "E:\\Denemeler\\PSTDeneme\\ps_deneme.c"
int speed(int x) { __MW_INSTRUM_FCN_ENTER_1(); __MW_INSTRUM_NODE_1(); { 
while (__MW_INSTRUM_NODE_2(x < 10)) { 
x++; 
}  } 
{ int __mw_tmp_for_return = x; __MW_INSTRUM_NODE_4(); return __mw_tmp_for_return; } 
} 
