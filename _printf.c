#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: a character string composed of zero or more directives
 * Return: the number of characters printed (excluding the null byte)
 */

int _printf(const char * const format, ...)
{
	specifier formats[] = {
		{"%s", print_string},
		{"%c", print_char},
		{"%%", print_percent}
	};
	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	Here:
	while (format[i] != '\0')
	{
		j = 2;
		while (j >= 0)
		{
			if (formats[j].s[0] == format[i] && formats[j].s[1] == format[i + 1])
			{
				len += formats[j].v(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
