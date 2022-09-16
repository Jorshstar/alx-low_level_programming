#include "main.h"
/**
 * print_numbers - A function that prints the numbers from 0 to 9
 * we keep on printing
 * Return: empty line
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}
