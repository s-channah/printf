#include "main.h"

/**
 * binar - change int to binary
 * @list: int to change
 * Return: string with binary
 */

char *binar(va_list list)
{
	unsigned int j = 0, b = 1;
	unsigned int i, k;
	char *s;

	k = va_arg(list, int);
	i = k;

	/* malloc up to max int in binary */
	s = malloc(sizeof(char) * 33);
	if (s == NULL)
		return (NULL);
	/* find biggest power of 2 it's divisible by */
	while (k > 1)
	{
		k /= 2;
		b *= 2;
	}

	/* divide down and store binary num */
	while (b > 0)
	{
		s[j++] = (i / b + '0');
		i %= b;
		b /= 2;
	}
	s[j] = '\0';

	return (s);
}
