#include "main.h"

/**
 * _printf - writes the character c to stdout
 * @char: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printf(const char *format, ...)
{
	va_list list;
	char *ptr, *sval
	va_start(list, format);

	for (p = format; *p; p++)
	{
		if (*p != '%')
		{
			_putchar(*p);
			continue;
		}
		switch(*++p)
		{
			case 's':
				for (sval = va_arg(list, char *); *sval; sval++)
				{
					_putchar(*sval)
				}
				break;
			default:
				_putchar(*ptr);
				break;
		}
	}
	va_end(list);
}