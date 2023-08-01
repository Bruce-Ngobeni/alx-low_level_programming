/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: a pointer pointing to the location of a string.
 * @accept: a pointer pointing to a string to locate.
 *
 * Return: a pointer to the byte in s that matches p=one if the bytes in
 * accept, or NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0, check = 50;
	char *p;

	while (accept[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (accept[i] == s[j])
			{
				if (check > j)
				{
					check = j;
				}
			}
			j++;
		}
		i++;
	}
	if (check < 50)
	{
		p = &s[check];
		return (p);
	}
	return (0);
}
