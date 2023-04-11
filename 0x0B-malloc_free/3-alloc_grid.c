#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer
 * @width: columns
 * @height: rows
 *
 * Return: Double Pointer
 */
int **alloc_grid(int width, int height)
{
	int **man;
	int x;
	int y;

	if (width <= 0 || height <= 0)
		return (NULL);
	man = malloc(sizeof(int *) * height);
	if (man == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		man[x] = malloc(sizeof(int) * width);
		if (man[x] == NULL)
		{
			for (; x >= 0; x--)
				free(man[x]);
			free(man);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			man[x][y] = 0;
	}
	return (man);
}
