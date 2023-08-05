/**
 * main - a function that multiplies two numbers.
 * @argc: an argument that denotes the number of arguments given
 * during program execution.
 * @argv: is a pointer array pointing to each parameter passed to the program.
 *
 * Return: 0 always.
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int i, mul = 1;

	(void)argc;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%i\n", mul);
	return (0);
}
