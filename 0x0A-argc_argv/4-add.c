#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 if successful, 1 if at least one of the args contain symbols
 */
int main(int argc, char *argv[])
{
	unsigned int j;
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argc == 1)
		{
			puts("0");
			break;
		}

		for (j = 0; j < strlen(*(argv + i)); j++)
		{
			if (!isdigit(*(argv + i)[j]))
			{
				puts("Error");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
