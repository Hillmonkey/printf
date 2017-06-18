#include "holberton.h"
/**
 * _printf - simple function duplicates printf functionality
 * @format: format string just like the standard printf
 *          ... followed by variable number of parameters ... just like printf!
 * Return: int representing number of printed characters
 **/

void _printf(const char *format, ...)
{
	int i = 0, dex = 0, j;
	params_t *p;
	op_t ops[] = {
		{"c", op_char},
		{"i", op_int},
		{"%", op_percent},
		/* {"f", op_float}, */
		/* {"s", op_string}, */
		{NULL, NULL}
	};

	/* init params */
	init_params(p, format, &ops);
	while (p->format[p->dex])
	{
		if (p->format[p->dex] == '%')
		{
			/* check params function here ... */
			choose_op(p);
			/*
			j = 0;
			while (ops[j].f)
			{
				if (ops[j].op[0] == format[i])
				{
					printf("%s", sep);
					sep = ", ";
					ops[j].f(valist);
					break;
				}
				j++;
			}
			*/
		}
		p->dex++;
	}
	printf("\n");
}
