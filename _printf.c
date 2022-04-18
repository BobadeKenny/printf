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
	char *ptr;
	char *sval;
	unsigned int i;
	int count = 0;
	va_start(list, format);

	for (ptr = format; *ptr != '\0'; ptr++)
	{
		while (*ptr != '%')
		{
			count += _putchar(*ptr);
			*ptr++;
		}
		*ptr++;
		switch(*ptr)
		{
			case 'c':
				i = va_arg(list, int);
				count += _putchar(i);
				break;
			case 's':
				for (sval = va_arg(list, char *); *sval != '\0'; sval++)
				{
					count += _putchar(*sval);
				}
				break;
		}
	}
	va_end(list);
	return(count);
}
