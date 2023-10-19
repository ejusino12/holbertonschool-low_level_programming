#include "main.h"
/**
 * print_alphabet - print 10 times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int i,j;

	for (i = 0; i < 10; i++){
	for (j = 'a'; j <= 'z'; j++){
		_putchar('a' + j);
	}
	_putchar('\n');
	}
}
int main(void) {
	print_alphabet_x10();
	return 0;
}
