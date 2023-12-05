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
	int num, last = n % 10, digit, devisor = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
    while (num / 10 != 0)
    {
        devisor = devisor * 10;
        num = num / 10;
    }
    num = n;
    while (devisor > 0)
    {
        digit = num / devisor;
        _putchar(digit + '0');
        num = num - (digit * devisor);
        devisor = devisor / 10;
        i++;
    }
	_putchar(last + '0');

	return (i);
}
