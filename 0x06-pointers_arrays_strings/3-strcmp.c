/**
 * _strcmp - a function that compares two strings.
 * @s1: a string to compare.
 * @s2: a string to compare with.
 *
 *Return: 0 if s1 = s2, -15 if s1 != s2 and s1 < s2, otherwise, 15.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, check1 = 0, check2 = 0, m = 0, n = 0;

	while (s1[1] != '\0')
	{
		check1 = check1 + s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		check2 = check2 + s2[j];
		j++;
	}
	if (i == j)
	{
		while (n <= j)
		{
			if ((s1[n] != s2[n]) && (check1 > check2))
			{
				m = 15;
				break;
			}
			m = 0;
			n++;
		}
	}
	else if (i > j && check1 > check2)
	{
		m = 15;
	}
	else
	{
		m = -15;
	}
	return (m);
}
