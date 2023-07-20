#include "main.h"
/**
 *print_numbers - a functions that prints all positive numbers below 10.
 *Return: always 0.
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(48 + i);
		i++;
	}
	_putchar('\n');
}
