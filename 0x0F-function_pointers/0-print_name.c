#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - this function prints a name
 * @name: This is the name to be printed, a char
 * @f: This is a pointer to a func
 * Return: Null Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
