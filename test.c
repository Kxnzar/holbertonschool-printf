#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Produce output according to a format.
 * @format: A character string.
 * @...: A variable.
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list prints;
	int p;

	va_start(prints, format);
	p = vfprintf(stdout, format, prints);

	va_end(prints);

	return (p);
}


int main()
{
	char w[] = "hello";
	char i = '1';

	_printf("%c", i);
	_printf("%s", w);

