#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)

{
	int i;
	int j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (j == 57 && i == 56)
				break;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
