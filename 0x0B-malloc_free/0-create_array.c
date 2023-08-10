/**
 * create_array - a functio that creates an array of chars, and
 * initiaializes it with a specific char.
 * @size: the size of the array.
 * @c: elements of an array.
 *
 * Return: Null if size if 0, pointer to the array or NULL if it fails.
 */
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *num;
	unsigned int i;

	num = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (num == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		num[i] = c;
	}
	return (num);
}
