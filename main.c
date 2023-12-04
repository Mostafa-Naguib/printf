#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
	len = _printf("**Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("Length:[%d, %i]\n", len2, len);
	_printf("**Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("**String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
	len = _printf("**Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    printf("Len:[%d]\n", len);

	return (0);
}