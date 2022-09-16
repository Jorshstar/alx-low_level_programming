#include "main.h"
/**
 * print_most_numbers - A function that prints the numbers from 0-9
 * we dont wannt print 2 and 4, they might get angry
 * Return: empty line
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
