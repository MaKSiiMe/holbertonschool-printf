#ifndef MAIN
#define MAIN

#include <stdarg.h>


int _putchar(char c);
int _printf(const char *format, ...);

int print_string(va_list args);
int print_char(va_list args);
int print_integer(va_list args);
int print_percent(va_list args);
int print_number(unsigned int n);

int (*specifiers_handler(const char specifier))(va_list);

typedef struct format
{
	char *spec;
	int (*function)(va_list);
} format;

#endif
