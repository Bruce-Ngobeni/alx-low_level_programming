/**
 * print_array - function that prints n elements of an array.
 * @a: a pointer argument representing an array.
 * @n: integer argument representing the numbers of elements to be printed.
 *
 * Return: nothing.
 */

#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int i = 0;

	if (n < 0)
	{
		n = (n * (-1));
	}
	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%i\n", a[i]);
			break;
		}
		printf("%i, ", a[i]);
		i++;
	}
}
