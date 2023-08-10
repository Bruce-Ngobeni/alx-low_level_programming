/**
 * str_concat - a function that concatenate two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: a pointer pointing an allocated space in memory
 * containing a concatenated string, or NULL on failure.
 */

#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, m, n;
	char *pointer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	pointer = malloc(sizeof(char) * (i + j) + 1);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (m = 0; m <= i; m++)
	{
		pointer[m] = s1[m];
		if (m == i)
		{
			for (n = 0; n < (i + j); n++)
			{
				pointer[i + n] = s2[n];
			}
		}
	}
	return (pointer);
	free(pointer);
}
