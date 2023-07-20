#include "main.h"
/**
 *print_square - a function that prints a square.
 *@size: input parameter representing input from a user.
 *Return: 0 (success).
 */

void print_square(int size)
{
	int i = 0, j = 0;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
