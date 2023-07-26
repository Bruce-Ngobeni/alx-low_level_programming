/**
 * _strncpy - a function that copies a string.
 * @dest: a pointer pointing where the string will be copied to.
 * @src: a pointer pointing the string to be copied.
 * @n: number of characters ti be copied.
 *
 * Return: a string pointed by dest pointer variable.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}

	return (dest);
}
