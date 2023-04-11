#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated
*space in memory, which contains a copy of the
*string given as a parameter.
*@str:String to be copied
*
*Return: NULL in case of error, pointer to allocated
*space
*/
char *_strdup(char *str)
{
	int l, i;
	char *s;

	if (str == NULL)
		return (0);

	l = 0;
	while (*(str + l))
		l++;

	s = malloc(sizeof(char) * l + 1);

	if (s == 0)
		return (0);

	for (i = 0; i <= l; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}
