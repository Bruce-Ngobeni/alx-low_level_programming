#include "main.h"
/**
 *more_numbers - function that print numbers from 0-14 x10.
 *Return: always 0.
 */

void more_numbers(void)
{
	int i = 0, j = 0;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(48 + j % 10);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
