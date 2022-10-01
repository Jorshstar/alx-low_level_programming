main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	//The value of b is now stored in variable a
	*a = *b;
	//Swap the value of a to b
	*b = temp;
