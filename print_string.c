#include "main.h"
/**
 * PrintString - function that print a string %s
 * @list: list arguments
 */
int PrintString(va_list list)
{
	int cnt = 0;
	char *str = va_arg(list, char*);

	while (*str)
	{
		_putchar(*str);
		str++;
		cnt++;
	}
	return (cnt);
}
