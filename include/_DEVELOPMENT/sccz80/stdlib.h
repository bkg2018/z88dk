
// automatically generated by m4 from headers in proto subdir


#ifndef _STDLIB_H
#define _STDLIB_H

#include <stddef.h>
#include <stdint.h>

// DATA STRUCTURES

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef unsigned int  size_t;
#endif

#ifndef _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED
typedef unsigned char wchar_t;
#endif

#ifndef _FLOAT_T_DEFINED
#define _FLOAT_T_DEFINED

   #ifdef __SDCC
   
   typedef float float_t;
   
   #else
   
   typedef double float_t;
   
   #endif
   
#endif

#ifndef _DOUBLE_T_DEFINED
#define _DOUBLE_T_DEFINED

   #ifdef __SDCC
   
   typedef float double_t;
   
   #else
   
   typedef double double_t;
   
   #endif
   
#endif

typedef struct
{

   int rem;
   int quot;

} div_t;

typedef struct
{

   unsigned int rem;
   unsigned int quot;

} divu_t;

typedef struct
{

   long quot;
   long rem;

} ldiv_t;

typedef struct
{

   unsigned long quot;
   unsigned long rem;

} ldivu_t;

#ifdef __SDCC

   typedef struct
   {
      long long rem;
      long long quot;
   
   } lldiv_t;

   typedef struct
   {
      unsigned long long rem;
      unsigned long long quot;

   } lldivu_t;

#endif

#ifndef NULL
#define NULL            ((void*)(0))
#endif

#define EXIT_FAILURE    0
#define EXIT_SUCCESS    1

#define RAND_MAX        32767

#define MB_CUR_MAX      1

#define FTOA_FLAG_PLUS  0x40
#define FTOA_FLAG_SPACE 0x20
#define FTOA_FLAG_HASH  0x10

#define DTOA_FLAG_PLUS  0x40
#define DTOA_FLAG_SPACE 0x20
#define DTOA_FLAG_HASH  0x10

// FUNCTIONS

extern void __LIB__ _div_(div_t *d,int numer,int denom);
extern void __LIB__ __CALLEE__ _div__callee(div_t *d,int numer,int denom);
#define _div_(a,b,c) _div__callee(a,b,c)


extern void __LIB__ _divu_(divu_t *d,unsigned int numer,unsigned int denom);
extern void __LIB__ __CALLEE__ _divu__callee(divu_t *d,unsigned int numer,unsigned int denom);
#define _divu_(a,b,c) _divu__callee(a,b,c)


extern void __LIB__ _ldiv_(ldiv_t *ld,long numer,long denom);
extern void __LIB__ __CALLEE__ _ldiv__callee(ldiv_t *ld,long numer,long denom);
#define _ldiv_(a,b,c) _ldiv__callee(a,b,c)


extern void __LIB__ _ldivu_(ldivu_t *ld,unsigned long numer,unsigned long denom);
extern void __LIB__ __CALLEE__ _ldivu__callee(ldivu_t *ld,unsigned long numer,unsigned long denom);
#define _ldivu_(a,b,c) _ldivu__callee(a,b,c)


extern void __LIB__ _insertion_sort_(void *base,size_t nmemb,size_t size,void *compar);
extern void __LIB__ __CALLEE__ _insertion_sort__callee(void *base,size_t nmemb,size_t size,void *compar);
#define _insertion_sort_(a,b,c,d) _insertion_sort__callee(a,b,c,d)


extern void __LIB__ _quicksort_(void *base,size_t nmemb,size_t size,void *compar);
extern void __LIB__ __CALLEE__ _quicksort__callee(void *base,size_t nmemb,size_t size,void *compar);
#define _quicksort_(a,b,c,d) _quicksort__callee(a,b,c,d)


extern void __LIB__ _shellsort_(void *base,size_t nmemb,size_t size,void *compar);
extern void __LIB__ __CALLEE__ _shellsort__callee(void *base,size_t nmemb,size_t size,void *compar);
#define _shellsort_(a,b,c,d) _shellsort__callee(a,b,c,d)


extern uint16_t __LIB__ __FASTCALL__ _random_uniform_cmwc_8_(void *seed);


extern uint32_t __LIB__ __FASTCALL__ _random_uniform_xor_32_(uint32_t *seed);


extern uint16_t __LIB__ __FASTCALL__ _random_uniform_xor_8_(uint32_t *seed);


extern int __LIB__ _strtoi_(char *nptr,char **endptr,int base);
extern int __LIB__ __CALLEE__ _strtoi__callee(char *nptr,char **endptr,int base);
#define _strtoi_(a,b,c) _strtoi__callee(a,b,c)


extern uint16_t __LIB__ _strtou_(char *nptr,char **endptr,int base);
extern uint16_t __LIB__ __CALLEE__ _strtou__callee(char *nptr,char **endptr,int base);
#define _strtou_(a,b,c) _strtou__callee(a,b,c)


