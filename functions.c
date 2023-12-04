#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: 1 on success. -1 on error
 */

int _putchar(int c)
{
	static int x;
	static char buffer[BUFFER_SIZE];

	if (c == BUFFER_FLUSH || x >= BUFFER_SIZE)
	{
		write(1, buffer, x);
		x = 0;
	}
	if (c != BUFFER_FLUSH)
		buffer[x++] = c;

	return (x);
}
