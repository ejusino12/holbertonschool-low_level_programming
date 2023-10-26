#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: prints the integer
 * Return: Always 0
 */

int _atoi(char *s)
{
int sign = 1;
int result = 0;
int found = 0;

while (*s)
{
if (*s == '-')
{
sign *= -1;
}
if (*s >= '0' && *s <= '9')
{
found = 1;
result = result * 10 + (*s - '0');
}
else if (found)
{
break;
}
s++;
}

return (result *sign);
}
