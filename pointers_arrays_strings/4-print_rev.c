#include "main.h"
#include <unistd.h>

/**
 * print_rev - prints a string in reverse, followed by 
 *@s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int length = 0;
	while (s[length] != '\0');
	{
	length++;
	}

	for (int i = length - 1; i >= 0; i--)
	{
	write(1, &s[i], 1);

	write(1, "\n", 1);
}
int main(void)
{
	char *string = "Hello, world!";
	print_rev(*string);
	return 0;
}

