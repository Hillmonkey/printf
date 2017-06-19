#include "holberton.h"

/*
 *
 *
 **
op_t *create_ops(op_t *ops)
{
	op_t *ops
}
**/
/**
 * _printf - simple function duplicates printf functionality
 * @format: format string just like the standard printf
 *          ... followed by variable number of parameters ... just like printf!
 * Return: int representing number of printed characters
 **/

void _printf(const char *format, ...)
{
	params_t p;
	va_list valist;
	op_t *ops;

	ops = malloc(sizeof(op_t) * NUMBER_OF_OPS);
	*ops = {
		{"c", op_char},
		{"i", op_int},
		{"%", op_percent},
		/* {"f", op_float}, */
		/* {"s", op_string}, */
		{NULL, NULL}
	};
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
}
