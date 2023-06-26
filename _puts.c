#include "main.h"

/**
 * _puts - works to ptint strings to stdout 
 * @str: this is the string to be written/printed
 * Return: string invoked into the function
 */

int _puts(char *str)
{
	char c;
	int index = 0;

	while ((c = str[index++]))
		_putchar(c);
	return(index - 1);
}
