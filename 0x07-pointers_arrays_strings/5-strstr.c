#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @needle: char pointer
 * @haystack: char pointer
 *
 * Return: s
 */

char *_strstr(char *haystack, char *needle)
{
	int count;

	for (; haystack[0]; haystack++)
		;
	{
		if (!(needle[count]))
			return (haystack);
	}
	return (0);
}

