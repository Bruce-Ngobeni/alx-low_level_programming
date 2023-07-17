#include <stdio.h>
/**
 *main - A program that prints alphabets
 *Return: 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char capital_letter = 'A';
	int i = 0;
	int j = 0;
	char line = '\n';

	while (i < 26)
	{
		putchar(letter++);
		i++;
	}
	while (j < 26)
	{
		putchar(capital_letter++);
		j++;
	}
	putchar(line);

	return (0);
}
