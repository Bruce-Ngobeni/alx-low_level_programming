#include "main.h"
/**
 *print_triangle - function that prints a triangle.
 *@size: input parameter to be used in the function.
 *Return: 0 success.
 */
void print_triangle(int size)
{
	int i = 1, j = 1;
	int n = size;

	while (i <= size)
	{
		j = 0;
		n = size;
		while (j < size)
		{
			if (n > i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
			n--;
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size == 0)
	{
		_putchar('\n');
	}
}
