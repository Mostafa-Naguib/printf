#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * ldkfjs
 * Return: n success 0
 */
int main(void)
{
	int len;
    int len2;

	_printf("Character:[%c]\n", 'H');
    printf("**Character:[%c]\n\n", 'H');

    _printf("String:[%s]\n", "I am a string !");
    printf("**String:[%s]\n\n", "I am a string !");

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("**Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("**Length:[%d, %i]\n\n", len2, len2);

    len = _printf("Percent:[%%]\n");
    len2 = printf("**Percent:[%%]\n\n");
	_printf("Length:[%d, %i]\n", len, len);
    printf("**Length:[%d, %i]\n\n", len2, len2);


	return (0);
}
