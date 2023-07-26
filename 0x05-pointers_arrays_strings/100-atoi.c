/**
 * _atoi - a function that convert a string to an integer.
 * @s: a pointer pointing to the string to be converted to an integer.
 * Return: 1 success.
 */

#include "main.h"

int _atoi(char *s)
{
	int i = 0, j = 0, integer = 0;

	while (s[i] != 48)
	{
		if (s[i] == 45)
		{
			j = j + 1;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			integer = integer + (s[i] - 48);
			integer = integer * 10;
		}
		i++;
	}
	integer = integer / 10;
	if ((j % 2) != 0)
	{
		integer = integer * (-1);
	}
	return (integer);
}
