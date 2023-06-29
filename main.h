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


int print_unsigned_int(unsigned int n, int the_base);
int print_unsigned_caps(unsigned int n, int the_base);
int print_integer(int the_num);
int print_address(void *the_ptr);
int print_reverse(char *stringz);
int print_str(va_list argz);

#endif /* Hannah Sado and Elijah Omeruah*/
