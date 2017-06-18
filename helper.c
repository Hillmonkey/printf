#include "holberton.h"

/**
 * _strdup - make a copy of a string
 * @src: source string
 * @dest: destination string
 **/
char *_strdup(char *src, char *dest)
{
	char *tmp;

	tmp = dest;
	while (*dest++ = *src++)
		;
	return(tmp);
} 

/**
 * init_params - initialize all elements of a param struct
 *
 **/
int init_params(params_t *p, const char *format, op_t *ops[], va_list valist)
{
	p->dex = 0;
	p->counter = 0;
	/* _strdup(format, p->format); */
	va_copy(p->valist, valist);
	va_start(p->valist, p->format);
	
}
/**
 * choose_op - pick an op function and return it
 * @p: struct of parameters
 * Return: int (success?)
 **/
int choose_op(params_t *p)
{
	int j = 0;

	printf("%s", p->ops[j].op);
	while (p->(ops[j].f))
	{
		if (p->ops[j].op[0] == p->format[p->dex])
		{
			p->ops[j].f(p->valist);
			break;
		}
		j++;
	}
	(p->dex)++;
}
