#include <stdlib.h>
#include <time.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Alphabet game
 * Return: Always 0
 */


int main(void)
{
	int letter;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
