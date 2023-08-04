/**
 * main - a function that prints all arguments it receives.
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
	int i;

	(void)argc;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
