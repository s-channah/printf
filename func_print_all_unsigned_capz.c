#include "main.h"

/**
 * print_unsigned_caps - prints unsigned int in uppercase base
 * @n: the unsigned int to be printed in a certain base
 * @the_base: this is base @n would be converted & printed in
 * Return: number of char printed after conversion
 */

int print_unsigned_caps(unsigned int n, int the_base)
{
	int printed_count = 0;
	char *possible_digits = "0123456789ABCDEF";

/* changing the type of the base number to be positive where negative */

	the_base = (unsigned int)the_base;

	if (n / the_base)
		printed_count += print_unsigned_int((n / the_base), the_base);

	_putchar(possible_digits[n % the_base]);
	printed_count++;

	return (printed_count);

}

