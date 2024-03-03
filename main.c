#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	long int l = UINT_MAX;

	l += 1024;
	len = _printf("%b", l);
	printf("\n");
	len2 = printf("1111111111");
	printf("\n");
	_printf("%b", 1024);
	printf("\n");
	_printf("%b", 1023);
	printf("\n");
	_printf("%b", 0);
	printf("\n");
	_printf("%b", -5);
	printf("previouse is negative value\n");
	fflush(stdout);
	printf("len1=%d, len2=%d, l=%ld\n", len, len2, l);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
