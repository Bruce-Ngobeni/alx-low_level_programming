#include "main.h"
/**
 *jack_bauer - a program that prints every minute of the day.
 *Return: 0.
 */
void jack_bauer(void)
{
	int first = 0;
	int second = 0;
	int third = 0;
	int forth = 0;

	while (first < 3)
	{
		second = 0;
		while (second < 10)
		{
			if (first == 2 && second == 4)
			{
				break;
			}
			third = 0;
			while (third < 6)
			{
				forth = 0;
				while (forth < 10)
				{
					_putchar(48 + first);
					_putchar(48 + second);
					_putchar(':');
					_putchar(48 + third);
					_putchar(48 + forth);
					_putchar('\n');
					forth++;
				}
				third++;
			}
			second++;
		}
		first++;
	}
}
