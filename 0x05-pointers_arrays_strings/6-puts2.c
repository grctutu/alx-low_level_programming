#include "main.h"
/**
 * puts2- print one char out of 2 of a string
 * @str: char array string type, where *str is a pointer
 * Description: print 1st char, then 3rd, then 5th, etc..
 */
void puts2(char *str)
{
	int i;

	for (i = o; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
