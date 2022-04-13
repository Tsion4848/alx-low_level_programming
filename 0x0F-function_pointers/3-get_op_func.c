#include "3-calc.h"
/**
 * get_op_func - selects the correct function
 * @s - the operator
 *
 * Return: pointer to the corresponding function
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

	if (ops != NULL && get_op_func != NULL)
	{
		while (s != '\0')
		{
			return (get_op_func(ops[i][0]));
		}
	}
	return (NULL);
}
