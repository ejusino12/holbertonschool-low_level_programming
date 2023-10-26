#include <stdio.h>

/**
 * puts2 - prints every other character of a string starting with the first
 * @str: The string whose characters are to be printed.
 */
void puts2(char str)
{
	int i = 0;
	if (str = NULL)
	return;


	while (*(str + i) != '\0')
	{
	printf("%c", str[i]);
	i += 2;
	}
	printf("\n");
}
