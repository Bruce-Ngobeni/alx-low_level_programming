/**
 * main - a function that prints the number of arguments passed into it.
 * @argc: an argument that denotes the number of arguments given
 * during program execution.
 * @argv: is a pointer array pointing to each parameter passed to the program.
 *
 * Return: 0 always.
 */
#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
