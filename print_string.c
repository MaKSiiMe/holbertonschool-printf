#include "main.h"
#include <stdarg.h> /* utiliser va list */

/**
 * print_string - print string
 * @args: list of arguments
 * Return: args + the number of characters printed
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *); /* on met le string args -> *str */

	int count = 0;

	if (!str) /* si le string est NULL on affuche null */
		str = "(null)";

	while (*str) /* parcourir le string carctere par caractere */
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
