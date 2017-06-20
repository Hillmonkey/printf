#include "holberton.h"

/**
 * op_char - print output based on variadic input
 * @valist: tool to grab next item out of variable length list
 * Return: Number chars sent to stdout (should be 1)
 **/
int op_char(char c)
{
	write(1, &c, 1); 
	return (1);
}

/**
 * op_int - print output based on variadic input
 * @valist: tool to grab next item out of variable length list
 * Return: Number of chars sent to stdout
 **/
int op_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
	return (1); /* TODO: return proper output count */

	int i;
	int j;
	char k;

	i = va_arg(valist, int);
	if (i < 0)
	{
		write(1, &k, 1);
		i = -i;
	}
	while (i != 0)
	{
		
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

	str = va_arg(valist, char*);
	if (str)
	{
		for(i = 0; i != '\0'; i++)
		{
			(write(1, &str, 1));
		}
		return (i - 1);
	}
	printf("(nil)");
	return (5);

}
