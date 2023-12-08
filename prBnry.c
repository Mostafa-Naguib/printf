#include "main.h"

/**
 * print_binary - convert deciaml to binary number.
 * @args: number for convirt.
 * Return: zero.
 */

int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int i, rem;
	char bin[100] = {0};

	i = rem = 0;
	while (num > 0)
	{
		rem = num % 2;
		bin[i++] = rem + '0';
		num /= 2;
	}
	while (i >= 0)
	{
		_putchar(bin[i--]);
	}
	return (0);
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
	args = args;
	return (0);
}
