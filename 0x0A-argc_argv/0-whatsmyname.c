/**
 * main - a function that prints its name.
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
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
