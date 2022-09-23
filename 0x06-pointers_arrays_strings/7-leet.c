/**
 * leet - encodes a string into leet or 1337
 * @str: string to encode
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	char let[] = "aeotlAEOTL";
	char dig[] = "4307143071";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(str + i) == let[j])
				*(str + i) = dig[j];
		}
	}

	return (str);
}

