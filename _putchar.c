#include "main.h"

/**
 * _putchar - returns and write a char (one byte) to stdout
 * @c: character to be printed/written on stdout
 * Return: 1 (no of character printed), else -1 on failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
