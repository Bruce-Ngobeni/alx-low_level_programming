/**
 * puts_half - function that prints half of a string
 * @str: a pointer argument which can hold an adress of an char type.
 *
 * Return: nothing
 */
#include "main.h"

void puts_half(char *str)
{
	int i = 0, n, m;

	while (str[i] != '\0')
	{
		i++;
	}
	if ((i % 2) != 0)
	{
		n = (i - 1) / 2;
		m = i - n;
		while (m < i)
		{
			_putchar(str[m]);
			m++;
		}
	}
	else
	{
		n = i / 2;
		while (n < i)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
