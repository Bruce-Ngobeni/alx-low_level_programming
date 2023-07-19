#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - aprogram that prints all numbers form n to 98.
 *Return: 0.
 *@n: is the parameter representing user input.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%i", n);
				break;
			}
			else
			{
				printf("%i, ", n);
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%i", n);
				break;
			}
			else
			{
				printf("%i, ", n);
			}
			n--;
		}
	}
	printf("\n");
}
