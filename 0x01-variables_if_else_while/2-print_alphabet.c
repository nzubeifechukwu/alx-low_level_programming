#include <stdio.h>

/**
 * main - prints the lowercase letters of the alphabet on one line
 *
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	putchar('\n');

	return (0);
}

