#include <unistd.h>
/**
 * _putchar - print char
 * Return : 1 Success
 * Error : -1
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
