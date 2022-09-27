#include "main.h"

/**
 * set_string - A func that sets the value of a pointer to a char
 * @s: paramater for source adress
 * @to: paramater for target adress
 * Return: no return:
 */
void set_string(char **s, char *to)
{
	*s = to;
}
