#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concats all arguments passed to a program
 * @ac: argument count
 * @av: argument array
 *
 * Return: NULL if ac = 0 or av is NULL, else return concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	int i, k, j = 0, len = 0;
	char *argts;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
			j++;
		len = len + j;
		j = 0;
	}
	len = len + ac; /* takes care of new line chars */

	argts = malloc(sizeof(char) * len);

	if (argts == NULL)
		return (NULL);

	i = 0;

	for (k = 0; k < len; k++)
	{
		if (av[i][j] != '\0')
		{
			argts[k] = av[i][j];
			j++;
		}
		else
		{
			argts[k] = '\n';
			i++;
			j = 0;
		}
	}

	return (argts);
}
