#include <stdio.h>
/**
 * main - Its not easy as a beginner but i have the growth mindset
 * Description: using the main function, this program prints
 * the first 50 Fibonacci numbers, starting and followed by a line
 * Return: 0
 */
int main(void)
{
	long int n1 = 1, result, n2 = 2, nLast = 50;
	int i;

	printf("%lu, %lu, ", n1, n2);
	for (i = 2; i < nLast; i++)
	{
		result = n1 + n2;
		n1 = n2;
		n2 = result;
		printf("%lu", result);
		if (i != nLast - 1)
			printf(", ");
	}
	printf("\n");
	return (0);
}
