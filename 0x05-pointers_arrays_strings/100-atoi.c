#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: integers in a string
 */

int _atoi(char *s)
{
	int num, len, numcount, mult, p, neg;

	len = 0;
	p = 0;
	numcount = 0;
	mult = 1;
	neg = 1;
	num = 0;

	while (s[len] != '\0')
	{
		if (s[len] >= '0' && s[len] <= '9')
		{
			numcount++;
			if (!(s[len + 1] >= '0' && s[len + 1] <= '9'))
				break;
		}
		len++;
	}
	for (; numcount > 1; numcount--)
		mult *= 10;
	for (; p <= len; p++)
	{
		if (s[p] == '-')
			neg *= -1;
		else if (s[p] <= '9' && s[p] >= '0')
		{
			num += (s[p] - '0') * mult * neg;
			mult /= 10;
		}
	}
	return (num);
}
