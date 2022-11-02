#include "main.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @src: From
 * @dest: To
 * @n: Copies unsigned int
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; index++)
	{
		dest[index] = src[index];
		n -= 1;
	}
	return (dest);
}

