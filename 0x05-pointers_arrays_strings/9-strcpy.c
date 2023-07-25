/**
 * _strcpy - function that copies a string.
 * @dest: a pointer to copy the string to.
 * @src: a pointer holding an address of where the string in memory.
 * Return: the pointer to dest.
 */
#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char *n =  dest;

	while (src[i] != '\0')
	{
		n[i] = src[i];
		i++;
	}
	n[i] = '\0';

	return (n);
}
