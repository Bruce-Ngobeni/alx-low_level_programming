/**
 * _memcpy - a function that copies memory are.
 * @dest: a pointer pointing to the location where n bytes will be copied to.
 * @src: a pointer pointing the location of bytes to be copied.
 * @n: number of bytes to be copied.
 *
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
