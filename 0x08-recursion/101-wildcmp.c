#include "main.h"

/**
 * wildcmp - Entry point.
 * @s4: string 4.
 * @s5: string 5. It can contains a * as a special character.
 * Return: 1 if are identical, 0 if not.
 */
int wildcmp(char *s4, char *s5)
{
	if (*s5 == '*' && *(s5 + 1) != '\0' && *s4 == '\0')
		return (0);
	if (*s4 == '\0' && *s5 == '\0')
		return (1);
	if (*s4 == *s5)
		return (wildcmp(s5 + 1, s5 + 1));
	if (*s4 == '*')
		return (wildcmp(s4, s5 + 1) || wildcmp(s4 + 1, s5));
	return (0);
}
