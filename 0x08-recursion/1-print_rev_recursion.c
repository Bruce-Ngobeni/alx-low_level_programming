/**
 * _print_rev_recursion - a functin that prints a string in reverse.
 * @s: a pointer pointing a location of a string.
 *
 * Return: nothing.
 */
#include "main.h"

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s = s + 1;
	_print_rev_recursion(s);
	s = s - 1;
	_putchar(*s);
}
