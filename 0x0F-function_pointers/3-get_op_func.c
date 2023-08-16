# include <stdlib.h>
# include "3-calc.h"

/**
 * get_op_func - funtion to select operation asked by the user
 * @s: operation thet user needs
 *
 * Return: pointer to the function askedb by the user
 *		otherwise NULL
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
while ((ops[i].op != NULL) && *(ops[i].op) != *s)
{
i++;
}
return (ops[i].f);
}
