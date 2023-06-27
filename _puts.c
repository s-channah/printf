#include "main.h"

/**
 * _puts - works to ptint strings to stdout
 * @str: pointer to strings to be written/printed
 * Return: numbers of char printed by puts function
 */

int _puts(char *str)
{
	int printed_count = 0;

	while (*str)
	{
		_putchar(*str);
		printed_count++;
		str++;
	}

	return (printed_count);

}
