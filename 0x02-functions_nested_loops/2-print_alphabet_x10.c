#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char low;

	for (i = 0; i <= 9; i++)
	{
		for (low = 'a'; low <= 'z'; low++)
			_putchar(low);

		_putchar('\n');
	}
}

