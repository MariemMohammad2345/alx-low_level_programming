#include "main.h"

/**
 * _Strch - Loctes a character in a string
 *
 * @s: the string to check
 *
 * @c: the character to find
 *
 * Return: pointer to @s or NULL
 *
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}

	return (0);
}
