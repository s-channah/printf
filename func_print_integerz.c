#include "main.h"

/**
 * print_integer - this prints int number invoked in it
 * @the_num: variable storing no to be printed when invoked
 * Return: no of characters printed by this function
 */

int print_integer(int the_num)
{
	int the_printed_count = 0;
	unsigned int n;

/* if neg, printing out negative sign before converting num to positive */

	if (the_num < 0)
	{
		_putchar('-');
		the_printed_count++;
		n = -(the_num);
	}

	else
		n = the_num;

/* after ensuring num is positive, we print its digits & return the count */

	if (n / 10)
		the_printed_count += print_integer(n / 10);

	_putchar((n % 10) + '0');
	the_printed_count++;

	return (the_printed_count);
}
