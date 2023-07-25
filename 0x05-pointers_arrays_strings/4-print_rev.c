/**
 * print_rev - function that prints a tring in reverse.
 * @s: a pointer argument which can only take adress of char type.
 *
 *Return: nothing.
 */
#include "main.h"

void print_rev(char *s)
{
	int length = 0;

	while (*s != 0)
	{
		length = length + 1;
		s++;
	}
	while (length >  0)
	{
		_putchar(*s);
		s--;
		length = length - 1;
	}
	_putchar('\n');
}
