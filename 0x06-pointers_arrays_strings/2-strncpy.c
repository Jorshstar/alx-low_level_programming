#include "main.h"
/**
 * _strncpy - Function that copies a string
 * @dest: A string that give destination
 * @src: This is a string
 * @n: This tells the number of bytes
 * Return: To festination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
