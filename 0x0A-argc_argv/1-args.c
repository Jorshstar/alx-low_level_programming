#include <stdio.h>

/**
 * main - A program that prints its name
 * @argc: paramater for number of arguments passed to the function
 * @argv: paramater for argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
		printf("%d\n", argc - 1);
			return (0);
}
