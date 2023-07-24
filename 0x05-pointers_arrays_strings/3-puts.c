/**
 * _puts - function that prints a string.
 * @str: a pointer argument than can hold an address of character type.
 *
 * Return: 0
 */
#include "main.h"

void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
