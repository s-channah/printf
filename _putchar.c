#include "main.h"

/**
 * _putchar - returns and write a char (one byte) to stdout
 * @c: character to be printed/written on stdout
 * Return: the character invoked, else -1 
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
