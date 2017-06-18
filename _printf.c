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
	params_t p;
	op_t ops[] = {
		{"c", op_char},
		{"i", op_int},
		{"%", op_percent},
		/* {"f", op_float}, */
		/* {"s", op_string}, */
		{NULL, NULL}
	};

	va_start valist; /* past this point, only use p->valist */
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
