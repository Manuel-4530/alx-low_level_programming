#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list param_list;
	unsigned int x, sum;

	sum = 0;

	va_start(param_list, n);

	for (x = 0; x < n; x++)
		sum += va_arg(param_list, int);
	va_end(param_list);
	return (sum);
}
