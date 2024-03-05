#include "main.h"

int main(void)
{
	int len = 0, len2 = 0, len3 = 0;
	long int y = UINT_MAX;

	y += 1024;
	len = _printf("%X", y);
	len2 = printf("%X", y);
	len3 = _printf("%x", y);
	printf("len=%d, len2=%d, len3=%d, y=%ld\n", len, len2, len3, y);
	
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
	}

	len = _printf("There is %X bytes in %X KB\n", 1024, 1);
	_printf("There is %x bytes in %x KB - small x", 1024, 1);
	len2 = printf("There is %X bytes in %X KB\n", 1024, 1);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
	}	
	_printf("u0=%u\nx1=%x\nX1=%X\n", 0, 1, 1);
	return (0);
}
