#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - this is a  function prints all natural numbers from n to 98
 * @n: this is a sign that prints all natural numbers, its an integer
 * Return: 0
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
