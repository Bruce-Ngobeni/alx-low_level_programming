/**
 * _strcmp - a function that compares two strings.
 * @s1: a string to compare.
 * @s2: a string to compare with.
 *
 *Return: 0 if s1 = s2, -15 if s1 != s2 and s1 < s2, otherwise, 15.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, m = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		if (s1[i] != s2[i])
		{
			m = s1[0] - s2[0];
			break;
		}
		m = 0;
		i--;
	}
	return (m);
}

