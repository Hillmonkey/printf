#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
 * count_test - another test set
 *
 * Return: Always 0
 */
int count_test(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
    char *dud = NULL;

    len = _printf("%%%%%%%%%%\n");
    len2 = printf("%%%%%%%%%%\n");
    _printf("Length:[%d]\n", len);
    printf("Length:[%d]\n", len2);
    puts("");


    len = _printf("Let's try to _printf a simple sentence.\n");
    len2 = printf("Let's try to  printf a simple sentence.\n");
    _printf("Length:[%d]\n", len);
    printf("Length:[%d]\n", len2);

    len = _printf("%c%c%c%c%c%c%c\n", 'a', 'b', 'c', 'd', 'e', 'f', 'g');
    len2 = printf("%c%c%c%c%c%c%c\n", 'a', 'b', 'c', 'd', 'e', 'f', 'g');
    _printf("Length:[%d]\n", len);
    printf("Length:[%d]\n", len2);
    puts("");


    puts("");
    puts("empty string case");
    len = _printf("");
    len2 = printf("");
    _printf("Length:[%d]\n", len);
    printf("Length:[%d]\n", len2);
    puts("");

    len = _printf("my char %c\n", 'Z');
    len2 = printf("my char %c\n", 'Z');
    _printf("Length:[%d]\n", len);
    printf("Length:[%d]\n", len2);
    puts("");

    len = _printf("my %c char\n", 'Z');
    len2 = printf("my %c char\n", 'Z');
    _printf("Length:[%d]\n", len);
    printf("Length:[%d]\n", len2);
    puts("");

/*
    printf("\nNULL string\n");
    len2 = printf("%s\n", dud); // testing printf before _printf segfault //
    len = _printf("%s\n", dud);
    _printf("Length:[%d]\n", len);
    printf("Length:[%d]\n", len2);
    puts("");
*/
   return (0);
}
