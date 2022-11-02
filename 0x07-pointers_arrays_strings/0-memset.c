#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 *
 * @n: Unsigned int
 * @s: A pointer to the memory area to be filled
 * @b: Char
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;
		n -= 1;

	return (s);
}


