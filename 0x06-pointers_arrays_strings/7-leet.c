/**
 * leet - encodes a string into leet or 1337
 * @str: string to encode
 *
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * You can only use one if in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	char low[] = "aeotl";
	char up[] = "AEOTL";
	char dig[] = "43071";

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; *(low + j) != '\0'; j++)
		{
			if (*(str + i) == *(low + j) || *(str + i) == *(up + j))
				*(str + i) = *(dig + j);
		}
	}

	return (str);
}

