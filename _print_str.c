#include "main.h"
/**
 * _print_str - Prints sting character
 * @str: list of arguments
 * 
 */
int _print_str(*str)
{
	int i; 

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i + 1);
}