#include "main.h"

/**
 * _puts - A function that prints a string followed by a new line
 * its getting easy bro
 * @str: parameter to print the string
 * Return: void
 */
void _puts(char *str)
{
	int tr;

	for (tr = 0; *(str + tr) != '\0'; tr++)
		_putchar(*(str + tr));
	_putchar('\n');
}
