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
	char *ptr, *sval;
	int count = 0;
	va_start(list, format);

	for (p = format; *p; p++)
	{
		while (*p != '\0')
		{
		if (*p != '%')
		{
			count += _putchar(*p);
			continue;
		}
		switch(*++p)
		{
			case 's':
				for (sval = va_arg(list, char *); *sval; sval++)
				{
					count += _putchar(*sval)
				}
				break;
			default:
				count += _putchar(*ptr);
				break;
		}
		}
	}
	va_end(list);
	return(count);
}

int main()
{
	int s = _printf("Hello");
	printf(s);
	return 0;
}