extern void __LIB__ abort(void);


extern int __LIB__ __FASTCALL__ abs(int j);


extern int __LIB__ __FASTCALL__ at_quick_exit(void *func);


extern int __LIB__ __FASTCALL__ atexit(void *func);


extern double_t __LIB__ __FASTCALL__ atof(char *nptr);


extern int __LIB__ __FASTCALL__ atoi(char *buf);


extern long __LIB__ __FASTCALL__ atol(char *buf);


extern void __LIB__ bsearch(void *key,void *base,size_t nmemb,size_t size,void *compar);
extern void __LIB__ __CALLEE__ bsearch_callee(void *key,void *base,size_t nmemb,size_t size,void *compar);
#define bsearch(a,b,c,d,e) bsearch_callee(a,b,c,d,e)


extern size_t __LIB__ dtoa(double_t x,void *buf,uint16_t prec,uint16_t flags);
extern size_t __LIB__ __CALLEE__ dtoa_callee(double_t x,void *buf,uint16_t prec,uint16_t flags);
#define dtoa(a,b,c,d) dtoa_callee(a,b,c,d)


extern size_t __LIB__ dtoe(double_t x,void *buf,uint16_t prec,uint16_t flags);
extern size_t __LIB__ __CALLEE__ dtoe_callee(double_t x,void *buf,uint16_t prec,uint16_t flags);
#define dtoe(a,b,c,d) dtoe_callee(a,b,c,d)


extern size_t __LIB__ dtog(double_t x,void *buf,uint16_t prec,uint16_t flags);
extern size_t __LIB__ __CALLEE__ dtog_callee(double_t x,void *buf,uint16_t prec,uint16_t flags);
#define dtog(a,b,c,d) dtog_callee(a,b,c,d)


extern size_t __LIB__ dtoh(double_t x,void *buf,uint16_t prec,uint16_t flags);
extern size_t __LIB__ __CALLEE__ dtoh_callee(double_t x,void *buf,uint16_t prec,uint16_t flags);
#define dtoh(a,b,c,d) dtoh_callee(a,b,c,d)


extern void __LIB__ __FASTCALL__ exit(int status);


extern size_t __LIB__ ftoa(float_t x,void *buf,uint16_t prec,uint16_t flags);
extern size_t __LIB__ __CALLEE__ ftoa_callee(float_t x,void *buf,uint16_t prec,uint16_t flags);
#define ftoa(a,b,c,d) ftoa_callee(a,b,c,d)


extern size_t __LIB__ ftoe(float_t x,void *buf,uint16_t prec,uint16_t flags);
extern size_t __LIB__ __CALLEE__ ftoe_callee(float_t x,void *buf,uint16_t prec,uint16_t flags);
#define ftoe(a,b,c,d) ftoe_callee(a,b,c,d)


extern size_t __LIB__ ftog(float_t x,void *buf,uint16_t prec,uint16_t flags);
extern size_t __LIB__ __CALLEE__ ftog_callee(float_t x,void *buf,uint16_t prec,uint16_t flags);
#define ftog(a,b,c,d) ftog_callee(a,b,c,d)


extern size_t __LIB__ ftoh(float_t x,void *buf,uint16_t prec,uint16_t flags);
extern size_t __LIB__ __CALLEE__ ftoh_callee(float_t x,void *buf,uint16_t prec,uint16_t flags);
#define ftoh(a,b,c,d) ftoh_callee(a,b,c,d)


extern char __LIB__ *itoa(int num,char *buf,int radix);
extern char __LIB__ __CALLEE__ *itoa_callee(int num,char *buf,int radix);
#define itoa(a,b,c) itoa_callee(a,b,c)


extern long __LIB__ __FASTCALL__ labs(long j);


extern char __LIB__ *ltoa(long num,char *buf,int radix);
extern char __LIB__ __CALLEE__ *ltoa_callee(long num,char *buf,int radix);
#define ltoa(a,b,c) ltoa_callee(a,b,c)


extern void __LIB__ qsort(void *base,size_t nmemb,size_t size,void *compar);
extern void __LIB__ __CALLEE__ qsort_callee(void *base,size_t nmemb,size_t size,void *compar);
#define qsort(a,b,c,d) qsort_callee(a,b,c,d)


extern void __LIB__ __FASTCALL__ quick_exit(int status);


extern int __LIB__ rand(void);


extern void __LIB__ __FASTCALL__ srand(uint16_t seed);


extern double_t __LIB__ strtod(char *nptr,char **endptr);
extern double_t __LIB__ __CALLEE__ strtod_callee(char *nptr,char **endptr);
#define strtod(a,b) strtod_callee(a,b)


extern float_t __LIB__ strtof(char *nptr,char **endptr);
extern float_t __LIB__ __CALLEE__ strtof_callee(char *nptr,char **endptr);
#define strtof(a,b) strtof_callee(a,b)


