#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (ch = 0; ch <= 9; ch++)
	{
		for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
		_putchar('\n')
	}
}
