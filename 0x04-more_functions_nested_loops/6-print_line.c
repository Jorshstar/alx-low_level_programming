#include <stdio.h>
#include "main.h"
/**
 * print_line - A function that prints a straight line in the terminal
 * @n: is an integer
 * Return: empty
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
