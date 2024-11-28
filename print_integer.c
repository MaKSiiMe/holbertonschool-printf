#include "main.h"
#include <stdarg.h> /* utiliser va list */

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