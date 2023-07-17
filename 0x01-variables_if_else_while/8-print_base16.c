#include <stdio.h>
/**
 *main - A program that prints all the numbers of bse 16.
 *Return: 0 (Success)
 */
int main(void)
{
	char alpha = 'a';
	int num1 = 0;
	int num2 = 6;
	char line = '\n';

	while (num1 < 10)
	{
		putchar(48 + num1);
		num1++;
	}
	while (num2 > 0)
	{
		putchar(alpha++);
		num2--;
	}
	putchar(line);
	return (0);
}
