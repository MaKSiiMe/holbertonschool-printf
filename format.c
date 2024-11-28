#include "main.h"
#include <unistd.h> /* utiliser write */
#include <stdarg.h> /* utiliser va list */

int print_number(unsigned int n);

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

	int count = 0;

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
	char c = va_arg(args, int); /* on met le caractere args -> c */
	_putchar(c);
	return (1);
}

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

/* --------------------------- Task 1 ---------------------------- */

/**
 * print_integer - print integer
 * @args: list of arguments
 * Return: the number of characters printed
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
	count += print_number(num); /* appelle print_number pour afficher le nombre */

	return (count);
}

/**
 * print_number - print number
 * @n: number to print
 * Return: the number of characters printed
 */


int print_number(unsigned int n)
{
    int count = 0;

    if (n / 10) /* si le nombre a plus d'un chiffre */
        count += print_number(n / 10);

    _putchar((n % 10) + '0');
    count++;

    return (count);
}