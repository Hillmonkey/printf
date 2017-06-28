#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
* felicia_complete_test - another test set
*
* Return: Always 0
*/
int felicia_complete_test(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;
	int i;
	char *a = NULL;

	/** %c - character  **/
len = _printf("Character:[%c]\n", 'H');
len2 = printf("Character:[%c]\n", 'H');
	for(i = 0; i < 128; i++)
	{
		_printf("%c", i);
	}
	printf("\n");
	for(i = 0; i < 128; i++)
	{
		printf("%c", i);
	}
	printf("\n");
	len = _printf("Character:%c\n", '\0');
	len2 = printf("Character:%c\n", '\0');
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

/** %s - string  **/
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");


	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

	len = _printf("String:[%s]\n", a);
	len2 = printf("String:[%s]\n", a);
	 _printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");


	len = _printf("String:1234567890 1234567890 1234567890 1234567890 qwertyuiop[]\asdfghjkl;'zxcvbnm,./`1234567890-=~!@#$%^&*()_+\{}:?><");
	len2 = printf("String:1234567890 1234567890 1234567890 1234567890 qwertyuiop[]\asdfghjkl;'zxcvbnm,./`1234567890-=~!@#$%^&*()_+\{}:?><");
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");


	len = _printf("% s", "hello");
	len2 = printf("% s", "hello");
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");


	len = _printf("%  s", "hello");
	len2 = printf("%  s", "hello");
	/* Also check length of strings */
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");


	/** %% - percent sign **/
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");
	

	len = _printf("% %");
	len2 = printf("% %");
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

	len = _printf("%  %");
	len2 = printf("%  %");
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");


	len = _printf("%%%");
	len2 = printf("%%%");
	 _printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

	len = _printf("%%%%");
	len2 = printf("%%%%");
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

	puts("triple percent");
	len = _printf("%%%   ");
	len2 = printf("%%%   ");
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

	len = _printf("Negative:[%d]\n", -762534);
	len2 = printf("Negative:[%d]\n", -762534);
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


	/** %u - unsigned int **/
	ui = (unsigned int)INT_MAX + 1024;
	len = _printf("Unsigned:[%u]\n", ui);
	len2 = printf("Unsigned:[%u]\n", ui);
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");


	len = _printf("Unsigned:[%u]\n", UINT_MAX);
	len2 = printf("Unsigned:[%u]\n", UINT_MAX);
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");
	return (0);
}
