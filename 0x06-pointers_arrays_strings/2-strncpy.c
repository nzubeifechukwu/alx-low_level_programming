/**
 * _strncpy - copies n chars from a string to another
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of chars to copy
 *
 * Works exactly as the standard function strncpy
 * Return: pointer to copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j;

	while (src[i] != '\0')
		i++;

	for (j = 0; j < n; j++)
	{
		if (i < n && i <= j)
			dest[j] = '\0';
		else
			dest[j] = src[j];
	}

	return (dest);
}

