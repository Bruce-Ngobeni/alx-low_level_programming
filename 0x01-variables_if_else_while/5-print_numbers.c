#include <stdio.h>
/**
 *main - A program that prints alphabets all positive numbers < 10.
 *Return: 0 (Success).
 */
int main(void)
{
	char num = 0;

	while (num < 10)
	{
		printf("%i", num);
		num++;
	}
	printf("\n");
	return (0);
}
