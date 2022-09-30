#include <stdio.h>

/**
 * main - prints its own name
 * @argc: command line arguments count
 * @argv: array of command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
