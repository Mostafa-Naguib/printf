#include "main.h"

/**
 * print_string - printing the the string
 *
 * @args: the string argument 
 *
 */

void print_string(va_list args)
{
	char *s = va_arg(args, char *);
	char *a = s;
	
	if (!s)
		s = NULL_STRING; 


	while (*a != '\0')
	{
		_putchar(*a++);
	}
}


/**
 * print_string - printing the the string
 *
 * @args: the char argument
 *
 */

void print_char(va_list args)
{
	char s = va_arg(args, int);

	if (s)
		_putchar(s);

}


/**
 * print_integer - printing the the string
 *
 * @args: the char argument
 *
 */

void print_integer(va_list args)
{
	int n = va_arg(args, int);
	
	if (n)
		_putchar(n);
}
