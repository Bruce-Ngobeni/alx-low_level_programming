/**
 * string_toupper - a function that changes lowercase to uppercase letters.
 * @n: a pointer pointing the string to be checked.
 *
 * Return: n.
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] = n[i] - 32;
		}
		i++;
	}
	return (n);
}
