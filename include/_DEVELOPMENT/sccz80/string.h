
// automatically generated by m4 from headers in proto subdir


#ifndef __STRING_H__
#define __STRING_H__

#include <stddef.h>

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef unsigned int  size_t;
#endif

#ifndef NULL
#define NULL            ((void*)(0))
#endif

extern int __LIB__ bcmp(const void *b1,const void *b2,size_t len) __smallc;
extern int __LIB__ __CALLEE__ bcmp_callee(const void *b1,const void *b2,size_t len) __smallc;
#define bcmp(a,b,c) bcmp_callee(a,b,c)


extern void __LIB__ bcopy(const void *src,void *dst,size_t len) __smallc;
extern void __LIB__ __CALLEE__ bcopy_callee(const void *src,void *dst,size_t len) __smallc;
#define bcopy(a,b,c) bcopy_callee(a,b,c)


extern void __LIB__ bzero(void *mem,size_t n) __smallc;
extern void __LIB__ __CALLEE__ bzero_callee(void *mem,size_t n) __smallc;
#define bzero(a,b) bzero_callee(a,b)


extern char __LIB__ *index(const char *s,int c) __smallc;
extern char __LIB__ __CALLEE__ *index_callee(const char *s,int c) __smallc;
#define index(a,b) index_callee(a,b)


extern char __LIB__ *rindex(const char *s,int c) __smallc;
extern char __LIB__ __CALLEE__ *rindex_callee(const char *s,int c) __smallc;
#define rindex(a,b) rindex_callee(a,b)


extern char __LIB__ *strset(char *s,int c) __smallc;
extern char __LIB__ __CALLEE__ *strset_callee(char *s,int c) __smallc;
#define strset(a,b) strset_callee(a,b)


extern char __LIB__ *strnset(char *s,int c,size_t n) __smallc;
extern char __LIB__ __CALLEE__ *strnset_callee(char *s,int c,size_t n) __smallc;
#define strnset(a,b,c) strnset_callee(a,b,c)


extern void __LIB__ *rawmemchr(const void *mem,int c) __smallc;
extern void __LIB__ __CALLEE__ *rawmemchr_callee(const void *mem,int c) __smallc;
#define rawmemchr(a,b) rawmemchr_callee(a,b)



extern char __LIB__ *_memlwr_(void *p,size_t n) __smallc;
extern char __LIB__ __CALLEE__ *_memlwr__callee(void *p,size_t n) __smallc;
#define _memlwr_(a,b) _memlwr__callee(a,b)


extern char __LIB__ *_memstrcpy_(void *p,const char *s,size_t n) __smallc;
extern char __LIB__ __CALLEE__ *_memstrcpy__callee(void *p,const char *s,size_t n) __smallc;
#define _memstrcpy_(a,b,c) _memstrcpy__callee(a,b,c)


extern char __LIB__ *_memupr_(void *p,size_t n) __smallc;
extern char __LIB__ __CALLEE__ *_memupr__callee(void *p,size_t n) __smallc;
#define _memupr_(a,b) _memupr__callee(a,b)


extern char __LIB__ __FASTCALL__ *_strrstrip_(char *s) __smallc;


extern int __LIB__ __FASTCALL__ ffs(int i) __smallc;


extern int __LIB__ __FASTCALL__ ffsl(long i) __smallc;


extern void __LIB__ *memccpy(void *dst,const void *src,int c,size_t n) __smallc;
extern void __LIB__ __CALLEE__ *memccpy_callee(void *dst,const void *src,int c,size_t n) __smallc;
#define memccpy(a,b,c,d) memccpy_callee(a,b,c,d)


extern void __LIB__ *memchr(const void *s,int c,size_t n) __smallc;
extern void __LIB__ __CALLEE__ *memchr_callee(const void *s,int c,size_t n) __smallc;
#define memchr(a,b,c) memchr_callee(a,b,c)


extern int __LIB__ memcmp(const void *s1,const void *s2,size_t n) __smallc;
extern int __LIB__ __CALLEE__ memcmp_callee(const void *s1,const void *s2,size_t n) __smallc;
#define memcmp(a,b,c) memcmp_callee(a,b,c)


