#include "main.h"

/**
 * print_unsigned - print unsigned numbers.
 * @args: point to the args of number.
 * Return: length of unsigned number or -1 in error.
 */

int print_unsigned(va_list args)
{
	unsigned long div10 = 1;
	int digt = 0;
	unsigned long num = va_arg(args, unsigned long);
	int i = 0;

	if (!(num > 0 && num <= UINT_MAX))
		return (-1);

	while (num / div10 >= 10)
		div10 *= 10;

	while (div10 >= 1)
	{
		digt = num / div10;
		_putchar(digt + '0');
		num %= div10;
		div10 /= 10;
		i++;
	}
	return (i);
}

/**
 * print_octl - convert dismal number to ocal numbers.
 * @args: a list of number.
 * Return: count numbers.
 */

int print_octl(va_list args)
{
	unsigned long num = va_arg(args, unsigned long);
	int i, lens;
	char oct[100] = {0};

	lens = i = 0;

	while (num != 0)
	{
		oct[i++] = num % 8 + '0';
		num /= 8;
		lens++;
	}

	while (i > 0)
	{
		i--;
		_putchar(oct[i]);
	}

	return (lens);
}

/**
 * print_hexs - print hexadicemal in lowercase charecter.
 * @args: is a numbers for convert.
 * Return: zero always.
 */

int print_hexs(va_list args)
{
	unsigned long num = va_arg(args, unsigned long);
	int i, lens;
	char hex[64];
	unsigned long rem = 0;

	i = lens = 0;

	while (num > 0)
	{
		rem = num % 16;
		if (rem < 10)
			hex[i++] = (rem + '0');
		else
			hex[i++] = (rem - 10 + 'a');
		num /= 16;
		lens = i;
	}

	while (i > 0)
	{
		i--;
	       _putchar(hex[i]);
	}

	return (lens);
}


/**
 * print_hexC - print hexadicemal in uppercase charecter.
 * @args: is a numbers for convert.
 * Return: zero always.
 */

int print_hexC(va_list args)
{
	unsigned long num = va_arg(args, unsigned long);
	unsigned long rem = 0;
	int i, lens;
	char hex[64];

	lens = i = 0;

	while (num > 0)
	{
		rem = num % 16;
		if (rem < 10)
			hex[i++] = (rem + '0');
		else
			hex[i++] = (rem - 10 + 'A');
		num /= 16;
		lens = i;
	}

	while (i-- > 0)
	{
		_putchar(hex[i]);
	}

	return (lens);
}
