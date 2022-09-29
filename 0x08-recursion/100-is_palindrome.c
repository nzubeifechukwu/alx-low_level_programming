/**
 * slen - computes the length of a string
 * @s: string
 *
 * Return: string length
 */
int slen(char *s)
{
	if (*s)
		return (1 + slen(s + 1));
	return (0);
}

/**
 * check_pali - helper function to check if a string is a palindrome
 * @s: string
 * @stt: start index of string
 * @end: end index of string
 *
 * Return: 1 if string is palindrome, 0 otherwise
 */
int check_pali(char *s, int stt, int end)
{
	if (stt < end)
	{
		if (*(s + stt) == *(s + end))
			return (check_pali(s, stt + 1, end - 1));
		return (0);
	}
	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = slen(s);

	return (check_pali(s, 0, len - 1));
}
