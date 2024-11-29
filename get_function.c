#include "main.h"
#include <stddef.h>

/**
 * specifiers_handler - Entry point
 * @specifier: operator
 * Return: 0
 */

int (*specifiers_handler(const char specifier))(va_list)
{
	format check[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_integer},
		{"d", print_integer},
		{"\0", NULL}
	};

	int i = 0;

	while (check[i].spec != NULL)
	{
		if (check[i].spec[0] == specifier)
			return (check[i].function);
		i++;
	}
	return (0);
}
