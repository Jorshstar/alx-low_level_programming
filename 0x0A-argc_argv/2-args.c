#include <stdio.h>

/**
 * main - A program that prints all arguments it receives
 * @argc: paramater for argument count
 * @argv: paramater for argument vector (arguments)
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
