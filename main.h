#ifndef PRINT_F
#define PRINT_F
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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
