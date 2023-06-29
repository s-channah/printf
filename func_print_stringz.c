#include "main.h"

/**
 * print_str - this prints string invoked in it
 * @argz: va_list type variable containing arguments
 * Return: no of string characters printed except NULL
 */


int print_str(va_list argz)
{
	int the_printed_count = 0;
	char *str;

	str = va_arg(argz, char *);

/* edge case provision where pointer to the strings is NULL */

	if (str == NULL)
		str = "(null)";

	the_printed_count += _puts(str);

	return (the_printed_count);
}
