#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int q, p;

	for (q = 0; q < 8; q++)
	{
		for (p = 0; p < 8; p++)
			_putchar(a[q][p]);
		_putchar('\n');
	}
}
