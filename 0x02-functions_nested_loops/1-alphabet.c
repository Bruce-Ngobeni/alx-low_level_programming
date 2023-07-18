#include "main.h"
/**
 * print_alphabet - A program that prints alphabets in lowercase.
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet = 'a';
	int num = 0;

	while (num < 26)
	{
		_putchar(alphabet++);
		num++;
	}
_putchar('\n');
}
