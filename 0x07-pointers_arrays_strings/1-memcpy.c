#include "main.h"

/**
 * _strchr - The function find first occurence of a char in a string
 * @s: The function for  string to be searched
 * @c: The function for character to be found
 * Return: Pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\n'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
