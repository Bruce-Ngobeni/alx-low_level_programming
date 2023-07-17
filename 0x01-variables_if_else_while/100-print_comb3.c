#include <stdio.h>
/**
 *main - a program that print all posssible combination of two digits.
 *Return: 0 (Success).
 */
int main(void)
{
	int num1 = 0;
	int num2 = 1;
	int line = '\n';
	int space = ' ';
	int comma = ',';
		

	while (num1 <= 9)
	{
		while (num2 <= 9)
		{
			if (num1 < num2 || num1 == num2)
			{
				putchar(48 + num1);
				putchar(48 + num2);
				if (num1 == 8 && num2 == 9)
				{
					putchar(line);
				}
				else
				{
					putchar(comma);
					putchar(space);
				}
			}
			num2++;
		}
		num2 = 0;
		num1++;
	}
	return (0);
}
