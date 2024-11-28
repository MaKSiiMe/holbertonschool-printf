#include "main.h"

/**
 * print_char - print char
 * @args: list of arguments
 * Return: args + the number of characters printed
 */

int print_char(va_list args)
{
    char c = va_arg(args, int); /* on met le caractere args -> c */

    return (_putchar(c));
}
