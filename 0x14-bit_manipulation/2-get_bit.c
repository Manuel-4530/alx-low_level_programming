#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Number to get the bit from
 * @index: The index of the bit
 *
 * Return: The value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bits;

	if (index > 63)
		return (-1);

	bits = (n >> index) & 1;

	return (bits);
}
