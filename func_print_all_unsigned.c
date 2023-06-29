#include "main.h"

/**
 * print_unsigned_int - printing unsigned int in given base
 * @n: the unsigned int to be printed in a certain base
 * @the_base: this is base @n would be converted & printed in
 * Return: number of char printed after conversion
 */

int print_unsigned_int(unsigned int n, int the_base)
{
	int printed_count = 0;
	char *possible_digits = "0123456789abcdef";

/* changing the base number to be positive in case it's negative */

	the_base = (unsigned int) the_base;

	if (n / the_base)
		printed_count += print_unsigned_int((n / the_base), the_base);

	_putchar(possible_digits[n % the_base]);
	printed_count++;

	return (printed_count);

}
