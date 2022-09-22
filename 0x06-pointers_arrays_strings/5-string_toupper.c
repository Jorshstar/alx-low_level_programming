#include "main.h"
/**
 * string_toupper - A function that Changes any lowercase letters
 * I wanna keep on returning strings
 * @n: number of string to check
 * Return: 0
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 97 && n[i] <= 122)
			n[i] = n[i] - 32;
		else
			continue;
	}
	return (n);
}
