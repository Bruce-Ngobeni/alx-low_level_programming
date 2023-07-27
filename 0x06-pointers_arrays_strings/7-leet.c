/**
 * leet - a function that encodes a string into 1337.
 * @dest: a string to encode.
 *
 * Return: dest.
 */

char *leet(char *dest)
{
	char arr[11] = "aeotlAEOTL";
	char arr2[11] = "4307143071";
	int i = 0, j;

	while (arr[i] != '\0')
	{
		j = 0;
		while (dest[j] != '\0')
		{
			if (dest[j] == arr[i])
			{
				dest[j] = arr2[i];
			}
			j++;
		}
		i++;
	}
	return (dest);
}