extern void __LIB__ *memcpy(void *dst,const void *src,size_t n) __smallc;
extern void __LIB__ __CALLEE__ *memcpy_callee(void *dst,const void *src,size_t n) __smallc;
#define memcpy(a,b,c) memcpy_callee(a,b,c)


extern void __LIB__ *memmem(const void *haystack,size_t haystack_len,const void *needle,size_t needle_len) __smallc;
extern void __LIB__ __CALLEE__ *memmem_callee(const void *haystack,size_t haystack_len,const void *needle,size_t needle_len) __smallc;
#define memmem(a,b,c,d) memmem_callee(a,b,c,d)


extern void __LIB__ *memmove(void *dst,const void *src,size_t n) __smallc;
extern void __LIB__ __CALLEE__ *memmove_callee(void *dst,const void *src,size_t n) __smallc;
#define memmove(a,b,c) memmove_callee(a,b,c)


extern void __LIB__ *memrchr(const void *s,int c,size_t n) __smallc;
extern void __LIB__ __CALLEE__ *memrchr_callee(const void *s,int c,size_t n) __smallc;
#define memrchr(a,b,c) memrchr_callee(a,b,c)


extern void __LIB__ *memset(void *s,int c,size_t n) __smallc;
extern void __LIB__ __CALLEE__ *memset_callee(void *s,int c,size_t n) __smallc;
#define memset(a,b,c) memset_callee(a,b,c)


extern void __LIB__ *memswap(void *s1,void *s2,size_t n) __smallc;
extern void __LIB__ __CALLEE__ *memswap_callee(void *s1,void *s2,size_t n) __smallc;
#define memswap(a,b,c) memswap_callee(a,b,c)


extern char __LIB__ *stpcpy(char *dst,const char *src) __smallc;
extern char __LIB__ __CALLEE__ *stpcpy_callee(char *dst,const char *src) __smallc;
#define stpcpy(a,b) stpcpy_callee(a,b)


extern char __LIB__ *stpncpy(char *dst,const char *src,size_t n) __smallc;
extern char __LIB__ __CALLEE__ *stpncpy_callee(char *dst,const char *src,size_t n) __smallc;
#define stpncpy(a,b,c) stpncpy_callee(a,b,c)


extern int __LIB__ strcasecmp(const char *s1,const char *s2) __smallc;
extern int __LIB__ __CALLEE__ strcasecmp_callee(const char *s1,const char *s2) __smallc;
#define strcasecmp(a,b) strcasecmp_callee(a,b)


extern char __LIB__ *strcat(char *dst,const char *src) __smallc;
extern char __LIB__ __CALLEE__ *strcat_callee(char *dst,const char *src) __smallc;
#define strcat(a,b) strcat_callee(a,b)


extern char __LIB__ *strchr(const char *s,int c) __smallc;
extern char __LIB__ __CALLEE__ *strchr_callee(const char *s,int c) __smallc;
#define strchr(a,b) strchr_callee(a,b)


extern char __LIB__ *strchrnul(const char *s,int c) __smallc;
extern char __LIB__ __CALLEE__ *strchrnul_callee(const char *s,int c) __smallc;
#define strchrnul(a,b) strchrnul_callee(a,b)


extern int __LIB__ strcmp(const char *s1,const char *s2) __smallc;
extern int __LIB__ __CALLEE__ strcmp_callee(const char *s1,const char *s2) __smallc;
#define strcmp(a,b) strcmp_callee(a,b)


extern int __LIB__ strcoll(const char *s1,const char *s2) __smallc;
extern int __LIB__ __CALLEE__ strcoll_callee(const char *s1,const char *s2) __smallc;
#define strcoll(a,b) strcoll_callee(a,b)


extern char __LIB__ *strcpy(char *dst,const char *src) __smallc;
extern char __LIB__ __CALLEE__ *strcpy_callee(char *dst,const char *src) __smallc;
#define strcpy(a,b) strcpy_callee(a,b)


extern size_t __LIB__ strcspn(const char *s,const char *nspn) __smallc;
extern size_t __LIB__ __CALLEE__ strcspn_callee(const char *s,const char *nspn) __smallc;
#define strcspn(a,b) strcspn_callee(a,b)


extern char __LIB__ __FASTCALL__ *strdup(const char *s) __smallc;


extern char __LIB__ __FASTCALL__ *strerror(int errnum) __smallc;


