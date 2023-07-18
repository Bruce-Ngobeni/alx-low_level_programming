#include "main.h"
/**
 *print_alphabet_x10 - a program that print alphabets x10.
 *Return: always 0.
 */
void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int i = 0;
	int j = 0;

	while (j < 10)
	{
		i = 0;
		alphabet = 'a';
		while (i < 26)
		{
			_putchar(alphabet++);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
