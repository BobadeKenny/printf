#ifndef MAIN
#define MAIN

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _print_str(char *str);
int _print_int(va_list list);

#endif
