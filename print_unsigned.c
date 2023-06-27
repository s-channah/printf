#include "main.h"

/**
 * print_unsigned_int - printing unsigned int in given base
 * @n: the unsigned int to be printed in a certain base
 * @base: this is base @n would be converted & printed in
 * Return: number of char printed after conversion
 */

int print_unsigned_int(unsigned int n, int base)
{
	int printed_count = 0;
	char *possible_digits = "0123456789abcdef";

	base = (unsigned int) base;

	if (n / base)
		printed_count += print_unsigned_int((n / base), base);

	_putchar(possible_digits[n % base]);
	printed_count++;

	return (printed_count);

}
