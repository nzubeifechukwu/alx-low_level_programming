#include <stdio.h>
#define UNUSED(argv) (void)(argv)

/**
 * main - prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);

	printf("%d\n", argc - 1);
	return (0);
}
