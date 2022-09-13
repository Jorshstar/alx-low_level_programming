#include "main.h"

/**
 * main - Just learning coding
 * Description: using the main function
 * this program prints _putchar
 * Return: 0
 *
 */

int main(void)
{
	char var[] = "_putchar";
	int i;


	int lenVar = sizeof(var) / sizeof(var[0]);
	for (i = 0; i < lenVar - 1; i++)
	{
		_putchar(var[i]);
	}
	_putchar('\n');
	return (0);
}
