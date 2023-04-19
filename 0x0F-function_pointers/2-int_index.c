#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - search for integer
 * @array: array to be entered
 * @size: size of the array
 * @cmp: pointer
 *
 * Return: the index of array if success and -1 else
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
