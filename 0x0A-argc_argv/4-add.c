/**
 * main - a program that adds positive numbers.
 * @argc: an argument that denotes the number of arguments given
 * during program execution.
 * @argv: is a pointer array pointing to each parameter passed to the program.
 *
 * Return: 0 always.
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int i = 1, n, sum = 0;

	while (i < argc)
	{
		n = 0;
		while (argv[i][n] != '\0')
		{
			if (!isdigit(argv[i][n]))
			{
				printf("Error\n");
				return (1);
			}
			n++;
		}
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%i\n", sum);
	return (0);
}
