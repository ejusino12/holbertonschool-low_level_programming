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
		return (1);
	}
	else
	{
		return (0);
	}
}
