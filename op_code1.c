#include "holberton.h"

/**
 * op_char - print output based on variadic input
 * @valist: tool to grab next item out of variable length list
 * Return: Number chars sent to stdout (should be 1)
 **/
int op_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
	return (1);
}

/**
 * op_int - print output based on variadic input
 * @valist: tool to grab next item out of variable length list
 * Return: Number of chars sent to stdout
 **/
int op_int(va_list valist)
{
	int num, dex, i = 0;
	char isNegative = FALSE;
	char str[98];

	num = va_arg(valist, int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	puts("I made it this far");
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
	dex = i;
	while (i >= 0)
		putchar(str[i--]);
	return (dex);
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

	str = va_arg(valist, char*);
	if (str)
	{
		printf("%s", str);
		return (1); /* TODO: return proper char count */
	}
	printf("(nil)");
	return (1); /* TODO: return proper char chount */

}
