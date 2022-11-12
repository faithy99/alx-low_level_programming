#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: number command-line arguments
 * @argv: an array of strings containing the command-line arguments
 * Return: returns 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		while (i < argc)
		{

		printf("%s\n", argv[i]);

		i++;
		}
	}
	return (0);
}
