/**
 * string_toupper - changes all lowercase letters of a string to upper case
 * @str: given string
 *
 * Return: string with lowercase chars changed to uppercase
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			/* 32 is the difference between any lowercase and its uppercase char */
			*(str + i) = *(str + i) - 32;
		}
		else
		{
			*(str + i) = *(str + i);
		}
	}

	return (str);
}

