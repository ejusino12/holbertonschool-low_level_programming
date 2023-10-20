#include "main.h"
/**
 *_islower - checks for lowercase character
 *@c: argumrnto
 *Return: return 1 if lowercase and 0 if else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
		_putchar('\n');
		return (1);
	}
	else
	{
	_putchar('0');
	_putchar('\n');
		return (0);
	}
}
