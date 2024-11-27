#include "main.h"
#include <unistd.h> /* utiliser write */

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - print string
 * @args: list of arguments
 * Return: args + the number of characters printed
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *); /* on met le string args -> *str */

	count = 0;

	if (!str) /* si le string et NULL on affuche null */
		str = "(null)";

	while (*str) /* parcourir le string carctere par caractere */
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}

/**
 * print_char - print char
 * @args: list of arguments
 * Return: args + the number of characters printed
 */

int print_char(va_list args)
{
	char c = va_args(args, int); /* on met le caractere args -> c */

	return (_putchar (c));
}

/**
 * print_percent - print char
 * @args: list of arguments
 * Return: args + the number of characters printed
 */

int print_percent(va_list args)
	return (_putchar ('%'));


/* --------------------------- Task 1 ---------------------------- */

/**
 * print_integer - print integer
 * @args: list of arguments
 * Return: args + the number of characters printed
 */

int print_integer(va_list args)
{
	int n = va_arg(args, int); /* on met le nombre entier args -> n */
	int count = 0;
	unsigned int num = 0; /* gerer les nombre positif si n est négatif */

	if (n < 0) /* si n est négatif */
	{
		_putchar('-');
		count++;
		num = -n; /* convertir en positif */
	}
	else
		num = n;

	return (count);
}
