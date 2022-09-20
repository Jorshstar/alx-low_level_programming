#include <stdio.h>
#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * getting tougher 1ce more
 * @str: paramater for a string
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}

/**
 * _strlen - returns the length of a string
 * @s: parameter for a  string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
