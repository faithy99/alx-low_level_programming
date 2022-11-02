#include "main.h"

/**
 *_memset - fills memory with a constant byte.
 * @n: The number of bytes to be filled
 * @s: A pointer to the memory area to be filled
 * @b: The character for the memory area to be filled
 *
 * Return: A pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;
		n -= 1;

	return (s);
}


