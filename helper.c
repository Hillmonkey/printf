#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
			return (write(1, &c, 1));
}

/**
 * _strdup - make a copy of a string
 * @src: source string
 * Return: a string that is a copy of the source string
 **/

char *_strdup(const char *src)
{
	char *str, *tmp;
	char *p;
	int len = 0;

	if (!src)
		return (NULL);
	while (src[len])
		len++;
	str = malloc(len + 1);
	if (!str)
		exit(EXIT_FAILURE);
	p = tmp = str;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (tmp);
}
/**
 * init_params - initialize all elements of a param struct
 * @p: pointer to a list of parameters
 * @format: a format string that printf will work on
 * @ops: a group of pointers to operator structs
 * Return: 0 = EXIT_SUCCESS
 **/
int init_params(params_t *p, const char *format, op_t **ops)
{
	p->ops = *ops;
	p->dex = 0;
	p->counter = 0;
	p->format = _strdup(format);
	return (0);
}
/**
 * choose_op - pick an op function and return it
 * @p: struct of parameters
 * @valist: pointer into variadic list
 * Return: int 0 = EXIT_SUCCESS
 **/
int choose_op(params_t *p, va_list valist)
{
	int j = 0;
	int counter = 0;

	while (p->ops[j].f)
	{
		if (p->ops[j].op[0] == p->format[p->dex])
		{
			counter = p->ops[j].f(valist);
			/*printf("\ncounter = %d\n", counter); */
			break;
		}
		j++;
	}
	(p->dex)++;
	return (counter);
}
