#include <stdio.h>

/**
 * main - A function that prints the name of the program
 * @argc: paramater for number of arguments passed to the function
 * @argv: paramater for argument vector of pointers to strings
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
		printf("%s\n", argv[0]);
		return (0);
}
