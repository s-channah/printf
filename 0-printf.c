#include "main.h"

int _printf(const char *format, ...);
int print_binary(unsigned int n);

/**
 * _printf - provided output to stdout based on format invoked
 * @format: a string format with commands
 * @...: variable number of arguments that can be called
 * Return: total character count printed on stdout except NULL
 */
int print_integer(int n);
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
			else if (*format == 'd' || *format == 'i')
			{
				counter += print_integer(va_arg(args, int));
				break;
			}
			else if (*format == 'b')
			{
					counter += print_binary(va_arg(args, unsigned int));
				break;
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
