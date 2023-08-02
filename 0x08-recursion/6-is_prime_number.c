/**
 * is_prime_number - a function that check if a number is a prime number.
 * @n: a number to check.
 *
 * Return: 1 if n is a prime number, otherwise, 0.
 */

int is_prime_number(int n)
{
	if (n == 2 || n == 3 || n == 5)
	{
		return (1);
	}
	if (n < 0 || n == 1 || n % 5 == 0)
	{
		return (0);
	}
	if (n % 2 != 0 && n % 3 != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
