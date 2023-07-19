#include <stdio.h>
#include "main.h"
/**
 *main - a program that sum all the multiples of 3 amd 5 below 1024.
 *Return: 0.
 */
int main(void)
{
	int num = 0, result = 0;

	while (num < 1024)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			result += num;
		}
		num++;
	}
	printf("%i\n", result);
}
