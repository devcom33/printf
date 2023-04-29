#include "main.h"
/**
 * SelectFunc - selection function by the format
 * @format: format argument a char
 * @args: arguments on the type va_list
 * Return: number of characters
 */
int SelectFunc(const char *format, va_list args)
{
	formattype list_frmat[] = {{"%", PrintPercent}, {"c", PrintChar},
		{"s", PrintString}, {"NULL", NULL}};
	int cnt = 0, i;

	if (format == NULL)
	{
		return (-1);
	}
	while (*format)
	{
		if (*format == '%')
		{
			++format;
			for (i = 0; list_frmat[i].frm != NULL; i++)
			{
				if (*format == list_frmat[i].frm[0])
				{
					cnt += list_frmat[i].func(args);
					break;
				}
			}
			if (list_frmat[i].frm == NULL)
			{
				if ((*format) == ' ' || (*format) == 0)
				{
					return (-1);
				}
				else if ((*format) != 0)
				{
					_putchar(*(format - 1));
					_putchar(*format);
					cnt += 2;
				}
			}
		}
		else
		{
			_putchar(*format);
			cnt++;
		}
		format++;
	}
	return (cnt);
}
