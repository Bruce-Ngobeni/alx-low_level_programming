/**
 * _strspn - a function that gets the length of a prefix substring.
 * @accept: a pointer pointing a location of a prefix substring.
 * @s: a pointer pointing to the location of the string.
 *
 * Return: the number of bytes in s which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int j = 0, i = 0, check = 0;

	while (accept[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (accept[i] == s[j])
			{
				if (check < j)
				{
					check = j;
				}
				break;
			}
			j++;
		}
		i++;
	}
	if (check > 0)
	{
		return (check + 1);
	}
	return (0);
}
