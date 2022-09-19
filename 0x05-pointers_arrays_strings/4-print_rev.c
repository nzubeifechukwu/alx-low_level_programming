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
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}

