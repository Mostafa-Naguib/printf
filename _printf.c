#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: a character string composed of zero or more directives
 * Return: the number of characters printed (excluding the null byte)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, x = 0;
	int is_present = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	while (format[i])
	{
		switch (is_present)
		{
			case 1:
				is_present = 0;
				switch (format[i])
				{
					case 's':
						x += print_string(args);
						break;
					case 'c':
						x += print_char(args);
						break;
					case '%':
						x += _putchar('%');
						break;
					default:
						_putchar('%');
						_putchar(format[i]);
						break;
				}
				break;
			case 0:
				if (format[i] == '%')
					is_present = 1;
				else
					_putchar(format[i]);
				break;
		}
		i++;
	}
	va_end(args);
	return (i + x);
}
