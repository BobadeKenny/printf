#include "main.h"

/**
 * _printf - writes the character c to stdout
 * @format: The character string
 *
 * Return: On success total number of characters.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printf(const char *format, ...)
{
va_list list;
unsigned int i;
int j;
int res = 0;

if(format == NULL)
{
return (-1);
}
va_start(list, format);
for (j = 0; format[j] != '\0'; j++)
{
if (format[j] == '%')
{
switch(format[j + 1])
{
case 'c':
i = va_arg(list, int);
_putchar(i);
res = 1;
break;
case 's':
res = _print_str(va_arg(list, char *));
break;
}
}
else
{
	res += _putchar(format[j]);
}
}
va_end(list);
return(res);
}
