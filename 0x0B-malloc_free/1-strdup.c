/**
 * _strdup - a function that returns a pointer to a newly allocated
 *space in memory, which contains a copy of the string given.
 * @str: a pointer pointing a location of a string.
 *
 * Return: Null if str is NULL, or a pointer to the duplicated string,
 * or NULL if insufficient memoris available.
 */
#include <stdlib.h>

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *pointer;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	pointer = malloc(sizeof(char) * i);
	if (pointer == NULL)
	{
		return (NULL);
	}
	while (j < i)
	{
		pointer[j] = str[j];
		j++;
	}
	return (pointer);
	free(pointer);
}
