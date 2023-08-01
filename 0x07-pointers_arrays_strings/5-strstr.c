/**
 * _strstr - a function that locates a substring.
 * @haystack: string.
 * @needle: substring.
 *
 * Return: a pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;
	int i = 0, j = 0, num = 50;

	while (needle[i] != '\0')
	{
		j = 0;
		while (haystack[j] != '\0')
		{
			if (needle[i] == haystack[j] && needle[i + 1] == haystack[j + 1])
			{
				if (num > j)
				{
					num = j;
				}
			}
			j++;
		}
		i++;
	}
	if (num < 50)
	{
		p = &haystack[num];
		return (p);
	}
	return (0);
}
