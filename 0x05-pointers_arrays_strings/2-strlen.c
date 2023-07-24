/**
 * _strlen - a function that returns the length of a string.
 * @s: argument to be checked, which is a pointer.
 *
 *Return: length.
 */

int _strlen(char *s)
{
	int i = 0;
	int length = 0;

	while (i < 1000)
	{
		if (s[i] == 0)
		{
			break;
		}
		i++;
		length = i;
	}
	return (length);
}
