/**
 * print_rev - function that prints a tring in reverse.
 * @s: a pointer argument which can only take adress of char type.
 *
 *Return: nothing.
 */
#include "main.h"

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
