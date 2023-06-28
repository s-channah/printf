#include "main.h"

/**
 * print_reverse - this is prints strings in rev
 * @str: pointer to first char in the string
 * Return: total no of char printed in rev
 */

int print_reverse(char *str)
{
	int printed_count = 0;
	int len, i;

	if (str == NULL)
		return (printed_count);

	for (len = 0; str[len]; len++)
		;

	for (i = len - 1; i > -1; i--)
	{
		_putchar(str[i]);
		printed_count++;
	}

	return (printed_count);
}
