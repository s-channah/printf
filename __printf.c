#include "main.h"

int _printf(const char *format, ...);

/**
 * _printf - provided output to stdout based on format invoked
 * @format: a string format with commands
 * @...: variable number of arguments that can be called
 * Return: total character count printed on stdout except NULL
 */

int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0;

	va_start(args, format);

	while (*format && format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			counter++;
		}

		else
		{
			format++;
			if (*format == '%')
			{
				_putchar(*format);
				counter++;
			}

			else if (*format == 'c')
			{
				char c = va_arg(args, int);

				_putchar(c);
				counter++;
			}

			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				counter += _puts(str);

			}

			else
			{
				_putchar('%');
				counter++;

				_putchar(*format);
				counter++;
			}
		}

		format++;
	}

	va_end(args);
	return (counter);
}
