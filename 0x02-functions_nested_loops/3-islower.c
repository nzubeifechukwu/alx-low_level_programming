/*#include <stdio.h>*/

/**
 * _islower - checks if a character is lowercase
 *
 * Return: 1 if character is lower, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}

