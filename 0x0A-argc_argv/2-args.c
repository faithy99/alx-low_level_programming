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

	for (1 = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
