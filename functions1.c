#include "main.h"

/**
 * print_str - printing the the string
 *
 * @args: the string argument
 *
 * Return: The length of the string
 */

int print_str(va_list args)
{
	char *s;
	int i, len = 0;

	s = va_arg(args, char *);
	if (!s)
	{
		s = "(null)";
		for (i = 0; i < 6; i++)
			_putchar(s[i]);
		return (6);
	}
	else
	{

		while (*s)
			_putchar(*s++);
			len++;
		return (len);
	}
}

/**
 * print_char - printing the string
 *
 * @args: the char argument
 *
 * Return: one
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));

	return (1);
}

/**
 * print_percent - printing the percent sign
 *
 * Return: one
 */

int print_percent(void)
{
	_putchar(37);

	return (1);
}

