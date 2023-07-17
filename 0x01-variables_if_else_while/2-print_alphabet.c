#include <stdio.h>
/**
 *main - A program that prints alphabets
 *Return: 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	int initial = 0;
	char line = '\n';

	while (initial < 26)
	{
		putchar(letter++);
		initial++;
	}
	putchar(line);

	return (0);
}
