#include <stdio.h>
#include "main.h"
/**
 *main -  program that prints the numbers from 1 to 100.
 *Return: 0 success.
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i == 100)
		{
			break;
		}
		printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
