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
            if (*str < 16)
                i += _putchar('0');

            if (*str % 16 < 10)
                i += _putchar(*str + '0');
            else
                i += _putchar(*str % 16 - 10 + 'A');
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
	args = args;
	return (0);
}