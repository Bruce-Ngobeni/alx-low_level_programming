/**
 * _length - a function that returns the length of a string.
 * @s: a pointer pointing the location of a string.
 *
 * Return: length of a string.
 */
int _length(char *s)
{
	int i = 1;

	if (*s == '\0')
	{
		return (i - 1);
	}
	return (i + _length(s = s + 1));
}

/**
 * is_palindrome_expansion - a function that determines
 * whether or not a string is a palindrome.
 * @string: a string to check.
 * @len1: length from the begining of a string.
 * @len2: the actual length of the string.
 *
 * Return: 1 if a string is a palindrome, else 0.
 */
int is_palindrome_expansion(char *string, int len1, int len2)
{
	if (len1 >= len2)
	{
		return (1);
	}
	if (string[len1] == string[len2])
	{
		return (is_palindrome_expansion(string, len1 = len1 + 1, len2 = len2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - a function which call functions to determine if a string
 * is a palindrome or not.
 * @s: a pointer pointing a location of a string.
 *
 * Return: 1 if length of a string is 0 or 1, else, call a function.
 */
int is_palindrome(char *s)
{
	int length = _length(s);

	if (length == 0 || length == 1)
	{
		return (1);
	}
	return (is_palindrome_expansion(s, 0, length - 1));
}
