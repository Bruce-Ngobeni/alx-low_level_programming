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
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
