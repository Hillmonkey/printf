#include "holberton.h"

/**
 * init_params - initialize all elements of a param struct
 *
 **/
int init_params(params_t *params, const char *format, op_t **ops)
{
	params->dex = 0;
	params->counter = 0;
	_strdup(format, params->format);
	va_start(params->valist, params->format);
	
}
/**
 * choose_op - pick an op function and return it
 * @params: struct of parameters
 * @dex: index into format string
 **/
int choose_op(params_t *p)
{
	int j = 0;

	while (ops[j].f)
	{
		if (ops[j].op[0] == format[p->dex])
		{
			ops[j].f(p->valist);
			break;
		}
		j++;
	}
	(p->dex)++;
}
