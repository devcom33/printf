#include "main.h"
/**
 * _printf - print function
 * @format: format argument
 */
int _printf(const char *format, ...)
{
	va_list arguments;

	va_start(arguments, format);

	int cnt = SelectFunc(format, arguments);

	va_end(arguments);
	return (cnt);
}
