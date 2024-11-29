#include "main.h"
#include <stdarg.h> /* via_list */

/**
 * _printf - Entry point
 * @format: format string
 * Return: number of character or NULL
 */

int _printf(const char *format, ...)
{
	int i, count = 0; /* compter le nombre de caractere */
	va_list args; /* liste des arguments */

	if (!format) /* si string est NULL */
			return (-1);

	va_start(args, format); /* initialise la liste */

	for (i = 0; format[i] != '\0'; i++) /* parcourir le string 'format' */
	{
		if (format[i] == '%') /* si il y a un spécificateur */
		{
			if (format[i + 1] == '\0') /* si c'est la fin du string */
				return (-1);

			if (format[i + 1] == '%') /* si '%%' */
			{
				_putchar('%');
				count++;
				i++;
			}
			else /* sinon c'est un spécificateur */
			{
				int (*func)(va_list) = specifiers_handler(format[i + 1]);
				if (func) /* si il est valide */
					count += func(args); /* appelle la fonction */
				else /* si il est invalide */
					return (-1);
				i++;
			}
		}
		else /* si c'est pas un spécificateur */
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args); /* libère la liste */
	return (count);
}
