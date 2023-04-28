#include <unistd.h>
/**
 * _putchar - print char
 * @c: char argument
 * Return: 1 Success
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
