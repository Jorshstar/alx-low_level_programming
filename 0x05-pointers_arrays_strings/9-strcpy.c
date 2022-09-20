#include <string.h>
#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: paramater for the destination string
 * @src: paramater for the string to be copied
 * Return:   char with string copied (dest)
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
