#include "main.h"

/**
* _print_str - Prints a string
* @arg: va_list parameter
*
* Return: The number of character printed
*/

int _print_str(va_list arg)
{
	int len = 0;
	char *s = va_arg(arg, char*);

	if (s == NULL)
		return (_print_null());


	while (*s != '\0')
		len += _putchar(*s++);

	return (len);
}
