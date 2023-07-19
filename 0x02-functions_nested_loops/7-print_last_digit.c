#include "main.h"
/**
 *print_last_digit - a program that prints the last digit of a number.
 *Return: 0.
 *@n: is a parameter representing the input from the user
 */
int print_last_digit(int n)
{
	int num;

num = n % 10;
	if (num < 0)
	{
		num = num * -1;
	}
	_putchar('0' + num);
	return (num);
}
