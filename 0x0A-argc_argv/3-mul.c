#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers.
 * @argc: the numbers of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 * Return: return 0 (success) else return 1
 * If the program does not receive two arguments
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
