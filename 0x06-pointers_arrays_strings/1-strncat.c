#include "main.h"
/**
 * _strncat -  a function that concatenates two strings
 * @dest: Return a pointer to the resulting string
 * @src: strings to be used
 * @n: n bytes
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlen = 0;
	int counter = 0;

	while (dest[counter] != '\0')
	{
		destlen++;
		counter++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destlen + i] = src[i];
	dest[destlen + i] = '\0';

	return (dest);
}
