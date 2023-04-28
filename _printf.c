#include "main.h"
/**
 * _printf - print function
 * @format: format argument
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	va_start(arguments, format);
	int cnt = 0, i;

	while (*format)
	{
		if (*format == '%')
		{
			++format;
			if (*format == '%')
			{
				_putchar('%');
				cnt++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(arguments, char*);
				for (i = 0; *s != '\0'; i++)
				{
					_putchar(*s);
					s++;
					cnt++;
				}
			
			}
			else if (*format == 'c')
			{
				int ctr = va_arg(arguments, int);
				_putchar(ctr);
				cnt++;
			}
		}
		else
		{
			_putchar(*format);
			cnt++;
		}
		format++;	
	}





}
