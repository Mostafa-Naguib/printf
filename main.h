#ifndef MAIN_H
#define MAIN_H

/* include necessary libraries */
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>
#include <unistd.h>


#define NULL_STRING "(null)"


/* prototype for _printf file */
int _printf(const char *format, ...);
int _putchar(int c);

/* prototype for functoins1 file */
int print_str(va_list args);
int print_char(va_list args);
int print_percent(void);

/* prototype for functoins2 file */
int print_int(va_list args);


/* It's your job my partner "don't touch _printf file" */
/* remove this comment after you understand */

/* prototype for functoins3 file */
int print_binary(va_list args);


/* prototype for functoins4 file */
int print_unsigned(va_list args);
int print_octadecemal(va_list args);
int print_hexadecemal(va_list args);
int print_hexadecemal_uppercase(va_list args);


/* prototype for functoins5 file */
int print_string(va_list args);


/* prototype for functoins6 file */
int print_pointer(va_list args);



/* prototype for functoins13 file */
int print_reverse(va_list args);



/**
 * struct form - match the conversion specifiers for printf...
 *
 * @s: type char pointer of the specifier...
 * @v: function pointer for the conversion specifier...
 *
 */

typedef struct form
{
	char *s;
	int (*v)();
} specifier;


#endif

