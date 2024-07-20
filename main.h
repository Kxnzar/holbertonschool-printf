#ifndef PRINT_F
#define PRINT_F

/* ======= LIBRARIES ======= */

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* ======= STRUCTURES ====== */

/**
 * struct ptr - parameters and functions struct
 * @c: parameter indicator
 * @f: parameter function
 */
typedef struct ptr
{
	char *c;
	int (*f)(char *, int, va_list);
} ptr_ch;

/* ======= FUNCTION PROTOTYPES ======= */

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list val);
int _print_string(va_list args);
int _strlen(char *str);
int _strlenc(const char *str);
int _print_format_specifier(void);
int _print_integer(va_list args);
int _print_float(va_list args);

#endif
