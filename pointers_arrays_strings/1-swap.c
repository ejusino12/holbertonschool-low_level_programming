#include "main.h"
#include <stdio.h>

/**
 *main - check the code
 *@a: value
 *@b: value
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
