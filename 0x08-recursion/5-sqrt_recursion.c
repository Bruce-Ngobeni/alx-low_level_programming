/**
 * _sqrt_recursion_expansion - a function that return
 * the natural square root.
 * @num: a number from the other function, to finf the square root of.
 * @check: a number to use to check find the square root of num.
 * Return: -1 if num does not have a square rooot, otherwise
 * square root of num.
 */
int _sqrt_recursion_expansion(int num, int check)
{
	if (check * check > num)
	{
		return (-1);
	}
	if (check * check == num)
	{
		return (check);
	}
	return (_sqrt_recursion_expansion(num, check = check + 1));
}

/**
 * _sqrt_recursion - a function that returns a square root of a number.
 * @n: a number to return a natural square root of.
 *
 * Return: 0 if n is zero, otherwise return funcion
 * _sqrt_recursion_expansion(n, 0).
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt_recursion_expansion(n, 0));
}
