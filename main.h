#ifndef MAIN_H
#define MAIN_H

/* include a nessery libraries */
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>
#include <unistd.h>


/* size of the output buffer */
#define BUFFER_SIZE 1024
#define BUFFER_FLUSH -1
#define NULL_STRING "(null)"


/* prototype functions */
int _printf(const char *format, ...);
int _putchar(int c);


int print_string(va_list args);
int print_char(va_list args);
int print_integer(va_list args);

/**
 * struct format - match the conversion specifiers for printf
 * @s: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @v: type pointer to function for the conversion specifier
 *
 */

typedef struct form
{
	char *s;
	int (*v)(va_list args);
} specifier;


#endif

