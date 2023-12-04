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


/* prototype functions */
int _printf(const char *format, ...);
int _putchar(int c);



void print_string(va_list args);
void print_char(va_list args);

#endif

