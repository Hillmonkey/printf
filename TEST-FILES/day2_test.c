#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
 * day2_test - another test suite
 *
 * Return: Always 0
 */
int day2_test(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;
	int i;
	char *a = NULL;

	len = _printf(NULL);
	len2 = printf(NULL);
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);

	len = _printf("%");
	len2 = printf("%");
	printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);

	len = _printf("%");
	len2 = printf("%");
	printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);

	len = _printf("ZZZZ%");
	// puts("now the real printf:");
	len2 = printf("ZZZZ%");
	printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);

	len = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	len2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

	len = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	len2 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

	len = _printf("%s", "This sentence is retrieved from va_args!\n");
	len2 = printf("%s", "This sentence is retrieved from va_args!\n");
	printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

	len = _printf("%s", "This sentence is retrieved from va_args!");
	len2 = printf("%s", "This sentence is retrieved from va_args!");
	printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

	len = _printf("xx%s", "This sentence is retrieved from va_args!");
	len2 = printf("xx%s", "This sentence is retrieved from va_args!");
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

	len = _printf("%sxx", "This sentence is retrieved from va_args!");
	len2 = printf("%sxx", "This sentence is retrieved from va_args!");
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");
	
	return (0);
}
