#include <stdio.h>

/**
 * main - A wtatements  that differentiate blacks and whites
 * coding is the best
 *
 *if statements showing the && function
 * return (0)
 */

int main(void)
{
	int blacks;
	int whites;

	printf("Hey babe! input the number of blacks: ");
	scanf("%d", &blacks);
	printf("Hey babe! input the number of whites: ");
	scanf("%d", &whites);

	if (blacks <= 50 && whites <= 50)
	{
		printf("blacks and whites are equal");
	}
	else if (blacks <= 50 && whites >= 60)
	{
		printf("whitess are more than blacks");
	}
	else if (blacks >= 60 && whites <= 50)
	{
		printf("blacks are more than whites");
	}
	else
	{
		printf("white and black are equal");
	}
	return (0);
}



