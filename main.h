#ifndef MAIN
#define MAIN

/* ======= LIBRARIES ======= */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

/* ======= PROTOTYPES ======= */

int _printf(const char *format, ...);
int _putchar(char c);
int _find_type(char c, va_list arg);
int _print_char(va_list arg);
int _print_int(va_list arg);
int _print_INT_MIN(void);
int _print_str(va_list arg);
int _print_decimal(va_list arg);
int _print_null(void);
void parse_int(int n, int r, int mul, int *m);
int int_size(int n);
int _print_float(va_list arg);

/* ======= STRUCTS ======= */

/**
 * struct formats - Struct dog
 *
 * @t: first letter of the type
 * @f: function execute per type
 */
typedef struct formats
{
	char *t;
	int (*f)(va_list p);
} formats;

#endif
