#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putstr - writes string to stdout
 * @s: String to print
 * Return: number of chars printed
**/
int _putstr(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
		_putchar(s[len]);
	return (len);
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
	/* TODO: extra copy of format will need to be freed */
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
	int i = 0;
	int counter = 0;
	char no_specifier = TRUE;

	while (p->ops[i].f)
	{
		if (p->ops[i].op[0] == p->format[p->dex])
		{
			no_specifier = FALSE;
			counter = p->ops[i].f(valist);
			break;
		}
		i++;
	}
	if (no_specifier)
	{
		putchar('%');
		putchar(p->format[p->dex]);
		counter = 2;
	}
	(p->dex)++;
	return (counter);
}