extern int __LIB__ stricmp(const char *s1,const char *s2) __smallc;
extern int __LIB__ __CALLEE__ stricmp_callee(const char *s1,const char *s2) __smallc;
#define stricmp(a,b) stricmp_callee(a,b)


extern size_t __LIB__ strlcat(char *dst,const char *src,size_t n) __smallc;
extern size_t __LIB__ __CALLEE__ strlcat_callee(char *dst,const char *src,size_t n) __smallc;
#define strlcat(a,b,c) strlcat_callee(a,b,c)


extern size_t __LIB__ strlcpy(char *dst,const char *src,size_t n) __smallc;
extern size_t __LIB__ __CALLEE__ strlcpy_callee(char *dst,const char *src,size_t n) __smallc;
#define strlcpy(a,b,c) strlcpy_callee(a,b,c)


extern size_t __LIB__ __FASTCALL__ strlen(const char *s) __smallc;


extern char __LIB__ __FASTCALL__ *strlwr(char *s) __smallc;


extern int __LIB__ strncasecmp(const char *s1,const char *s2,size_t n) __smallc;
extern int __LIB__ __CALLEE__ strncasecmp_callee(const char *s1,const char *s2,size_t n) __smallc;
#define strncasecmp(a,b,c) strncasecmp_callee(a,b,c)


extern char __LIB__ *strncat(char *dst,const char *src,size_t n) __smallc;
extern char __LIB__ __CALLEE__ *strncat_callee(char *dst,const char *src,size_t n) __smallc;
#define strncat(a,b,c) strncat_callee(a,b,c)


extern char __LIB__ *strnchr(const char *s,size_t n,int c) __smallc;
extern char __LIB__ __CALLEE__ *strnchr_callee(const char *s,size_t n,int c) __smallc;
#define strnchr(a,b,c) strnchr_callee(a,b,c)


extern int __LIB__ strncmp(const char *s1,const char *s2,size_t n) __smallc;
extern int __LIB__ __CALLEE__ strncmp_callee(const char *s1,const char *s2,size_t n) __smallc;
#define strncmp(a,b,c) strncmp_callee(a,b,c)


extern char __LIB__ *strncpy(char *dst,const char *src,size_t n) __smallc;
extern char __LIB__ __CALLEE__ *strncpy_callee(char *dst,const char *src,size_t n) __smallc;
#define strncpy(a,b,c) strncpy_callee(a,b,c)


extern char __LIB__ *strndup(const char *s,size_t n) __smallc;
extern char __LIB__ __CALLEE__ *strndup_callee(const char *s,size_t n) __smallc;
#define strndup(a,b) strndup_callee(a,b)


extern int __LIB__ strnicmp(const char *s1,const char *s2,size_t n) __smallc;
extern int __LIB__ __CALLEE__ strnicmp_callee(const char *s1,const char *s2,size_t n) __smallc;
#define strnicmp(a,b,c) strnicmp_callee(a,b,c)


extern size_t __LIB__ strnlen(const char *s,size_t max_len) __smallc;
extern size_t __LIB__ __CALLEE__ strnlen_callee(const char *s,size_t max_len) __smallc;
#define strnlen(a,b) strnlen_callee(a,b)


extern char __LIB__ strpbrk(const char *s,const char *set) __smallc;
extern char __LIB__ __CALLEE__ strpbrk_callee(const char *s,const char *set) __smallc;
#define strpbrk(a,b) strpbrk_callee(a,b)


extern char __LIB__ *strrchr(const char *s,int c) __smallc;
extern char __LIB__ __CALLEE__ *strrchr_callee(const char *s,int c) __smallc;
#define strrchr(a,b) strrchr_callee(a,b)


extern size_t __LIB__ strrcspn(const char *s,const char *set) __smallc;
extern size_t __LIB__ __CALLEE__ strrcspn_callee(const char *s,const char *set) __smallc;
#define strrcspn(a,b) strrcspn_callee(a,b)


extern char __LIB__ __FASTCALL__ *strrev(char *s) __smallc;


extern size_t __LIB__ strrspn(const char *s,const char *set) __smallc;
extern size_t __LIB__ __CALLEE__ strrspn_callee(const char *s,const char *set) __smallc;
#define strrspn(a,b) strrspn_callee(a,b)


