#include "main.h"

/**
 * print_integer - prints integers
 * @n: integer
 * Return: length
 */
int print_integer(int n)
{
	 int num = n;
	int len = 1;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
		len++;
	}
	while (num / 10 > 0)
	{
		num /= 10;
		len++;
	}
	num = n;
	while (len > 0)
	{
		if (num < 0)
		{
			_putchar(-(num / len) + '0');
			num %= len;
		}
		else
		{
			_putchar(num / len + '0');
			num %= len;
		}
		len /= 10;
	}
	return (len);
}
