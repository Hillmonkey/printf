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
		{"s", op_string},
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
 * free_ops - free the array of op structs
 * @ops: null terminated array of ops
 * Return: int, success code
 **/

int free_ops(op_t *ops)
{
	UNUSED(ops);
	return (0);
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
	va_start(valist, format);
	init_params(&p, format, &ops);

	while (p.format[p.dex])
	{
		if (p.format[p.dex] == '%' && p.format[p.dex + 1])
		{
			p.dex++;
			p.counter += choose_op(&p, valist);
			/* printf("AA->%d\n", p.counter); */
		}
		else
		{
			_putchar(p.format[p.dex]);
			p.counter++;
			p.dex++;
		}
	}
	va_end(valist);
	return (p.counter); /* should return number of printed chars */
}
