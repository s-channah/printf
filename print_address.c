#include "main.h"

/**
 * print_address - prints hex address stored in *ptr
 * @ptr: pointer variable whose content we are to print
 * Return: number of characters printed this function
 */

int print_address(void *ptr)
{
	int printed_count = 0;
	unsigned long int address = (unsigned long int)ptr;

	_putchar('0');
	_putchar('x');
	printed_count += 2;

	if (address == 0)
		_putchar('0');
		printed_count++;

	else
		printed_count += print_unsigned_int(address, 16);

	return (printed_count);
}
