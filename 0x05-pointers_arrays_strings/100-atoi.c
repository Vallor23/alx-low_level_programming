#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer representation of the string.
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1; /*Initialize the sign as positive*/
    int i = 0;
/*Skip leading spaces*/
    while (s[i] == ' ')
    {
        i++;
    }

    /*Handle sign*/
    if (s[i] == '-')
    {sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }

    /*Process digits*/
    while (s[i] >= '0' && s[i] <= '9')
    {
        int digit = s[i] - '0';
/*Check for overflow before adding the next digit*/
        if (result > (INT_MAX - digit) / 10)
        {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }

        result = result * 10 + digit;
        i++;
    }

    /* If no digits were found, return 0*/
    if (i == 0 || (s[i - 1] < '0' || s[i - 1] > '9'))
{
return 0;
}

    return result * sign;
}
