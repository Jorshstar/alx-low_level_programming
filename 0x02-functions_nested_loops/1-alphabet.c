#include "main.h"
/**
 * print_alphabet - this is a function to print alphabets
 * desription: Prints alphabets in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
