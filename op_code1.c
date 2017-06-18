#include "holberton.h"

/**
 * op_char - print output based on variadic input
 * @valist: tool to grab next item out of variable length list
 **/
int op_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * op_int - print output based on variadic input
 * @valist: tool to grab next item out of variable length list
 **/
int op_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * op_float - print output based on variadic input
 * @valist: tool to grab next item out of variable length list
 **/
int op_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * op_percent - 2nd consecutive % occurs - do nothing!
 * @valist: var of type va_list is accepted, but nothing is done ...
 * Return: # of characters sent to stdout
 **/
int op_percent(va_list valist)
{
	return (0);
}

/**
 * op_string - print output based on variadic input
 * @valist: tool to grab next item out of variable length list
 **/
int op_string(va_list valist)
{
	char *str;

	str = va_arg(valist, char*);
	if (str)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}
