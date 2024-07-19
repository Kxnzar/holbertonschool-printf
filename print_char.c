#include "main.h"

/**
 * _print_char - Function that prints a character.
 * @val: arguments.
 *
 * Return: 1.
 */

int _print_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
