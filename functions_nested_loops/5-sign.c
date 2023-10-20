#include "main.h"

/**
 * print_sign - print sign of the number
 * @n: argumento
 * Return: print + if greater than 0, - if its smaller and 0 if its 0
 */
int print_sign(int n)
	{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
	}
