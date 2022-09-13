#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number whose last digit is be printed
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = -1 * last;

	_putchar('0' + last);

	return (last);
}

