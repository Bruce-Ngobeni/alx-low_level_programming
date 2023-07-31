/**
 * _strchr - function that locates a character in a string.
 * @c: a character to locate.
 * @s: a pointer pointing a string location.
 *
 * Return: a pointer to the first occurence of character c
 * in the string s or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *p;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			break;
		}
		i++;
	}
	if (s[i] == 0)
	{
		return (0);
	}
	else
	{
		p = &s[i];
		return (p);
	}
}
