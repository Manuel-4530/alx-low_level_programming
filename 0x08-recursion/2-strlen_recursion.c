#include "main.h"


/**
 * _strlen_recursion - Entry
 * Description: Write a function that returns the length of a string.
 * @s: length of str
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
