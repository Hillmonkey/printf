#include "holberton.h"

/**
 * _strdup - make a copy of a string
 * @src: source string
 * Return: a string that is a copy of the source string
 **/

char *_strdup(char *src)
{
	char *str;
	char *p;
	int len = 0;

	while (src[len])
		len++;
	str = malloc(len + 1);
	if (!str)
		exit(EXIT_FAILURE);
	p = str;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str);
}
/**
 * init_params - initialize all elements of a param struct
 * @p: pointer to a list of parameters
 * @format: a format string that printf will work on
 * @ops: a group of pointers to operator structs
 * @valist: used for variadic function
 * Return: 0 = EXIT_SUCCESS
 **/
int init_params(params_t *p, const char *format, op_t **ops, va_list valist)
{
	UNUSED(format);
	UNUSED(ops);
	p->dex = 0;
	p->counter = 0;
	/* _strdup(format, p->format); */
	va_copy(p->valist, valist);
	/* va_start(p->valist, p->format); */
	return (0);
}
/**
 * choose_op - pick an op function and return it
 * @p: struct of parameters
 * Return: int 0 = EXIT_SUCCESS
 **/
int choose_op(params_t *p)
{
	int j = 0;

	printf("%s", p->ops[j].op);
	while (p->ops[j].f)
	{
		if (p->ops[j].op[0] == p->format[p->dex])
		{
			p->ops[j].f(p->valist);
			break;
		}
		j++;
	}
	(p->dex)++;
	return (0);
}
