#ifndef HOLBERTON
#define HOLBERTON

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#define UNUSED(x) (void)(x)
/* NUMBER_OF_OPS includes terminating NULL OP */
#define NUMBER_OF_OPS 4

/**
 * struct op - Struct op
 * @op: printf-like operator
 * @f: formatting function
 **/
typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_t;

/**
 * struct params - Struct params
 * @valist: access to variable length list of variables
 * @format: copy of format string passed into _printf
 * @counter: number of chars printed to stdout
 * @dex: index into format string
 * @ops: array of pointers to op_t structs
 **/
typedef struct params
{
	va_list valist;
	const char *format;
	int counter;
	int dex;
	op_t *ops;
/* TODO: passing array of op struct around definitely needs considerartion */
/* consider this: if the array is built in main, then why not pass a pointer */
/* around that points to the array ... it seems that this should work ... */

} params_t;

/* _printf.c */
void _printf(const char *format, ...);

/* op_code1.c functions */
int op_char(va_list valist);
int op_int(va_list valist);
int op_float(va_list valist);
int op_string(va_list valist);
int op_percent(va_list valist);

/* helper.c functions */
int choose_op(params_t *p);
int init_params(params_t *p, const char *format, op_t *ops[], va_list valist);
char *_strdup(char *src, char *dest);

#endif /* HOLBERTON */
