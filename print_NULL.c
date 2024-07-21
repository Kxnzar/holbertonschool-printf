#include "main.h"

/**
* _print_null - Prints null
*
* Return: The number of character printed
*/

int _print_null(void)
{
	char *s = "(null)";
	int len = 0;

	while (*s != '\0')
	{
		len++;
		_putchar(*s++);
	}
	return (len);
}
