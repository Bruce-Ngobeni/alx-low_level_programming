#include "main.h"
/**
 *print_last_digit - a program that prints the last digit of a number.
 *Return: 0.
 *@c: is a parameter representing the input from the user
 */
int print_last_digit(int c)
{
	int num;
	
	num = c % 10;
	if (num < 0)
	{
		num = num * -1;
	}
	_putchar(48 + num);
	return (0);
}
