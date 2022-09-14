#include <stdio.h>
/**
 * * main - C is 1 of the hardest, its 4 and am still coding
 * description: using the main function, this program prints
 * the sum of the even values of a fibonacci
 * Return: 0
 */
int main(void)
{
	int i = 1, j = 2, total = 0;
	int k;
	while (j < 4000000)
	{
		if (j % 2 == 0)
			total += j;
		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", total);
i	return (0);
}
