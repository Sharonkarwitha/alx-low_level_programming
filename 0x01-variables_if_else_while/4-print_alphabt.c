#include <stdio.h>
/**
 * main - main block
 * Description: get a random number and check its
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')

{
	if (c != 'o' && c != 'q')

	{
		putchar(c);
	}
	c++;
}
putchar('\n');
return (0);
}
