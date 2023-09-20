#include "main.h"
#include <stdio.h>

/* Prototype for _putchar */
char *leet(char *str) {
    char *ptr = str;

    while (*ptr)
    {
char replacement = *ptr;
        if ((*ptr == 'a' || *ptr == 'A') && (replacement = '4')) ;
        else if ((*ptr == 'e' || *ptr == 'E') && (replacement = '3')) ;
        else if ((*ptr == 'o' || *ptr == 'O') && (replacement = '0')) ;
        else if ((*ptr == 't' || *ptr == 'T') && (replacement = '7')) ;
        else if ((*ptr == 'l' || *ptr == 'L') && (replacement = '1')) ;

        putchar(replacement);
        ptr++;
    }

    return str;
}
