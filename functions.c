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
	static int i;
	static char buffer[BUFFER_SIZE];

	if (c == BUFFER_FLUSH || i >= BUFFER_SIZE)
	{
		write(1, buffer, i);
		i = 0;
	}
	if (c != BUFFER_FLUSH)
		buffer[i++] = c;

	return (1);
}
