#include "main.h"
/**
 * _print_int - Prints integers
 * @list: list of arguments
 * Return: num of chars printed
 */

int _print_int(va_list list)
{
	int res, num, div;

	res = 0;
	div = 1;
	num = va_arg(list, int);
if (num < 0)
{
	res += _putchar('-');
	num *= -1;
}
while (num / div > 9)
{
	div *= 10;
}
while (div != 0)
{
	res += _putchar('0' + num / div);
	num %= div;
	div /= 10;
}
return (res);
}
