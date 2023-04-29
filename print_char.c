#include "main.h"
/**
 * PrintChar - print character %c
 * @args: args argument
 * Return: count of chars
 */
int PrintChar(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