extern long __LIB__ strtol(char *nptr,char **endptr,int base);
extern long __LIB__ __CALLEE__ strtol_callee(char *nptr,char **endptr,int base);
#define strtol(a,b,c) strtol_callee(a,b,c)


extern uint32_t __LIB__ strtoul(char *nptr,char **endptr,int base);
extern uint32_t __LIB__ __CALLEE__ strtoul_callee(char *nptr,char **endptr,int base);
#define strtoul(a,b,c) strtoul_callee(a,b,c)


extern int __LIB__ __FASTCALL__ system(char *s);


extern char __LIB__ *ultoa(uint32_t num,char *buf,int radix);
extern char __LIB__ __CALLEE__ *ultoa_callee(uint32_t num,char *buf,int radix);
#define ultoa(a,b,c) ultoa_callee(a,b,c)


extern char __LIB__ *utoa(uint16_t num,char *buf,int radix);
extern char __LIB__ __CALLEE__ *utoa_callee(uint16_t num,char *buf,int radix);
#define utoa(a,b,c) utoa_callee(a,b,c)



#ifndef _ALLOC_MALLOC_H

extern void __LIB__ *aligned_alloc(size_t alignment,size_t size);
extern void __LIB__ __CALLEE__ *aligned_alloc_callee(size_t alignment,size_t size);
#define aligned_alloc(a,b) aligned_alloc_callee(a,b)


extern void __LIB__ *calloc(size_t nmemb,size_t size);
extern void __LIB__ __CALLEE__ *calloc_callee(size_t nmemb,size_t size);
#define calloc(a,b) calloc_callee(a,b)


extern void __LIB__ __FASTCALL__ free(void *p);


extern void __LIB__ __FASTCALL__ *malloc(size_t size);


extern void __LIB__ *realloc(void *p,size_t size);
extern void __LIB__ __CALLEE__ *realloc_callee(void *p,size_t size);
#define realloc(a,b) realloc_callee(a,b)



extern void __LIB__ *aligned_alloc_unlocked(size_t alignment,size_t size);
extern void __LIB__ __CALLEE__ *aligned_alloc_unlocked_callee(size_t alignment,size_t size);
#define aligned_alloc_unlocked(a,b) aligned_alloc_unlocked_callee(a,b)


extern void __LIB__ *calloc_unlocked(size_t nmemb,size_t size);
extern void __LIB__ __CALLEE__ *calloc_unlocked_callee(size_t nmemb,size_t size);
#define calloc_unlocked(a,b) calloc_unlocked_callee(a,b)


extern void __LIB__ __FASTCALL__ free_unlocked(void *p);


extern void __LIB__ __FASTCALL__ *malloc_unlocked(size_t size);


extern void __LIB__ *realloc_unlocked(void *p,size_t size);
extern void __LIB__ __CALLEE__ *realloc_unlocked_callee(void *p,size_t size);
#define realloc_unlocked(a,b) realloc_unlocked_callee(a,b)



#endif

#ifdef __SDCC

extern long long __LIB__ __FASTCALL__ atoll(char *buf);


extern void __LIB__ _lldiv_(lldiv_t *ld,long long numer,long long denom);
extern void __LIB__ __CALLEE__ _lldiv__callee(lldiv_t *ld,long long numer,long long denom);
#define _lldiv_(a,b,c) _lldiv__callee(a,b,c)


extern void __LIB__ _lldivu_(lldivu_t *ld,unsigned long long numer,unsigned long long denom);
extern void __LIB__ __CALLEE__ _lldivu__callee(lldivu_t *ld,unsigned long long numer,unsigned long long denom);
#define _lldivu_(a,b,c) _lldivu__callee(a,b,c)



extern long long llabs(long long i);
extern long long llabs_callee(long long i) __z88dk_callee;
#define llabs(a) llabs_callee(a)
   
extern char __LIB__ *lltoa(long long num,char *buf,int radix);
extern char __LIB__ __CALLEE__ *lltoa_callee(long long num,char *buf,int radix);
#define lltoa(a,b,c) lltoa_callee(a,b,c)


extern long long __LIB__ strtoll(char *nptr,char **endptr,int base);
extern long long __LIB__ __CALLEE__ strtoll_callee(char *nptr,char **endptr,int base);
#define strtoll(a,b,c) strtoll_callee(a,b,c)


extern unsigned long long __LIB__ strtoull(char *nptr,char **endptr,int base);
extern unsigned long long __LIB__ __CALLEE__ strtoull_callee(char *nptr,char **endptr,int base);
#define strtoull(a,b,c) strtoull_callee(a,b,c)


extern char __LIB__ *ulltoa(unsigned long long num,char *buf,int radix);
extern char __LIB__ __CALLEE__ *ulltoa_callee(unsigned long long num,char *buf,int radix);
#define ulltoa(a,b,c) ulltoa_callee(a,b,c)



#endif

#endif
