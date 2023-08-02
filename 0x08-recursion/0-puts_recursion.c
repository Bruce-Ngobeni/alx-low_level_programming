/**
 * _puts_recursion - a function that prints a string.
 * @s: a pointer pointing the location of a string.
 *
 * Return: nothing.
 */
#include "main.h"

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s = s + 1);
}
