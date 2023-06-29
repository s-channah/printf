#include "main.h"

/**
 * print_address - prints hex address stored in *ptr
 * @the_ptr: pointer variable whose content we are to print
 * Return: number of characters printed this function
 */
int print_address(void *the_ptr)
{
	int printed_counts = 0;
	unsigned long int address = (unsigned long int)the_ptr;
	char *digits = "0123456789abcdef";
	int hex_digits = 0;
	unsigned long int temp = address;
	int index;

/* since all memory addrs start with 0x, we provided for it below */

	_putchar('0');
	_putchar('x');
	printed_counts += 2;

	if (temp == 0)
		hex_digits = 1;
	else
	{
		while (temp)
		{
			hex_digits++;
			temp >>= 4;
		}
	}

	for (index = (hex_digits - 1); index > -1; index--)
	{
		char d = digits[(address >> (4 * index)) & 0xf];

		_putchar(d);
		printed_counts++;
	}

	return (printed_counts);
}
