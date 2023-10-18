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
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
