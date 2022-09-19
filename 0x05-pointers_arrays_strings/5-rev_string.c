#include <string.h>
#include "main.h"

/**
 * rev_string - A function that reverse a string
 * @str: parameter for string to be reversed
 */
void rev_string(char *str)
{
	int i = strlen(str) - 1, j = 0;
	char tmp;

	while (i > j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i--;
		j++;
	}
}
