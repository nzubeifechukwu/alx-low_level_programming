#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	/* if (s[0] == *s) */
	/*	len++; */

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}

/**
 * puts_half - prints the second half of a string
 * @str: string to print its second half
 *
 * Return: void
 */
void puts_half(char *str)
{
	int half, i;

	if (_strlen(str) % 2 == 1)
	{
		half = (_strlen(str) - 1) / 2;

		for (i = half + 1; i < _strlen(str); i++)
			_putchar(str[i]);
	}
	else
	{
		half = _strlen(str) / 2;

		for (i = half; i < _strlen(str); i++)
			_putchar(str[i]);
	}

	_putchar('\n');
}
