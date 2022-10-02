#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0; 1 if args to program is not 1
 */
int main(int argc, char *argv[])
{
	int coins = 0;
	int cents, rem;

	if (argc == 2)
	{
		cents = atoi(*(argv + 1));
	}
	else
	{
		puts("Error");
		return (1);
	}

	coins = cents / 25;
	rem = cents % 25;
	if (rem != 0)
	{
		coins = coins + rem / 10;
		rem = rem % 10;
		if (rem != 0)
		{
			coins = coins + rem / 5;
			rem = rem % 5;
			if (rem != 0)
			{
				coins = coins + rem / 2;
				rem = rem % 2;
				if (rem != 0)
					coins = coins + rem;
			}
		}
	}

	printf("%d\n", coins);
	return (0);
}
