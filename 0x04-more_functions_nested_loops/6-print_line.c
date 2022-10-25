#include "main.h"

/**
 * print_line - this draws a straight line using a character_.
 * @n: prints integer
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
