#include <stdio.h>
/**
 * main - print if the number is positive, zero, or  negative
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 *
 *
 */
int main(void)
{
	int i, o, u;

	for (i = '0'; i <= '9'; i++)
	{
		for (o = i + 1; o <= '9'; o++)
		{
			for (u = o + 1; u <= '9'; u++)
			{
				if ((o != i) && (u != o))
				{
					putchar(i);
					putchar(o);
					putchar(u);
					if (i == '7' && o == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
