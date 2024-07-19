#include "main.h"

/**
 * _print_string - prints a string.
 * @val: argument.
 *
 * Return: The length of the string
 */

int _print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = _strlen(str);
	write(1, str, len);
	return (len);
}
