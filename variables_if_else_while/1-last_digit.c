#include <stdlib.h>
#include <time.h>
#include <time.h>
#include <stdio.h>
/**
 * main - The last digit
 * Return: Always 0
 */


int main(void)
{
	int n, r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	printf("Last digit of %d id %d and is ", n, r);
	if (n % 10 > 5)
		printf("greater than 5\n");
	else if (n % 10 == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
