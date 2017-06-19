#include "holberton.h"

/**
 * create_ops - creates dynamically allocated array of op_code structs
 * @ops: pointer to op codes
 * Return: pointer to array of opcodes, now populated
 **/
op_t *create_ops(op_t *ops)
{
	int i = 0, len = 0;
	op_t pre_ops[] = {
		{"c", op_char},
		{"i", op_int},
		{"d", op_int},
		{"%", op_percent},
		/* {"f", op_float}, */
		/* {"s", op_string}, */
		{NULL, NULL}
	};
	while (pre_ops[len].op)
		len++;
	ops = malloc(sizeof(op_t) * (len + 1));
	while (pre_ops[i].op)
	{
		ops[i].op = _strdup(pre_ops[i].op);
		ops[i].f = pre_ops[i].f;
		i++;
	}
	ops[i].op = NULL;
	ops[i].f = NULL;
	return (ops);
}

/**
 * _printf - simple function duplicates printf functionality
 * @format: format string just like the standard printf
 *          ... followed by variable number of parameters ... just like printf!
 * Return: int representing number of printed characters
 **/

int _printf(const char *format, ...)
{
	params_t p;
	va_list valist;
	op_t *ops;

	ops = create_ops(ops);
	va_start(valist, format); /* past this point, only use p->valist */
	init_params(&p, format, &ops, valist);
	while (p.format[p.dex])
	{
		if (p.format[p.dex] == '%')
		{
			choose_op(&p);
		}
		p.dex++;
	}
	printf("\n");
	va_end(valist);
	va_end(p.valist);
	return (666); /* should return number of printed chars */
}
