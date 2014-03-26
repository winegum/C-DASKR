#ifndef DDASKR_TYPES
#define DDASKR_TYPES

/* Table of types */
typedef enum { _FALSE_, _TRUE_ } _boolean;

typedef double real_number;

#if defined(__alpha__) || defined(__sparc64__) || defined(__x86_64__) || defined(__ia64__)
typedef int integer;
typedef unsigned int uinteger;
#else
typedef long int integer;
typedef unsigned long int uinteger;
#endif

#endif
