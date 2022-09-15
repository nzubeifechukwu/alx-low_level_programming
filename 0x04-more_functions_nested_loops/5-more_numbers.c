#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int k = 0;
	char n[] = "01234567891011121314";

	for (i = 0; i <= 9; i++)
	{
		while (n[k] != '\0')
		{
			_putchar(n[k]);
			k++;
		}
		k = 0;
		_putchar('\n');
	}
}

