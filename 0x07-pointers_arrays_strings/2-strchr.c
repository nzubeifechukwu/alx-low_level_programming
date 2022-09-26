/**
 * _strchr - locates a char in a string
 * @s: string to search
 * @c: char to search for
 *
 * Return: pointer to 1st occurrence of c in s, NULL if c not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	return ('\0');
}

