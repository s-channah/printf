#include "main.h"

int _printf(const char *format, ...);
int print_binary(unsigned int n);

/**
 * _printf - prints string to stdout based on args invoked
 * @format: string formats & commnands producing formatted output
 * @...: variable number of arguments that can be called
 * Return: total character counts printed to stdout except NULL
 */
int print_integer(int n);
int _printf(const char *format, ...)
{
	va_list args;
	int printed_count = 0;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (*format && format)
	{
		if (*format == '%')
		{
			format++;
<<<<<<< HEAD:0-printf.c
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
=======
			switch (*format)
>>>>>>> a51ab22b4c54eaa835053e3eb6f22eee34ae315e:printf.c
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
					char *str = va_arg(args, char *);

					printed_count += print_str(str);
					break;
				case 'd':
					int n = va_arg(args, int);

					printed_count += print_integer(n);
					break;
				case 'b':
					int n = va_arg(args, unsigned int);

					printed_count += print_unsigned_int(n, 2);
					break;
				case 'u':
					int n = va_arg(args, unsigned int);

					printed_count += print_unsigned_int(n, 10);
					break;
				case 'X':
					int n = va_arg(args, unsigned int);

					printed_count += print_unsigned_caps(n, 16);
					break;
				case 'i':
					int n = va_arg(args, int);

					printed_count += print_integer(n);
					break;
				case 'o':
					int n = va_arg(args, unsigned int);

					printed_count += print_unsigned_int(n, 8);
					break;
				case 'x':
					int n = va_arg(args, unsigned int);

					printed_count += print_unsigned_int(n, 16);
					break;
				case 'p':
					void *n = va_arg(args, unsigned int);

					printed_count += print_address(n);
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
			_putchar(*f);
			printed_count++;
		}
		format++;
	}
	va_end(args);
	return (printed_count);
}

