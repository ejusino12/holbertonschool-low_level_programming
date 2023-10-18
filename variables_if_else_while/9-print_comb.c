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
	int i;
	for(i = 1; i < 10; i++)
	{
		putchar(',');
		putchar(' ');
		putchar(i + '0');
	}

	putchar('\n');
	return (0);
}
