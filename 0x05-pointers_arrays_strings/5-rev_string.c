/**
 * rev_string - function that reverses a string.
 * @s: a pointer argument which can take an integer address.
 *
 * Return: nothing
 */

#include "main.h"
#include <stdio.h>

void rev_string(char *s)
{
	int num = 0, j = 0, i;
	char list[1000];

	while (s[num] != 0)
	{
		list[num] = s[num];
		num++;
	}
	i = num;
	while (j < num)
	{
		s[j] = list[i - 1];
		i--;
		j++;
	}
}
