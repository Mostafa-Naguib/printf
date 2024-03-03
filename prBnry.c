#include "main.h"

/**
 * print_binary - convert deciaml to binary number.
 * @args: number for convirt.
 * Return: zero.
 */

int print_binary(va_list args)
{
	long int num = va_arg(args, long int);
	int i = 0, rem = 0, lens = 0;
	char bin[1024] = {0};

	if (num == 0)
	{
		_putchar('0');
		_putchar('0');
		return (2);
	}
	else
	{
		if (num < 0)
		{
			num *= -1;
		}
		while (num > 0)
		{
			rem = num % 2;
			bin[i] = rem + '0';
			num /= 2;
			i++;
		}
		bin[i++] = '\0';
		lens = i - 1;
		while (i >= 0)
		{
			if (bin[i] != '\0')
				_putchar(bin[i]);
			i--;
		}
	}
	return (lens);
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
