#include "main.h"

/**
 * print_integer - this prints int number invoked in it
 * @num: variable storing no to be printed when invoked
 * Return: no of characters printed by this function
 */

int print_integer(int num)
{
	int printed_count = 0;
	unsigned int n;

	if (num < 0)
	{
		_putchar('-');
		printed_count++;
		n = -(num);
	}

	else 
		n = num;

	if (n / 10)
		printed_count += print_integer(n/10);

	_putchar((n % 10) + '0');
	printed_count++;

	return (printed_count);
}
