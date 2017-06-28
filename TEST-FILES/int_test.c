#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
 * int_test - _printf tests focussed on int functionalilty
 *
 * Return: Always 0
 */
int int_test(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;
	int i;
	char *a = NULL;
      

	len = _printf("Negative:[%d]\n", -762534);
	len2 = printf("Negative:[%d]\n", -762534);
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

	len = _printf("INT_MAX:[%d]\n", INT_MAX);
	len2 = printf("INT_MAX:[%d]\n", INT_MAX);
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

	len = _printf("INT_MIN:[%d]\n", INT_MIN);
	len2 = printf("INT_MIN:[%d]\n", INT_MIN);
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

	len = _printf("INT_MAX:[%d]\n", (INT_MAX / 2) - 1);
	len2 = printf("INT_MAX:[%d]\n", (INT_MAX / 2) - 1);
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

	len = _printf("INT_MIN:[%d]\n", INT_MIN / 2);
	len2 = printf("INT_MIN:[%d]\n", INT_MIN / 2);
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");


	len = _printf("Len:[%d]\n", len);
	len2 = printf("Len:[%d]\n", len2);
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

	len = _printf("%d %d", 10);
	len2 = printf("%d %d", 10);
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");


        /** %u - unsigned int 
        ui = (unsigned int)INT_MAX + 1024;
	len = _printf("Unsigned:[%u]\n", ui);
	len2 = printf("Unsigned:[%u]\n", ui);
	    _printf("Length:[%d]\n", len);
    printf("Length:[%d]\n", len2);
    puts("");


	len = _printf("Unsigned:[%u]\n", UINT_MAX;
	len2 = printf("Unsigned:[%u]\n", UINT_MAX);
	 _printf("Length:[%d]\n", len);
    printf("Length:[%d]\n", len2);
    puts("");
	*/
	return (0);
}
