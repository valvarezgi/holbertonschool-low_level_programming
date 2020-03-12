#include "3-calc.h"

/**
 * get_op_func - function that gets which function to point
 * @s: value to check
 * @
 *Return: pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{0, 0}
	};
	int i = 0;

	while (ops[i].op != 0)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (0);
}
