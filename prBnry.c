#include "main.h"

/**
 * print_binary - convert deciaml to binary number.
 * @args: number for convirt.
 * Return: zero.
 */

int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int i = 0, rem = 0, lens = 0;
	char bin[1024] = {0};

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		if (num >= UINT_MAX)
			num -= (UINT_MAX + 1);

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
