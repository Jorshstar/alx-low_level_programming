#include "main.h"
/**
 * _strcmp - This  Compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0, count2 = 0;

	while (count == 0)
	{
		if (*(s1 + count2) == '\0' && *(s2 + count2) == '\0')
			break;
		count = *(s1 + count2) - *(s2 + count2);
		count2++;
	}
	return (count);
}
