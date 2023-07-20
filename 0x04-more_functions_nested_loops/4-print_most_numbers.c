#include "main.h"
/**
 *print_most_numbers - print numbers from 0-9, ecluding 2 && 4.
 *Return: always 0.
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		_putchar(48 + i);
		i++;
	}
	_putchar('\n');
}
