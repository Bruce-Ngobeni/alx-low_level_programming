#include <stdio.h>
/**
 *main - A program that prints alphabets in reverse
 *Return: 0 (Success)
 */
int main(void)
{
	int num = 26;
	char alphabet = 'z';
	char line = '\n';

	while (num > 0)
	{
		putchar(alphabet--);
		num--;
	}
	putchar(line);
	return (0);
}
