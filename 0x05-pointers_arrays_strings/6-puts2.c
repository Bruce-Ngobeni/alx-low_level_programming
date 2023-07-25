/**
 * puts2 - function that prints every other character of a string
 * starting with the first character
 * @str: pointer argument, which can hold an address of characters.
 *
 * Return: nothing.
 */

#include "main.h"

void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i] != 0)
	{
		i++;
	}
	i -= 1;
	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
