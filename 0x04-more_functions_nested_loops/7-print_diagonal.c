#include "main.h"
/**
 *print_diagonal - function that draws a diagonal line.
 *@n: input parameter from the user.
 *Return: 0 Success.
 */
void print_diagonal(int n)
{
	int i = 0, j = 0;

	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
