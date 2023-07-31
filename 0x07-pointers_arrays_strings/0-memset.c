/**
 * _memset - function that fills memory with a constant byte.
 *@s: a pointer holding a memory address to the area that will be filled.
 * @b: an argument which will hold the constant byte.
 * @n: number of bytes.
 * Return: pointer to the memory area of s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	while (m < n)
	{
		s[m] = b;
		m++;
	}
	return (s);
}
