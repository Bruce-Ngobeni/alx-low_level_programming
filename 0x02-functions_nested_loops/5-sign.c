#include "main.h"
/**
 *print_sign - a program that prints the sign of a number.
 *Return: 1.
 *@n: input parameter that represents an input from the user
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
