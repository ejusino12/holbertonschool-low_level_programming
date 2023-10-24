#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *@s: returns the lenght of a script
 * Return: Always 0
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
	lenght++;
	s++;
	}
	return (0);
}
