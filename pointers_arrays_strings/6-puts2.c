#include "main.h"
/**
 * puts2 - prints every other character
 * @str: variable
 */
void puts2(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}

