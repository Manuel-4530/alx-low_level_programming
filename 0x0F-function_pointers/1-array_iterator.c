#include "function_pointers.h"

/**
 * array_iterator - prints each element on new line
 * @array : array
 * @size: size of array to be printed
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
