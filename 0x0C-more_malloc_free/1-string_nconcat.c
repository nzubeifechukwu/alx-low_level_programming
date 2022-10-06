#include <stdlib.h>

/**
 * string_nconcat - concats two strings
 * @s1: one string
 * @s2: another string
 *
 * Return: pointer to the mem space of concat string, NULL if mem alloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j, l1 = 0, l2 = 0;
	char *sconc;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[l1])
		l1++;

	while (s2[l2])
		l2++;

	if (n < l2)
		l2 = n;

	sconc = malloc(sizeof(*sconc) * (l1 + l2) + 1);

	if (sconc == NULL)
		return (NULL);

	for (j = 0; j < l1; j++)
		sconc[j] = s1[j];

	for (j = l1; j < l1 + l2; j++)
	{
		sconc[j] = s2[i];
		i++;
	}

	return (sconc);
}
