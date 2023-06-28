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
	char *digits = "0123456789abcdef";
	int hex_digits = 0;
	unsigned long int temp = address;
	int index;

	_putchar('0');
	_putchar('x');
	printed_count += 2;

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
		printed_count++;
	}

	return (printed_count);
}
