#include "main.h"
int _strlen(char *s);

/**
 * print_str - printing the the string
 *
 * @args: the string argument
 *
 * Return: The length of the string
 */

int print_str(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
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

int print_char(va_list val)
{
	_putchar(va_arg(val, int));

	return (1);
}

/**
 * print_percent - printing the percent sign
 *
 * @args: the percent argument
 *
 * Return: one
 */

int print_percent(void)
{
	_putchar(37);

	return (1);
}


/**
 * print_integer - printing the the string..
 *
 * @args: the char argument..
 *
 * Return: The number of the digits
 */

int print_integer(va_list args)
{
	int n = va_arg(args, int);

	if (n)
		_putchar(n);

	return (0);
}

/**
 * _strlen - Get the length of the string
 * @s: The string.
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}
