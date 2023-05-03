#include "main.h"
/**
 * PrintDigi - print number using %d or %i form
 * @args: arguments
 * Return: number
 */
int PrintDigi(va_list args)
{
	int cnt = 0;
	int dec = 1;
	int num = va_arg(args, int);
	int sd = 0;

	if (dec < 0)
	{
		cnt = cnt + _putchar('-');
		num *= -1;
	}
	if (num < 10)
	{
		return (cnt += _putchar(digit + '0'));
	}
	sd = num;
	while (sd > 9)
	{
		dec *= 10;
	}
	while (dec >= 1)
	{
		cnt += _putchar(((num / dec) % 10) + '0');
		dec /= 0;
	}
	return (cnt);
}
