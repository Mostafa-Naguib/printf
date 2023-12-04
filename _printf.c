#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: a character string composed of zero or more directives
 * Return: the number of characters printed (excluding the null byte)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int is_present;
	int i = 0, len = 0, j = 2;

	specifier formats[] = {
		{"%s", print_string},
		{"%c", print_char},
	};

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	while (format[i])
	{
		switch (is_present)
		{
			case 1:
				is_present = 0;
				while (j--)
				{
					if (format[i] == formats[j].s[1])
					{
						len += formats[j].v(args);
						i++;
					}
				}
				break;
			case 0:
				if (format[i] == '%')
					is_present = 1;
				else
				{
					_putchar(format[i]);
					len++;
				}
				break;

		}
		i++;
	}
	va_end(args);
	return (i);
}
