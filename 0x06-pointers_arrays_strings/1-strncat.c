/**
 * _strncat - concats at most n chars from a string to another
 * @dest: first string
 * @src: second str to concat at most its n chars to dest
 * @n: highest num of chars to concat
 *
 * Return: updated value of dest after concat
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j] != '\0')
		j++;

	while (dest[i] != '\0')
		i++;

	if (j >= n)
	{
		for (j = 0; j < n; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}
	else
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}

	dest[i] = '\0';

	return (dest);
}

