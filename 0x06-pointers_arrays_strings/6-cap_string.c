/**
 * cap_string - a function that capitalizes the first letters of words.
 * @dest: a pointer pointing the string to be capitalized.
 *
 * Return: dest.
 */

char *cap_string(char *dest)
{
	int i = 0;
	char t;

	while (dest[i] != '\0')
	{
		t = dest[i];
		if (t == 44 || t == 59 || t == 46 || (t >= 32 && t <= 34) || t == 10)
		{
			if (dest[i + 1] >= 97 && dest[i + 1] <= 122)
			{
				dest[i + 1] = dest[i + 1] - 32;
			}
		}
		else if (t == 63 || t == 41 || t == 42 || t == 123 || t == 125 || t == 9)
		{
			if (dest[i + 1] >= 97 && dest[i + 1] <= 122)
			{
				dest[i + 1] = dest[i + 1] - 32;
			}
		}
		i++;
	}
	return (dest);
}
