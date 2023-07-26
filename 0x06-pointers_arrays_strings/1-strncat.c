/**
 * _strncat - function that concatenate two strings.
 * @dest: a pointer which will hold the address of a string to copy to.
 * @src: a pointer which will hold the address of a string to be copied.
 * @n: number of characters to be prnted.
 * Return: a pointer pointing to the resulting dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p;
	int i = 0, j = 0, t = 0, m = 0;

	p = dest;
	while (p[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	if (n < j)
	{
		while (t < n)
		{
			p[i + t] = src[t];
			t++;
		}
		p[i + n] = '\0';
	}
	else
	{
		while (m <= j)
		{
			p[i + m] = src[m];
			m++;
		}
	}
	return (p);
}
