#include <stdio.h>
/**
 *main - A program that prints all single-digit numbers with comma and space.
 *Return: 0 (Success)
 */
int main(void)
{
	int num = 0;
	int comma = ',';
	int space = ' ';
	int line = '\n';

	while (num < 10)
	{
		putchar(48 + num);
		if (num != 9)
		{
			putchar(comma);
			putchar(space);
			num++;
		}
		else
		{
			break;
		}
	}

	putchar(line);
	return (0);
}
