#ifndef MAIN
#define MAIN

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _print_str(*str);
char _convert(unsigned int n, int base);

#endif
