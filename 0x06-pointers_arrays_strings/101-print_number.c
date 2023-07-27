/**
 * print_number - a function that prints an integer.
 * @n: integer to print.
 *
 * Return: always 0.
 */
#include "main.h"

void print_number(int n)
{
	int a, b, c, d, e, f;

	a = n % 10, b = n / 10, c = b % 10, d = b / 10, e = d % 10, f = d / 10;
	if (n < 0 && n > -10)
	{
		_putchar(45), _putchar((a * -1) + 48);
	}
	else if (n < 0 && n <= -10 && n > -100)
	{
		_putchar(45), _putchar((b * -1) + 48), _putchar((a * -1) + 48);
	}
	else if (n < 0 && n <= -100 && n > -1000)
	{
		_putchar(45), _putchar((d * -1) + 48);
		_putchar(48 + (c * -1)), _putchar(48 + (a * -1));
	}
	else if (n < 10)
	{
		_putchar(48 + a);
	}
	else if (n >= 10 && n < 100)
	{
		_putchar(b + 48), _putchar(a + 48);
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar(48 + d), _putchar(48 + c), _putchar(48 + a);
	}
	else if (n >= 1000)
	{
		_putchar(48 + f), _putchar(48 + e), _putchar(48 + c), _putchar(48 + a);
	}
}
