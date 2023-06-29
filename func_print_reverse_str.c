#include "main.h"

/**
 * print_reverse - this is prints strings in rev
 * @stringz: pointer to first char in the string
 * Return: total no of char printed in rev
 */

int print_reverse(char *stringz)
{
	int the_printed_count = 0;
	int len, i;

	if (stringz == NULL)
		return (the_printed_count);

/* counting the string length needed print strings backward */

	for (len = 0; stringz[len]; len++)
		;
/* actual printing of strings in reverse with string length derived */

	for (i = len - 1; i > -1; i--)
	{
		_putchar(stringz[i]);
		the_printed_count++;
	}

	return (the_printed_count);
}
