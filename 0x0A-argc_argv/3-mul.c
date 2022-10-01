#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that  Prints number of arguements
 * @argc: parameter for arguement count
 * @argv: parameter for array of pointers to CLI arguement
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
		printf("%d\n", (atoi(argv[argc - 1]) * atoi(argv[argc - 2])));
	return (0);
}
