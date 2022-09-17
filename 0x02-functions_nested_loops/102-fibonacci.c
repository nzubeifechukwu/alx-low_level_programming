#include <stdio.h>

/**
 * fibonacci - prints the first n Fibonacci numbers, starting with 1 and 2
 * @n: size of the Fibonnaci sequence. It should not exceed 50
 *
 * Return: void
 */
void fibonacci(int n)
{
	int i;
	long fib[51] = {1, 2};

	for (i = 2; i < n; i++)
		fib[i] = fib[i - 1] + fib[i - 2];
	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%li", fib[i]);
		else
			printf(", %li", fib[i]);
	}
	printf("\n");
}

/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	fibonacci(50);

	return (0);
}

