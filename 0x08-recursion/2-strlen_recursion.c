/**
 * _strlen_recursion - a function that returns the string length.
 * @s: pointer pointing the location of a string.
 *
 * Return: length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s = s + 1));
}
