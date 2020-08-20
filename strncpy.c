/* This function is used to copy part of a string*/
/* strncpy */
#include "strncpy.h"

char *(strncpy)(char *restrict s1, const char *restrict s2, int n)
 {
     char *dst = s1;
     const char *src = s2;
     /* Copy bytes, one at a time.  */
     while (n > 0) {
         n--;
         if ((*dst++ = *src++) == '\0') {
             /* If we get here, we found a null character at the end
                of s2, so use memset to put null bytes at the end of
                s1.  */
             memset(dst, '\0', n);
             break;
         }
     }
     return s1;
 }

