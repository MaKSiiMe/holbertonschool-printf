#include "main.h"
#include <stdarg.h> /* via_list */

/**
 * _printf - Entry point
 * @format: format string
 * Return: number of character or NULL
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0; /* compter le nombre de caractere */
	char *specifiers = "csdi%"; /* (spécificateurs supportés) 'scdiuoxXp%' */
	va_list args;
	int (*functions[])(va_list) = { /* tableau de pointers sur fonctions */
		print_string,	/* %s */
		print_char,	/* %c */
		print_integer,	/* %d */
		print_integer,	/* %i */
	/*	print_unsigned,	%u */
	/*	print_octal,	%o */
	/*	print_hex,	%x */
	/*	print_hex,	%X */
	/*	print_pointer,	%p */
		print_percent	/* %% */
	};
	va_start(args, format); /* initialise la liste */
	for (i = 0; format[i] != '\0'; i++) /* parcourir le string 'format' */
	{
		if (!format) /* si string est NULL */
			return (-1);
		if (format[i] == '%' && format[i + 1]) /* si il y a un spécificateur */
		{
			int j = 0;

			while (specifiers[j]) /* rechercher le bon spécificateur */
			{
				if (format[i + 1] == specifier[j])
				{
					count += functions[j](args); /* appelle la fonction qui correspont dans le tableau */
					i++;
					break;
				}
				j++;
			}
			if (!specifiers[j]) /* si le spécifier est inconnu */
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				count += 2;
				i++;
			}
		}
		else /* si c'est pas un spécificateur */
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args) /* libère la liste */
	return (count);
}
