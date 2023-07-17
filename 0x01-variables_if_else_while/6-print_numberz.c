#include <stdio.h>
/**
 *main - A program that prins all positive numbers < 10.
 *Return: 0 (Success)
 */
int main(void)
{
	int num = 0;
	int line = '\n';

	while (num < 10)
	{
		putchar(48 + num);
		num++;
	}
	putchar(line);
	return (0);
}
