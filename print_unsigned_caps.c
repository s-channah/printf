#include "main.h"

/**
 * print_unsigned_caps - prints unsigned int in uppercase base
 * @n: the unsigned int to be printed in a certain base
 * @base: this is base @n would be converted & printed in
 * Return: number of char printed after conversion
 */

int print_unsigned_caps(unsigned int n, int base)
{
	int printed_count = 0;
	char *possible_digits = "0123456789ABCDEF";

	base = (unsigned int)base;

	if (n / base)
		printed_count += print_unsigned_int((n / base), base);

	_putchar(possible_digits[n % base]);
	printed_count++;

	return (printed_count);

}

