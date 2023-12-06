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
	int num = va_arg(args, int);
	int divisor, digit;
	int last = num % 10;
	int counter = 1;

	num = num / 10;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		last = -last;
		counter++;
	}

	if (num > 0)
	{
		divisor = 10;
		while (num / divisor > 9)
			divisor *= 10;

		while (divisor > 0)
		{
			digit = num / divisor;
			_putchar(digit + '0');
			num %= divisor;
			divisor /= 10;
			counter++;
		}
	}
	_putchar(last + '0');

	return (counter);
}
