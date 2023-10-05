#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * isAllDigits - Checks if a string contains only digits
 * @str: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int isAllDigits(char *str)
{
while (*str)
{
if (!isdigit(*str))
{
return (0);
}
str++;
{
return (1);
}
/**
 * multiply - Multiplies two positive numbers and prints the result
 * @num1: The first number as a string
 * @num2: The second number as a string
 */
void multiply(char *num1, char *num2)
{
int len1 = 0, len2 = 0, i, j;
int *result;
int carry = 0;
int startIndex;
if (!isAllDigits(num1) || !isAllDigits(num2))
{
printf("Error\n");
exit(98);
}
