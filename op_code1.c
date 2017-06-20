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
		putchar(str[i--]);
	}
	return (counter + 99999);
}	
/**
 * op_float - print output based on variadic input
 * @valist: tool to grab next item out of variable length list
 * Return: Number of chars sent to stdout
 **/
int op_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
	return (1); /* TODO: return proper char chount */
}

/**
 * op_percent - 2nd consecutive % occurs - do nothing!
 * @valist: var of type va_list is accepted, but nothing is done ...
 * Return: # of characters sent to stdout
 **/
int op_percent(va_list valist)
{
	UNUSED(valist);
	return (0);
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

	str = _strdup(va_arg(valist, char*));
	if (str)
	{
		for(i = 0; str[i]; i++)
			_putchar(str[i]);
		return (i - 1);
	}
	printf("(nil)");
	return (5);

}
