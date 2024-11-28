#include "main.h"
#include <stdarg.h> /* utiliser va list */

/**
 * print_percent - print char
 * @args: list of arguments
 * Return: args + the number of characters printed
 */

int print_percent(va_list args)
{
	(void)args;
	return (_putchar ('%'));
}