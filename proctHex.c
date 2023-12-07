#include "main.h"

/**
 * print_unsigned - print unsigned numbers.
 * @args: point to the args of number.
 * Return: length of unsigned number or -1 in error.
 */

int print_unsigned(va_list args)
{
	int div10 = 1;
	int digt = 0;
	unsigned int num = va_arg(args, unsigned int);
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
	unsigned int num = va_arg(args, unsigned int);
	int i = 0;
	char oct[32] = {0};

	while (num != 0)
	{
		oct[i++] = num % 8 + '0';
		num /= 8;
	}

	while (i-- > 0)
	{
		_putchar(oct[i]);
	}

	return (i);
}

int print_hexs(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int i = 0;
	char hex[64];
	unsigned int rem = 0;

	while (num > 0)
	{
		rem = num % 16;
		if (rem < 10)
			hex[i++] = (rem + '0');
		else
			hex[i++] = (rem - 10 + 'a');
		num /= 16;
	}

	while (i-- > 0)
	       _putchar(hex[i]);

	return (0);
}


int print_hexC(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int rem = 0;
	int i = 0;
	char hex[64];

	while (num > 0)
	{
		rem = num % 16;
		if (rem < 10)
			hex[i++] = (rem + '0');
		else
			hex[i++] = (rem - 10 + 'A');
		num /= 16;
	}

	while (i-- > 0)
		_putchar(hex[i]);

	return (0);
}
