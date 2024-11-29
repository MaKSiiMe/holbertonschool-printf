#include "main.h"

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
