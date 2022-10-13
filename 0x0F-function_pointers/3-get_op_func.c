#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function for the required operation
 * @s: operator
 *
 * Return: func 2 perform required operation, NULL if none of 5 operators given
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}

	return (ops[i].f);
}
