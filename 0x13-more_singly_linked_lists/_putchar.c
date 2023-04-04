#include "lists.h"

/**
* _putchar -prints/writes character
* @character : the character to print
* return : 1, success, -1 error
*/
int _putchar(char character)
{
	return (write(1, &character, 1))
}
