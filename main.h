#ifndef MAIN_H
#define MAIN_H
#define _NULL NULL


#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
char *binar(va_list list);
char *_intst(int div, int length, int n);
char *print_d(va_list list);

#endif /* Hannah Sado and Elijah Omeruah*/
