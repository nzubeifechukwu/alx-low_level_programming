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
 * puts2 - prints every other character of a string,
 * beginning with the first one, followed by a new line
 * @str: string to print its every other character
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i = i + 2)
		_putchar(str[i]);

	_putchar('\n');
}

