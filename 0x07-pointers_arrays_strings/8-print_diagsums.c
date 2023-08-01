/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: a pointer pointing the location of the square matrix.
 * @size: is the size of the inside array.
 *
 * Return: nothing.
 */

#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, add1 = 0, add2 = 0;

	j = size - 1;
	while (i < size)
	{
		add1 += a[i * size + i];
		add2 += a[j * size + (size - j - 1)];
		j--;
		i++;
	}
	printf("%i, %i\n", add1, add2);
}
