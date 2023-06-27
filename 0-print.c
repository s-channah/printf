#include "main.h"

/**
 * _printf - prints output according to a format.
 * @format: character string.
 * Return: the number of characters print
 */

int _printf(const char *format, ...)
{
	int j = 0, count = 0;
	va_list haj;
	char *str;

	va_start(haj, format);
	if (*format)
	{
	while (*format)
	{
	if (*format == '%')
	{
		format++;
		switch (*format)
	{
		case 'c':
		j = va_arg(haj, int);
		_putchar(j);
		count++;
		break;
		case 's':
		str = va_arg(haj, char *);
		while (*str)
		{
			_putchar(*str);
			str++;
			count++;
		}
			break;
		case '%':
			_putchar('%');
			count++;
			break;
		default:
			_putchar('%');
			_putchar(*format);
			count += 2;
	}
	}
	else
	{
			_putchar(*format);
			count++;
	}
			++format;
	}
	va_end(haj);
	return (count);
}
