#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *q = needle;

		while (*k == *q && *q != '\0')
		{
			k++;
			q++;
		}

		if (*q == '\0')
			return (haystack);
	}

	return (0);
}
