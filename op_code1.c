#include "holberton.h"

/**
 * op_char - print output based on variadic input
 * @valist: tool to grab next item out of variable length list
 * Return: Number chars sent to stdout (should be 1)
 **/
int op_char(va_list valist)
{
	_putchar(va_arg(valist, int));
	return (1);
}

/**
 * op_int - print output based on variadic input
 * @valist: tool to grab next item out of variable length list
 * Return: Number of chars sent to stdout
 **/
int op_int(va_list valist)
{
	int num, counter = 0, i = 0;
	char isNegative = FALSE;
	char str[98];

	num = va_arg(valist, int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		isNegative = TRUE;
		num = -num;
	}
	while (num != 0)
	{
		str[i++] = (num % 10) + '0';
		num = num / 10;
	}
	if (isNegative)
		str[i] = '-';
	while (i >= 0)
	{
		counter++;
		_putchar(str[i--]);
	}
	/* fflush(stdout); */
	return (counter);
}
/**
 * op_float - print output based on variadic input
 * @valist: tool to grab next item out of variable length list
 * Return: Number of chars sent to stdout
 **/
int op_float(va_list valist)
{
	UNUSED(valist);
	/* printf("%f", va_arg(valist, double)); */
	fflush(stdout);
	return (0); /* TODO: return proper char chount */
}

/**
 * op_percent - 2nd consecutive % occurs - do nothing!
 * @valist: var of type va_list is accepted, but nothing is done ...
 * Return: # of characters sent to stdout
 **/
int op_percent(va_list valist)
{
	_putchar(va_arg(valist, int));
	return (1);
}

/**
 * op_string - print output based on variadic input
 * @valist: tool to grab next item out of variable length list
 * Return: # of chars sent to stdout
 **/
int op_string(va_list valist)
{
	char *str;
	int i;
	char *nil = "(nil)";

	write(1, &nil, 5);
	str = _strdup(va_arg(valist, char*));
	if (str)
	{
		for (i = 0; str[i]; i++)
			_putchar(str[i]);
		return (i - 1);
	}
	write(1, &nil, 5);
	return (5);

}
