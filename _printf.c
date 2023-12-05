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
	int i = 0, is_percent = 0, j, len = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	while (format[i]) {
        switch (is_percent)
		{
			case 1:
				j = 2;
				while (is_percent && j >= 0)
				{
					if (formats[j].s[1] == format[i])
					{
						len += formats[j].v(args);
						is_percent = 0;
					}
					j--;
				}
				if (is_percent)
				{
					_putchar('%');
					_putchar(format[i]);
					is_percent = 0;
					len++;
				}
				break;
			case 0:
                if (format[i] == '%')
                    is_percent = 1;
				else
                    _putchar(format[i]);
					len++;
                break;
		}
		i++;
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
