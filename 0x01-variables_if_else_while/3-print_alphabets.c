#include <stdio.h>

/**
 * main - prints the alphabets in lowercase, then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	char A, a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	for (A = 'A'; A <= 'Z'; A++)
		putchar(A);

	putchar('\n');

	return (0);
}

