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
			if (j == i)
			{
				_putchar('\\');
			}
			 _putchar(32);
			 j++;
		}
		_putchar(10);
		i++;
	}
	if (n <= 0)
	{
		_putchar(10);
	}
}
