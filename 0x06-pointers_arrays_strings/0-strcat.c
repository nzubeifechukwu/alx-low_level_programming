/**
 * _strcat - concatenate one string to another
 * @dest: string to concat to
 * @src: string being concated to dest
 *
 * Return: updated value of dest after concat
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

