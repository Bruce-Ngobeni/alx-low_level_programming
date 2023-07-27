/**
 * _strcmp - a function that compares two strings.
 * @s1: a string to compare.
 * @s2: a string to compare with.
 *
 *Return: 0 if s1 = s2, -15 if s1 != s2 and s1 < s2, otherwise, 15.
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while (s1[n] != '\0' && s2[n] != '\0')
	{
		if (s1[n] != s2[n])
		{
			return (s1[n] - s2[n]);
		}
		n++;
	}
	return (0);
}

