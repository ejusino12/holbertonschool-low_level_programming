#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest.
 * @dest: The buffer to which the string is to be copied.
 * @src: The string to be copied.
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	if (dest == NULL || src == NULL)
	 {
	return NULL;
    }

char *dest_start = dest;

	while (*src != '\0');
	{
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';  // Append the null terminator

    return dest_start;
}
