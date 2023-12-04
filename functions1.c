#include "main.h"
int _strlen(char *s);

/**
 * print_string - printing the the string
 *
 * @args: the string argument
 *
 * Return: The length of the string
 */

int print_string(va_list args)
{
	char *s;
	int i, len;

	s = va_arg(args, char *);
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
 * print_char - printing the the string
 *
 * @args: the char argument
 *
 * Return: one
 */

int print_char(va_list args)
{
	char s = va_arg(args, int);

	if (s)
		_putchar(s);

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
 * printf_string - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
