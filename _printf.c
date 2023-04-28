#include "main.h"
/**
 * _printf - function that print any format
 * @format: format argument %.
 * Return: number of charcter
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int cnt = 0;

	va_start(arguments, format);
	cnt = SelectFunc(format, arguments);
	va_end(arguments);
	return (cnt);
}
