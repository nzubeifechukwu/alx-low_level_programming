#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calls the get_op function
 * @argc: program argument count
 * @argv: program arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		puts("Error");
		exit(99);
	}

	if ((op[0] == '/' || op[0] == '%') && num2 == 0)
	{
		puts("Error");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
