/**
 * print_rev - function that prints a tring in reverse.
 * @s: a pointer argument which can only take adress of char type.
 *
 *Return: nothing.
 */
#include "main.h"

void print_rev(char *s)
{
	int i = 1;
	int length = 0;

	while (i < 1000)
	{
		if ((*(s + i)) == '\0')
		{
			break;
		}
		i++;
		length = i;
	}
	while (length >= 0)
	{
		_putchar(*(s + length));
		length--;
	}
	_putchar('\n');
}
