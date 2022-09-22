/**
 * cap_string - capitalizes all words of a string
 * @str: string
 *
 * Separators of words: space, tabulation, new line, ',', ';', '.', '!', '?',
 * '"', '(', ')', '{' and '}'
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (i == 0 && *(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) = *(str + i) - 32;
		}

		while (*(str + i) == ' ' || *(str + i) == '\t' || *(str + i) == '\n'
|| *(str + i) == ',' || *(str + i) == ';' || *(str + i) == '.' ||
*(str + i) == '!' || *(str + i) == '?' || *(str + i) == '"' || *(str + i)
== '(' || *(str + i) == ')' || *(str + i) == '{' || *(str + i) == '}')
		{
			i++;

			if (*(str + i) >= 'a' && *(str + i) <= 'z')
				*(str + i) = *(str + i) - 32;
		}
	}

	return (str);
}

