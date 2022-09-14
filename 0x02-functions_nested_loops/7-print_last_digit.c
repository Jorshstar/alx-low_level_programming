#include "main.h"
/**
 * print_last_digit - last digit of a number
 * @n: this is what we use forbthe argument of the function
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last *= -1;
	_putchar(last + '0');

	return (last);
}
