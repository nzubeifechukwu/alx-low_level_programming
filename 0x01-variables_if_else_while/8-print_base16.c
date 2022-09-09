#include <stdio.h>

/**
 * main - prints all base 16 numbers in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char i, j;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	for (j = 'a'; j <= 'f'; j++)
		putchar(j);

	putchar('\n');

	return (0);
}

