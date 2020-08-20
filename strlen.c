/* This function is used to get string length*/
/* strlen */
#include "strlen.h"

int (strlen)(const char *s)
{
    const char *p = s; /* pointer to character constant */
    /* Loop over the data in s.  */
    while (*p != '\0')
        p++;
    return (int)(p - s);
}
