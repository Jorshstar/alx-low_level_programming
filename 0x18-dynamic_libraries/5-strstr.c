#include "main.h"

/**
 * _strstr - function finds the first occurence of the substring
 * @haystack: paramater for pointer to char
 * @needle: paramater for pointer to char
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
