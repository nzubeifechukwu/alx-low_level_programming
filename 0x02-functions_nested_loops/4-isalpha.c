/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);

	return (0);
}

