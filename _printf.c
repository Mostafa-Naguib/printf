#include "main.h"

/**
 * _printf - A function that produces output according to a format.
 *
 * @format: a character string composed of zero or more directives
 *
 * Return: the number of characters printed (excluding the null byte).
 */

int _printf(const char * const format, ...)
{
	specifier formats[] = {
		{"%s", print_str},
		{"%c", print_char},
		{"%%", print_percent}
	};
	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);


	while (format[i])
	{
		j = 2;
		while (j >= 0)
		{
			if (formats[j].s[0] == format[i] && formats[j].s[1] == format[i + 1])
			{
				len += formats[j].v(args);
				i = i + 2;
				j = 0;
			}
			j--;
		}
		if (format[i])
		{
			_putchar(format[i++]);
			len++;
		}
	}
	va_end(args);
	return (len);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success, 1.
 * On error, -1.
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
