/* This function is used to concatenate one string with part of another*/
/* strncat */
#include "strncat.h"

char *(strncat)(char *restrict s1, const char *restrict s2, int n)
{
    char *s = s1;
    /* Loop over the data in s1.  */
    while (*s != '\0')
        s++;
    /* s now points to s1's trailing null character, now copy
       up to n bytes from s2 into s stopping if a null character
       is encountered in s2.
       It is not safe to use strncpy here since it copies EXACTLY n
       characters, NULL padding if necessary.  */
    while (n != 0 && (*s = *s2++) != '\0')
    {
        n--;
        s++;
    }
    if (*s != '\0')
        *s = '\0';
    return s1;
}
