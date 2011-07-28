/* C:\src\secure-endpoints\heimdal\include\..\out\dest_AMD64\inc\krb5-types.h -- this file was generated for FROGSLEAP by
                                                                                 $Id$ */

#ifndef __C__src_secure_endpoints_heimdal_include____out_dest_AMD64_inc_krb5_types_h__
#define __C__src_secure_endpoints_heimdal_include____out_dest_AMD64_inc_krb5_types_h__

#include <sys/types.h>
#include <winsock2.h>
#include <ws2tcpip.h>

/* For compatibility with various type definitions */
#ifndef __BIT_TYPES_DEFINED__
#define __BIT_TYPES_DEFINED__

typedef signed char int8_t;		/*  8 bits */
typedef short int16_t;			/* 16 bits */
typedef int int32_t;			/* 32 bits */
typedef long long int64_t;		/* 64 bits */
typedef unsigned char uint8_t;		/*  8 bits */
typedef unsigned short uint16_t;	/* 16 bits */
typedef unsigned int uint32_t;		/* 32 bits */
typedef unsigned long long uint64_t;	/* 64 bits */
typedef uint8_t u_int8_t;
typedef uint16_t u_int16_t;
typedef uint32_t u_int32_t;
typedef uint64_t u_int64_t;

#endif /* __BIT_TYPES_DEFINED__ */


typedef socklen_t krb5_socklen_t;
typedef int krb5_ssize_t;

typedef SOCKET krb5_socket_t;

#ifndef HEIMDAL_DEPRECATED
#if defined(__GNUC__) && ((__GNUC__ > 3) || ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 1 )))
#define HEIMDAL_DEPRECATED __attribute__((deprecated))
#elif defined(_MSC_VER) && (_MSC_VER>1200)
#define HEIMDAL_DEPRECATED __declspec(deprecated)
#else
#define HEIMDAL_DEPRECATED
#endif
#endif
#ifndef HEIMDAL_PRINTF_ATTRIBUTE
#if defined(__GNUC__) && ((__GNUC__ > 3) || ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 1 )))
#define HEIMDAL_PRINTF_ATTRIBUTE(x) __attribute__((format x))
#else
#define HEIMDAL_PRINTF_ATTRIBUTE(x)
#endif
#endif
#ifndef HEIMDAL_NORETURN_ATTRIBUTE
#if defined(__GNUC__) && ((__GNUC__ > 3) || ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 1 )))
#define HEIMDAL_NORETURN_ATTRIBUTE __attribute__((noreturn))
#else
#define HEIMDAL_NORETURN_ATTRIBUTE
#endif
#endif
#ifndef HEIMDAL_UNUSED_ATTRIBUTE
#if defined(__GNUC__) && ((__GNUC__ > 3) || ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 1 )))
#define HEIMDAL_UNUSED_ATTRIBUTE __attribute__((unused))
#else
#define HEIMDAL_UNUSED_ATTRIBUTE
#endif
#endif
#endif /* __C__src_secure_endpoints_heimdal_include____out_dest_AMD64_inc_krb5_types_h__ */
