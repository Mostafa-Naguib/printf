#include "main.h"

/**
 * print_int - Print the number.
 *
 * @args: The number.
 *
 * Return: The length of the digits.
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	int num, digit, divisor = 0;
	int  i = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			divisor = divisor * 10;
			num = num / 10;
		}
		num = n;
		while (divisor > 0)
		{
			digit = num / divisor;
			_putchar(digit + '0');
			num = num - (digit * divisor);
			divisor = divisor / 10;
			i++;
		}
	}

	return (i);
}
