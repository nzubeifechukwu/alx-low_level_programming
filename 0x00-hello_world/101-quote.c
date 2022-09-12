#include <stdio.h>

/**
 * main - prints a string to stderr
 *
 * Write a C program that prints exactly the following:
 * and that piece of art is useful\" - Dora Korpar, 2015-10-19,
 * followed by a new line, to the standard error.
 * You are not allowed to use any functions listed in the NAME section of the
 * man (3) printf or man (3) puts. Your program should return 1. Your program
 * should compile without any warnings when using the -Wall gcc option
 *
 * Return: 1 (Error)
 */
int main(void)
{
	char err_mess[] = "and that piece of art is useful\" - Dora Korpar, \
2015-10-19\n";

	fwrite(err_mess, sizeof(err_mess), 1, stderr);

	return (1);
}

