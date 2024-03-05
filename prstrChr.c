#include "main.h"

/**
 * print_str - printing the the string..
 *
 * @args: The string argument.
 *
 * Return: The length of the string.
 */

int print_str(va_list args)
{
	char *s;
	int i, len = 0;

	s = va_arg(args, char *);
	if (!s)
	{
		s = NULL_STRING;
		for (i = 0; i < 6; i++)
			_putchar(s[i]);
		return (6);
	}
	else
	{
		while (*s)
		{
			_putchar(*s++);
			len++;
		}
		return (len);
	}
}

/**
 * print_char - Printing the string.
 *
 * @args: The chararcter argument.
 *
 * Return: 1
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));

	return (1);
}

/**
 * print_percent - Printing the percent sign.
 *
 * Return: 1
 */

int print_percent(void)
{
	_putchar(37);

	return (1);
}
