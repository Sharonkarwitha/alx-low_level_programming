#include <unistd.h>

/**
 * _putchar  - this will put a char to stdout
 * @c: this is a character to be printed
 * Return: returns success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
