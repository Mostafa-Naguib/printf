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
	int counter = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	divisor = 1;
	while (num / divisor > 9)
		divisor *= 10;

	while (divisor != 0)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		num %= divisor;
		divisor /= 10;
		counter++;
	}
	return (counter);
}



/**
 * print_dec - Print the number.
 *
 * @args: The number.
 *
 * Return: The length of the digits.
 */


int print_dec(va_list args)
{
	int num = va_arg(args, int);
	int divisor;
	int counter = 0;
    int digit;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	divisor = 1;
	while (num / divisor > 9)
		divisor *= 10;

	while (divisor != 0)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		num %= divisor;
		divisor /= 10;
		counter++;
	}
	return (counter);
}

