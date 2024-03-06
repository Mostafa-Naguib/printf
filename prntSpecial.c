#include "main.h"

/**
 * print_no_special - print all charecters with special char's
 * @args: text to print.
 * Return: length of text.
*/
int print_no_special(va_list args)
{
	char *str;
	int i = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		return (0);
	while (*str != '\0')
	{
		if ((*str > 0 && *str < 32) || *str >= 127)
		{
			i += _putchar(92);
			i += _putchar('x');
			i += _putchar(*str / 16 < 10 ? *str / 16 + '0' : *str / 16 - 10 + 'A');
			i += _putchar(*str % 16 < 10 ? *str % 16 + '0' : *str % 16 - 10 + 'A');
		}
		else
		{
			i += _putchar(*str);
		}
		str++;
	}
	return (i);
}


/**
 * print_special_string - print special strings..
 * @args: special charecters..
 * Return: zero.
 */

int print_special_string(va_list args)
{
	args = args;
	return (0);
}


/**
 * print_pointer - print pointer..
 * @args: pointer for print.
 * Return: zero.
 */

int print_pointer(va_list args)
{
	args = args;
	return (0);
}


/**
 * print_reverse - print charecter in reverse order.
 * @args: string for print.
 * Return: zero.
 */

int print_reverse(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0, lens = 0;

	if (str == NULL)
		return (0);

	while (*str++ != '\0')
		i++;

	str -= i + 1;
	lens = i - 1;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	return (lens);
}
