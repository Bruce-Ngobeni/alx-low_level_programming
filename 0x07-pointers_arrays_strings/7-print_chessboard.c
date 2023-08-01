/**
 * print_chessboard - a function that prints the chessboard.
 * @a: a pointer pointing the array to print.
 *
 * Return: nothing.
 */
#include "main.h"

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
