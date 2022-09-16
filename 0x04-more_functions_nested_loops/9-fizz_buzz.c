#include <stdio.h>

/**
 * main - prints 1-100, replacing multiples of 3, 5, and 3 and 5 with Fizz,
 * Buzz and FizzBuzz
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
		{
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}

	putchar('\n');

	return (0);
}

