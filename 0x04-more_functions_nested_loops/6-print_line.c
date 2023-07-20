#include "main.h"
/**
 *print_line - function that draws a straight line based on input.
 *@n: input to be checked.
 *Return: 0 Success.
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
		{
			_putchar(95);
		}
		else
		{
			_putchar('\n');
			break;
		}
		i++;
	}
	_putchar('\n');
}
