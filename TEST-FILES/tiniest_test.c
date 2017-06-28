#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
 * tiniest_test - another printf test set
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
    char *dud = NULL;

    len = _printf("Let's try to _printf a simple sentence.\n");
    len2 = printf("Let's try to  printf a simple sentence.\n");

    _printf("Length:[%d]\n", len);
    printf("Length:[%d]\n", len2);

    puts("");
    puts("empty string case");
    len = _printf("");
    len2 = printf("");
    _printf("Length:[%d]\n", len);
    printf("Length:[%d]\n", len2);
    puts("");

    printf("\nNULL string\n");
    len2 = printf("%s\n", dud); /* testing printf before _printf segfault */
    len = _printf("%s\n", dud);
    _printf("Length:[%d]\n", len);
    printf("Length:[%d]\n", len2);
    puts("");

    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;

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

    len = _printf("Negative:[%d]\n", -762534);
    len2 = printf("Negative:[%d]\n", -762534);
    puts("");

    len = _printf("INT_MAX:[%d]\n", INT_MAX);
    len2 = printf("INT_MAX:[%d]\n", INT_MAX);
    puts("");

    len = _printf("INT_MIN:[%d]\n", INT_MIN);
    len2 = printf("INT_MIN:[%d]\n", INT_MIN);
    puts("");

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    puts("");

	/*
    len = _printf("Unsigned:[%u]\n", ui);
    len2 = printf("Unsigned:[%u]\n", ui);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    puts("");


    len = _printf("Unsigned octal:[%o]\n", ui);
    len2 = printf("Unsigned octal:[%o]\n", ui);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    puts("");


    len = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    len2 = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
     _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    puts("");


    */
    len = _printf("Character:[%c]\n", 'H');
    len2 = printf("Character:[%c]\n", 'H');
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    puts("");

    len = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
    puts("");

    /*
    len = _printf("Address:[%p]\n", addr);
    len2 = printf("Address:[%p]\n", addr);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    puts("");

    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    puts("");

    len = _printf("Len:[%d]\n", len);
   len2 = printf("Len:[%d]\n", len2);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    puts("");


    len = _printf("Unknown:[%r]\n");
    len2 = printf("Unknown:[%r]\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    puts("");

    */
    return (0);
}
