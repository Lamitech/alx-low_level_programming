#include "3-calc.h"

/**
 * get_op_func - gets operators
 * @s: param
 * Return: int
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
	int i;

	for (i = 0; i < 10; i++)
	{
		if (s[0] == ops->op[i])
			break;
	}
	return (ops[i / 2].f);
}
