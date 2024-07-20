#include "main.h"

/**
<<<<<<< HEAD
 * _print_string - prints a string.
 * @args: argument.
 *
 * Return: The length of the string
=======
 * _string_process - check the code
 * @arg: va_list
 * Return: Size of char.
>>>>>>> Gabriel
 */
int _string_process(va_list arg)
{
	char *c = va_arg(arg, char*);

	return (_print_str(c));
}


/**
 * _print_str - check the code
 * @c: string
 * Return: Size of char.
 */
int _print_str(char *c)
{
<<<<<<< HEAD
	char *str = va_arg(args, char *);
	int len = _strlen(str);

	write(1, str, len);

	return (len);
=======
	int i = 0;

	if (!c)
		return (_print_str("(null)"));

	while (c && c[i])
		_putchar(c[i++]);

	return (i);
>>>>>>> Gabriel
}
