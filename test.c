#include "main.h"

/**
* _printf - Produce the output according to a format.
* @format: A character string.
* @...: A variable
*
* Return: The number of characters printed.
*/

int _printf(const char *format, ...)
{
	int char_print = 0;
	va_list arguments;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(arguments, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			char_print++;
		}
		else
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			if (*format == '%')
			{
				write(1, format, 1);
				char_print++;
			}

			else if (*format == 'c')
			{
				char c = va_arg(arguments, int);
				write(1, &c, 1);
				char_print++;
			}

			else if (*format == 's')
			{
				char *str = va_arg(arguments, char*);
				int str_len = 0;
				
			while (str[str_len] != '\0')
			{
				str_len++;

				write(1, str, str_len);
				char_print += str_len;
			}
			format++;
			}


			va_end(arguments);

			return (char_print);
		}
	}
}
