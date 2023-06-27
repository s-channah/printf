#include "main.h"

/**
 * print_binary - print binary numbers
 * @n: positive integers
 * Return: 1
 */

int print_binary(unsigned int n)
{
	unsigned int i = 1;

	while (i <= n / 2)
		i *= 2;
	while (i > 0)
	{
		if (n >= i)
		{
			_putchar('1');
			n -= i;
		}
		else
			_putchar('0');
		i /= 2;
	}
	return (1);
}
