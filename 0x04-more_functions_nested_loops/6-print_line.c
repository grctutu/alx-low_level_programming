#include "main.h"
/**
 * print_line - prints an underscore n times
 * @n: number of times printed
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