extern char __LIB__ __FASTCALL__ *strrstrip(char *s) __smallc;


extern char __LIB__ *strsep(char **s,const char *delim) __smallc;
extern char __LIB__ __CALLEE__ *strsep_callee(char **s,const char *delim) __smallc;
#define strsep(a,b) strsep_callee(a,b)


extern size_t __LIB__ strspn(const char *s,const char *pfx) __smallc;
extern size_t __LIB__ __CALLEE__ strspn_callee(const char *s,const char *pfx) __smallc;
#define strspn(a,b) strspn_callee(a,b)


extern char __LIB__ *strstr(const char *s,const char *subs) __smallc;
extern char __LIB__ __CALLEE__ *strstr_callee(const char *s,const char *subs) __smallc;
#define strstr(a,b) strstr_callee(a,b)


extern char __LIB__ __FASTCALL__ *strstrip(char *s) __smallc;


extern char __LIB__ *strtok(char *s,const char *delim) __smallc;
extern char __LIB__ __CALLEE__ *strtok_callee(char *s,const char *delim) __smallc;
#define strtok(a,b) strtok_callee(a,b)


extern char __LIB__ *strtok_r(char *s,const char *delim,char **last_s) __smallc;
extern char __LIB__ __CALLEE__ *strtok_r_callee(char *s,const char *delim,char **last_s) __smallc;
#define strtok_r(a,b,c) strtok_r_callee(a,b,c)


extern char __LIB__ __FASTCALL__ *strupr(char *s) __smallc;


extern size_t __LIB__ strxfrm(char *dst,const char *src,size_t n) __smallc;
extern size_t __LIB__ __CALLEE__ strxfrm_callee(char *dst,const char *src,size_t n) __smallc;
#define strxfrm(a,b,c) strxfrm_callee(a,b,c)



#ifdef __CLANG

   extern int ffsll(long long i);
   
#endif

#ifdef __SCCZ80

   #ifndef __DISABLE_BUILTIN

   #ifndef __DISABLE_BUILTIN_MEMSET
   #undef  memset
   #define memset(a,b,c)   __builtin_memset(a,b,c)
   extern void __LIB__    *__builtin_memset(void *dst, int c, size_t n) __smallc;
   #endif
   
   #ifndef __DISABLE_BUILTIN_MEMCPY
   #undef  memcpy
   #define memcpy(a,b,c)   __builtin_memcpy(a,b,c)
   extern void __LIB__    *__builtin_memcpy(void *dst, void *src,size_t n) __smallc;
   #endif
   
   #ifndef __DISABLE_BUILTIN_STRCPY
   #undef  strcpy
   #define strcpy(a,b)     __builtin_strcpy(a,b)
   extern char __LIB__    *__builtin_strcpy(char *dst, const char *src) __smallc;
   #endif
   
   #ifndef __DISABLE_BUILTIN_STRCHR
   #undef  strchr
   #define strchr(a,b)     __builtin_strchr(a,b)
   extern char __LIB__    *__builtin_strchr(const char *haystack, int needle) __smallc;
   #endif

   #endif

#endif

#ifdef __SDCC

   extern int ffsll(long long i) __preserves_regs(b,c);
   extern int ffsll_callee(long long i) __preserves_regs(b,c) __z88dk_callee;
   #define ffsll(a) ffsll_callee(a)

   #ifndef __DISABLE_BUILTIN

   #ifndef __DISABLE_BUILTIN_MEMCPY
   #undef  memcpy
   #define memcpy(dst, src, n)    __builtin_memcpy(dst, src, n)
   #endif
   
   #ifndef __DISABLE_BUILTIN_STRCPY
   #undef  strcpy
   #define strcpy(dst, src)       __builtin_strcpy(dst, src)
   #endif
   
   #ifndef __DISABLE_BUILTIN_STRNCPY
   #undef  strncpy
   #define strncpy(dst, src, n)   __builtin_strncpy(dst, src, n)
   #endif
   
   #ifndef __DISABLE_BUILTIN_STRCHR
   #undef  strchr
   #define strchr(s, c)           __builtin_strchr(s, c)
   #endif
   
   #ifndef __DISABLE_BUILTIN_MEMSET
   #undef  memset
   #define memset(dst, c, n)      __builtin_memset(dst, c, n)
   #endif

   #endif

#endif

#endif
