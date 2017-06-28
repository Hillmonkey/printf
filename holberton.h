#ifndef HOLBERTON
#define HOLBERTON

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

#define TRUE 1
#define FALSE 0
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
 * @format: copy of format string passed into _printf
 * @counter: number of chars printed to stdout
 * @dex: index into format string
 * @ops: array of pointers to op_t structs
 **/
typedef struct params
{
	const char *format;
	int counter;
	int dex;
	op_t *ops;
} params_t;

/* _printf.c */
op_t *create_ops(op_t *ops);
int _printf(const char *format, ...);

/* op_code1.c functions */
int op_char(va_list valist);
int op_int(va_list valist);
int op_float(va_list valist);
int op_string(va_list valist);
int op_percent(va_list valist);

/* helper.c functions */
int _putstr(char *s);
int _putchar(char c);
int choose_op(params_t *p, va_list valist);
int init_params(params_t *p, const char *format, op_t *ops[]);
char *_strdup(const char *src);

/* helper2.c */
int itoa(int n, char s[]);
int _abs(int n);
int _strlen(const char *s);

/* test files in TEST-FILES folder */
int baby_test(void);
int count_test(void);
int day2_test(void);
int felicia_complete_test(void);
int felicia_test(void);
int int_test(void);
int still_failing(void);
int test_test(void);
int test_template(void);
int tiniest_test(void);
int tiny_test(void);

#endif /* HOLBERTON */
