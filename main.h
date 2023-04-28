#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h> /* malloc */
#include <stdarg.h>
typedef struct formattype
{
	char *frm;
	int (*func)(va_list args);
}formattype;
int SelectFunc(const char *format, va_list args);
int _putchar(char c);
int PrintPercent(va_list args);
int PrintChar(va_list args);
int PrintString(va_list args);
int _printf(const char *format, ...);
#endif
