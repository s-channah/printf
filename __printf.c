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

			else if (*format == 'i' || *format == 'd')
			{
				int x = va_arg(args, int);

				_putchar(x + '0');
				counter++;
			}

			else if (*format == 'u')
			{
				unsigned int x = va_arg(args, unsigned int);

				_putchar(x + '0');
				counter++;
			}

			else if (*format == 'x' || *format == 'X')
			{
				_putchar(*format);
				counter++;
			}

			else if (*format == 'o')
			{
				unsigned int y = va_arg(args, unsigned int);

				_putchar(y + '0');
				counter++;
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
