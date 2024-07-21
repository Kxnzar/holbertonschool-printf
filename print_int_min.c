#include "main.h"

/**
* _print_INT_MIN - Prints the minimum integer value
*
* Return: The number of character printed
*/

int _print_INT_MIN(void)
{
	int m = 1;
	int min = 214748364;

	_putchar('-');
	parse_int(min, min, 1, &m);
	_putchar('8');

	return (11);
}
