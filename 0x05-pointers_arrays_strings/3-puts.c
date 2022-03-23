#include "main.h"
/**
 * _puts- prints a string to stdout
 * @str: char array string type
 * description: I can only use _putchar
 */
void _puts(char *str)
{
	int i;

	for (i = o; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
