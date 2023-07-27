/**
 * reverse_array - a function that reverse  the content of an array.
 * @a: array to reverse.
 * @n: number of elements of the array.
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int *c = a, b[20];
	int i = 0, j;

	n -= 1, j = n;
	while (n >= 0)
	{
		b[n] = a[n];
		n--;
	}
	while (j >= 0)
	{
		c[i] = b[j];
		i++;
		j--;
	}
}
