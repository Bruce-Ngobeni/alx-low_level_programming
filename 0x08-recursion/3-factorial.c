/**
 * factorial - a function that returns the factorial of a number.
 * @n: a given factorial number.
 *
 * Return: -1 if n is negative, 1 if n is 0 or a factorial of a number
 * for any positive integer.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
