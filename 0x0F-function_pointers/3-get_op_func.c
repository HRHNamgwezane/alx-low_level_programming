#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects correct fucntion to perform
 * operation asked by user
 * @s: operator passed as argument
 *
 * Return: pointer to function corresponding
 * to operator given as parameter
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
	}
	return (NULL);
}
