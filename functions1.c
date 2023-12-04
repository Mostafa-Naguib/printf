#include "main.h"

/**
 * print_string - printing the the string
 *
 * @args: the string argument
 *
 * Return: The length of the string
 */

int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	char *a = s;
	int i = 0;

	if (!s)
		s = NULL_STRING;


	while (*a != '\0')
	{
		_putchar(*a++);
		i++;
	}

	return (i);
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
