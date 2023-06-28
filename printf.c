#include "main.h"

int _printf(const char *format, ...);

/**
 * _printf - prints string to stdout based on args invoked
 * @format: string formats & commnands producing formatted output
 * @...: variable number of arguments that can be called
 * Return: total character counts printed to stdout except NULL
 */

int _printf(const char *format, ...)
{
	va_list args;
	int printed_count = 0;
	int n, n1, n2, n3, n4, n5, n6;
	char *str;


	union Converter
	{
		unsigned int ui;
		void *ptr;
	};
	union Converter converter;

	void *ptr;


	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (*format && format)
	{
		if (*format == '%' && *(format + 1) == '\0')
			return (-1);
		else if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(args, int));
					printed_count++;
					break;
				case '%':
					_putchar('%');
					printed_count++;
					break;
				case 's':
					str = va_arg(args, char *);

					if (str == NULL)
						str = "(null)";
					if (*str)
						printed_count += _puts(str);
					break;
				case 'd':
					n = va_arg(args, int);

					printed_count += print_integer(n);
					break;
				case 'b':
					n1 = va_arg(args, unsigned int);

					printed_count += print_unsigned_int(n1, 2);
					break;
				case 'u':
					n2 = va_arg(args, unsigned int);

					printed_count += print_unsigned_int(n2, 10);
					break;
				case 'X':
					n3 = va_arg(args, unsigned int);

					printed_count += print_unsigned_caps(n3, 16);
					break;
				case 'i':
					n4 = va_arg(args, int);

					printed_count += print_integer(n4);
					break;
				case 'o':
					n5 = va_arg(args, unsigned int);

					printed_count += print_unsigned_int(n5, 8);
					break;
				case 'x':
					n6 = va_arg(args, unsigned int);

					printed_count += print_unsigned_int(n6, 16);
					break;
				case 'p':
					ptr = va_arg(args, void *);
					printed_count += print_address(ptr);
					break;
				default:
					_putchar('%');
					_putchar(*format);
					printed_count += 2;
					break;
			}
		}
		else
		{
			_putchar(*format);
			printed_count++;
		}
		format++;
	}
	va_end(args);
	return (printed_count);
}
