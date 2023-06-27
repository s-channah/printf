#include "main.h"

/**
 * print_str - this prints string invoked in it
 * @args: va_list type variable containing arguments
 * Return: no of string characters printed except NULL
 */


int print_str(va_list args)
{
	int printed_count = 0;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	printed_count += _puts(str);

	return (printed_count);
}
