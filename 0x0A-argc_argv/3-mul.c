#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 * @argc: Command line arguments counts
 * @argv: argument passed into the main as arrays of string
 * Return: 0 (Success), 1 (failure)
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
		j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}
