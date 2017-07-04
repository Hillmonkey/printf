#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
* still_failing - one more test set
*
* Return: Always 0
*/
int still_failing(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;
	int i;
	char *a = NULL;

	/**
	len = _printf("String:1234567890 1234567890 1234567890 1234567890 qwertyuiop[]\asdfghjkl;'zxcvbnm,./`1234567890-=~!@#$%^&*()_+\{}:?><");
	len2 = printf("String:1234567890 1234567890 1234567890 1234567890 qwertyuiop[]\asdfghjkl;'zxcvbnm,./`1234567890-=~!@#$%^&*()_+\{}:?><");
	printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

	printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");
 
	**/
	puts("triple percent");
	len = _printf("%%%   ");
	puts("");
	len2 = printf("%%%   ");
	puts("");
	printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

	puts("percent: '%   '");
	len = _printf("%   ");
	puts("");
	len2 = printf("%   ");
	puts("");
	printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

	/**
	puts("percent: '% % '");
	len = _printf("% % ");
	puts("");
	len2 = printf("% % ");
	puts("");
	printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");

	len = _printf("Len:[%d]\n", len);
	len2 = printf("Len:[%d]\n", len2);
	printf("Length:[%d]\n", len);
	 printf("Length:[%d]\n", len2);
	 puts("");

	len = _printf("%d %d", 10);
	len2 = printf("%d %d", 10);
	printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	puts("");
	**/

	return (0);
}
