/**
 * _strcmp - compares two strings char by char
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Works the same way as the standard function strcmp
 * Return: 1 if s1 > s2, -1 if s1 < s2, 0 if they are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, x;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (i > j)
	{
		for (x = 0; x < j; x++)
		{
			if (s1[x] > s2[x])
				return (15);
			else if (s1[x] < s2[x])
				return (-15);
		}
	}
	else
	{
		for (x = 0; x < i; x++)
		{
			if (s1[x] > s2[x])
				return (15);
			else if (s1[x] < s2[x])
				return (-15);
		}
	}

	return (0);
}

