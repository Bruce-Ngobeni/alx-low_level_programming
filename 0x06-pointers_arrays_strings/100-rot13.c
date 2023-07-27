/**
 * rot13 - a function that encodes a string using rot13.
 * @dest: a pointer pointing a string to encode.
 *
 * Return: dest.
 */
char *rot13(char *dest)
{
	int i = 0, j = 0;
	char num1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char num2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (dest[i] != '\0')
	{
		j = 0;
		while (num1[j] != '\0')
		{
			if (dest[i] == num1[j])
			{
				dest[i] = num2[j];
			}
			j++;
		}
		i++;
	}
	return (dest);
}
