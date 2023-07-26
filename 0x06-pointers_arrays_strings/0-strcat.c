/**
 * _strcat - functio that concatenates two strings.
 * @src: a pointer representing a string to be copied.
 * @dest: a pointer representing the final string after concatenation.
 *
 * Return: a pointer to the resulting string.
 */
#include "main.h"

char *_strcat(char *dest, char *src)
{
	char *p;
	int i = 0, j = 0, n = 0;

	p = dest;
	while (p[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		p[i + n] = src[j];
		n++;
		j++;
	}
	p[i + j] = '\0';
	return (p);
}
