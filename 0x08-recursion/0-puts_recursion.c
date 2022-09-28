#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;

	if (*s == '\0')
		_putchar('\n');
	else
		_puts_recursion(s);
}
