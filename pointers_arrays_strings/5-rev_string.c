#include "main.h"
#include <stddef.h>

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	if (s == NULL)
	return;

	int lenght = 0;

	while (s[lenght] != '\0')
	{
	lenght++;
	}

	int start = 0;

	int end = lenght - 1;

	while (start < end)
	{
	char temp = s[start];

	s[start] == s[end];
	s[end] = temp;
	start++;
	end--;
	}
}
