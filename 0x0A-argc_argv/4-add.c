#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: Command line argument count.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise.
 */
int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
