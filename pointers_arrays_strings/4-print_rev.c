#include "main.h"
#include <unistd.h>

/**
 * print_rev - prints a string in reverse, followed by *s
 *@s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
	length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
	write(1, &s[i], 1);

	write(1, "\n", 1);
	}
}
