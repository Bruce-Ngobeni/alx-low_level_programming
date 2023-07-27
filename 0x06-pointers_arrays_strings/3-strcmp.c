/**
 * _strcmp - a function that compares two strings.
 * @s1: a string to compare.
 * @s2: a string to compare with.
 *
 *Return: 0 if s1 = s2, -15 if s1 != s2 and s1 < s2, otherwise, 15.
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 != s2)
	{
		return (s1[0] - s2[0]);
	}
	else
	{
		return (0);
	}
}

