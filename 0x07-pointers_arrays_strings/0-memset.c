/**
 * _memset - fills first n bytes of memory with a constant byte
 * @s: memory area to fill
 * @b: constant byte
 * @n: how many bytes of memory to fill
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}

