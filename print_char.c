#include "main.h"
/**
 * PrintChar - print character %c
 * @args: args argument
 */
int PrintChar(va_list args)
{
	char c = va_arg(args, char);

	if (!c)
	{
		return (0);
	}
	_putchar(c);
	return (1);
}
