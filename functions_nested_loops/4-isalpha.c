#include "main.h"
/**
 *_isalpha - checks for lowercase and uppercase alphabet
 *@c: argumrnto
 *Return: return 1 if lowercase or uppercase and 0 if else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
