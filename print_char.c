#include "main.h"

/**
* _print_char - prints a character
* @arg: va_list parameter
*
* Return: The number of character printed
*/

int _print_char(va_list arg)
{
	return (_putchar((char) va_arg(arg, int)));
}
