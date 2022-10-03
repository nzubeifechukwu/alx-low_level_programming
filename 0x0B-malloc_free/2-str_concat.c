#include <stdlib.h>

/**
 * str_concat - concats two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated space memory that holds s1 & s2 concat
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int l1 = 0;
	int l2 = 0;
	char *s1_s2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else
	{
		while (*(s1 + l1))
			l1++;
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		while (*(s2 + l2))
			l2++;
	}
	s1_s2 = malloc(sizeof(char) * (l1 + l2) + 1);
	while (i < l1 + l2)
	{
		if (s1_s2 == NULL)
			return (NULL);
		if (s1[i] != '\0')
		{
			s1_s2[i] = s1[i];
			i++;
		}
		else
		{
			while (j < l2)
			{
				s1_s2[i] = s2[j];
				i++;
				j++;
			}
		}
	}
	return (s1_s2);
}
