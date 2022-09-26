#include "main.h"

/**
 * _strchr - This finds the first occurence of a char in a string
 * @s: paramater for string
 * @c: paramater for character
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\n'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
